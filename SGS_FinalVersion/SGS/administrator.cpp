#include "administrator.h"
#include "ui_administrator.h"
#include "login.h"
#include "marker.h"
#include <QObject>
#include <QDebug>
#include "changepass.h"

Administrator::Administrator(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Administrator)
{
    ui->setupUi(this);
}

Administrator::~Administrator()
{
    delete ui;
}

void Administrator::on_pushButton_logout_clicked()
{
    Login *login = new Login();
    this->close();
    login->show();
}

void Administrator::on_pushButton_mark_clicked()
{
    role = "Administrator";
    marker *markDash = new marker();
    QObject::connect(this, SIGNAL(sendData(QString)), &*markDash, SLOT(receiveData(QString)));
    emit sendData(role);

    //QString employID = ui->label_receiveData->text();
    QObject::connect(this, SIGNAL(sendData2(QString)), &*markDash, SLOT(receiveData2(QString)));
    qDebug()<<"Sending data: "<<employeeID;
    emit sendData2(employeeID);

    this->close();
    markDash->show();
    markDash->activateWindow();
    markDash->raise();
}

void Administrator::receiveData(QString data)
{
    //QString value = data;
    employeeID = data;
    //ui->label_receiveData->setText(value);
    qDebug() << "The received value is: "+employeeID;
}

void Administrator::on_pushButton_ChangePass_clicked()
{
   //QString employID = ui->label_receiveData->text();
   changePass *CPDash = new changePass();
   QObject::connect(this, SIGNAL(sendData(QString)), &*CPDash, SLOT(receiveData(QString)));
   emit sendData(employeeID);
   CPDash->setModal(true);
   CPDash->show();
   CPDash->activateWindow();
   CPDash->raise();
}
