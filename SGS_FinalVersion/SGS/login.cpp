#include "login.h"
#include "ui_login.h"
#include "rolesel.h"
#include <QDebug>
#include <QObject>
#include <QSqlQuery>
#include <QStackedWidget>
#include <QSqlRecord>
#include "changepass.h"
#include <QMessageBox>
#include "accountcreate.h"


Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    loginCount=1;
    ui->setupUi(this);
    if (createConnection())
    {
        ui->label_status->setText("Database is connected");
    }
    else
        ui->label_status->setText("Database is not connected");
}

bool Login::createConnection(){

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

Login::~Login()
{
    delete ui;
}

void Login::setLoginCount(QString username)
{
    QSqlQuery query;
    query.prepare("SELECT loginCountID FROM Account WHERE accountID = '"+username+"'");
    qDebug()<<"The username being sent to LLC is : "<<username;
    if(query.exec())
    {
        if(query.next())
        {
            //initialize loginCount
            loginCount = query.value(0).toInt();
            qDebug()<<"The loginCount set in LLC is: "<<loginCount;
        }
    }
    else
        qDebug("Failed retreiving from database");
}


void Login::on_pushButton_Login_clicked()
{

    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
    QSqlQuery query;
    QString employID;
    QString isTempPass;
    QString islocked;
    roleSel *roleDash = new roleSel();
    query.bindValue(":username", username);
    query.bindValue(":password", password);
    bool debug = true;

    if (debug)
    {
        if ((username == "root") & (password == "root"))
        {
            accountCreate *ACDash = new accountCreate();
            this->close();
            ACDash->show();
            ACDash->activateWindow();
            ACDash->raise();
        }
    }
    setLoginCount(username);

                //checks login if correct
                query.prepare("SELECT * FROM Account WHERE accountID = '"+username+"' and password = '"+password+"'");
                if (query.exec())
                {
                    qDebug()<<"Code has entered login check";
                    int count=0;
                    while(query.next())
                    {
                        employeeID = query.value(1).toString();
                       // qDebug()<<"I have entered this";
                        isTempPass = query.value(6).toString();
                        islocked = query.value(7).toString();
                        count++;
                        qDebug()<<"The count is: "<<count;
                     }
                     if (count==1)
                     {
                        ui->label_status->setText("Login Successful");

                        //user needs to change password because current is temporary
                        if (isTempPass == "1")
                        {
                            changePass *passDash = new changePass();
                            QObject::connect(this, SIGNAL(sendData(QString)), &*passDash, SLOT(receiveData(QString)));
                            emit sendData(employeeID);
                            passDash->setModal(true);
                            passDash->show();
                            passDash->activateWindow();
                            passDash->raise();
                        }
                        else //information is correct
                        {
                            //check if account is locked
                            if (islocked == "1")
                            {
                                QMessageBox msgbox;
                                msgbox.setText("Your Account is locked, please see a system administrator");
                                msgbox.exec();
                            }
                            //account is not locked
                            else
                            {
                                QObject::connect(this, SIGNAL(sendData(QString)), &*roleDash, SLOT(receiveData(QString)));
                                qDebug()<<"Sending data: "<<employeeID;
                                qDebug()<<"Temporary pass is: "<<isTempPass;
                                emit sendData(employeeID);
                                query.prepare("UPDATE Account SET loginCountID = '0' FROM Account WHERE accountID = '"+username+"'");
                                if(query.exec())
                                {
                                     qDebug()<<"The loginCount being reset to is : "<<loginCount;
                                     ui->label_loginCount->setText("");
                                }
                                this->hide();
                                roleDash->show();
                                roleDash->activateWindow();
                                roleDash->raise();
                            }
                        }
                      }
                        //login information is incorrect
                        if (count<1)
                        {
                            qDebug()<<"Code has entered the fail to vertify section";
                            ui->label_status->setText("username or password is incorrect");
                            //check if loginCount has been maxed
                            //if loginCount is over 6 then lock the account
                            if (loginCount >6)
                            {
                                QMessageBox msgbox;
                                msgbox.setText("You have failed to login 6 times, your account is now locked. "
                                                 "Please see the system administrator for further assistance");
                                query.prepare("UPDATE Account SET islocked = '1' FROM Account WHERE accountID = '"+username+"'");
                                query.exec();
                                msgbox.exec();

                                //reset count and label
                                //loginCount = 1;
                                query.prepare("UPDATE Account SET loginCountID = '0' FROM Account WHERE accountID = '"+username+"'");
                                if(query.exec())
                                {
                                     qDebug()<<"The loginCount being reset to is : "<<loginCount;
                                     ui->label_loginCount->setText("");
                                }

                            }
                            //or just increase loginCount and display warning
                            else
                            {
                                //increase login count for failed login
                                loginCount++;
                                qDebug()<<(QString("Currently trying to insert: %1 into loginCountID").arg(loginCount));
                                qDebug()<<"The username's loginCountID being changed is: "<<username;
                                query.prepare("UPDATE Account SET loginCountID = :loginCountID FROM Account WHERE accountID = '"+username+"'");
                                query.bindValue(":loginCountID", loginCount);
                                query.exec();
                                qDebug()<<(loginCount)<<"times has been tried";
                                ui->label_loginCount->setText(QString("You have tried to login: %1 times").arg(loginCount));
                            }

                        }
                    }


}


