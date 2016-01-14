#include "changepass.h"
#include "ui_changepass.h"
#include <QDebug>
#include "login.h"
#include <QSqlQuery>
#include "rolesel.h"
#include <QMessageBox>
bool createConnection();

changePass::changePass(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::changePass)
{
    ui->setupUi(this);
}

changePass::~changePass()
{
    delete ui;
}

void changePass::receiveData(QString data)
{
    QString value = data;
    ui->label_employeeID->setText(value);
    qDebug() << "The received value is: "+value;
}

void changePass::on_pushButton_confirm_clicked()
{
    QString currentPassword = ui->lineEdit_current->text();
    QString newPassword = ui->lineEdit_new->text();
    QString currPass;
    QSqlQuery query;
    QString employID = ui->label_employeeID->text();

    //preps the current password based on employeeID
    query.prepare("SELECT * FROM Account WHERE employeeID = '"+employID+"'");
    query.exec();

    while(query.next())
    {
        currPass = query.value(5).toString();
    }
    //qDebug() <<"currPass: "+currPass;
    //qDebug() <<"employeeID: "+employID;

    //sets the new password if current passwords match
    if(currentPassword == currPass)
    {
        qDebug()<<"current Password matches";
        ui->label_status->setText("Current passwords match");
        query.prepare("UPDATE Account SET password = :newPassword, ispasswdtemp = '0' WHERE employeeID = :employeeID");

        query.bindValue(":newPassword", newPassword);
        query.bindValue(":employeeID", ui->label_employeeID->text());
        qDebug()<<"New password is: "+newPassword;

        query.exec();

        QMessageBox msgbox;

        msgbox.setText("You have successfully changed your password to: "+newPassword);
        msgbox.exec();

        //move back to login
        //Login *login = new Login();
        //this->close();
        //login->show();
        //login->activateWindow();
        //login->raise();

        //move to roleSel screen
        roleSel *roleDash = new roleSel();
        QString employID = ui->label_employeeID->text();
        QObject::connect(this, SIGNAL(sendData(QString)), &*roleDash, SLOT(receiveData(QString)));
        qDebug()<<"Sending data: "<<employID;
        emit sendData(employID);
        this->close();
        //roleDash->show();
        //roleDash->activateWindow();
        //roleDash->raise();

    }
    //current passwords dont match
    else
    {
        ui->label_status->setText("Current passwords do not match");
        //qDebug()<<"Current password doesn't match";
    }

}

void changePass::on_pushButton_back_clicked()
{
    Login *login = new Login();
    this->close();
    login->show();
    login->activateWindow();
    login->raise();
}
