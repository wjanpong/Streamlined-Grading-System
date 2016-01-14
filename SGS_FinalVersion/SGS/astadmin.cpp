#include "astadmin.h"
#include "ui_astadmin.h"
#include "login.h"
#include "create_course.h"
#include "modify_courses.h"
#include "view_course.h"
#include <QtSql>
#include "changepass.h"
AstAdmin::AstAdmin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AstAdmin)
{
    ui->setupUi(this);
}

AstAdmin::~AstAdmin()
{
    delete ui;
}

void AstAdmin::on_pushButton_logout_clicked()
{
    Login *login = new Login();
    this->close();
    login->show();
}

void AstAdmin::on_pushButton_createcourse_clicked()
{
    create_course createWindow;
    createWindow.setModal(true);
    createWindow.exec();

}

void AstAdmin::on_pushButton_modifycourse_clicked()
{
    modify_courses createWindow;
    createWindow.setModal(true);
    createWindow.exec();

}
/*
bool AstAdmin::createConnection2()
{
        QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
        db.setDatabaseName("Driver={SQL Server};Server=cypress.csil.sfu.ca;Database=c275g03A;"); //replace with your database name
        db.setUserName("s_jarboled"); //replace this with your username
        db.setPassword("Hg722JY4tjMmh3bq"); //replace this with your password

        if (!db.open()) {
            qDebug() << "Database error occurred";
            return false;
        }
        return true;
    }
*/
void AstAdmin::on_pushButton_ViewCourse_clicked()
{
    view_course createWindow;
    createWindow.setModal(true);
    createWindow.exec();

}

void AstAdmin::receiveData(QString data)
{
    //QString value = data;
    //ui->label_employeeID->setText(value);
    employeeID = data;
    qDebug() << "The received value is: "+employeeID;
}


void AstAdmin::on_pushButton_ChangePass_clicked()
{
    //QString employID = ui->label_employeeID->text();
    changePass *CPDash = new changePass();
    QObject::connect(this, SIGNAL(sendData(QString)), &*CPDash, SLOT(receiveData(QString)));
    emit sendData(employeeID);
    CPDash->setModal(true);
    CPDash->show();
    CPDash->activateWindow();
    CPDash->raise();
}
