/*
#include "accountcreate.h"
#include "ui_accountcreate.h"
#include <QtSql>
#include <QMessageBox>
#include <QString>

bool createConnection();
void createTempPass();

accountCreate::accountCreate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::accountCreate)
{
    ui->setupUi(this);
    connect(ui->pushButton_create,SIGNAL(released()),this,SLOT(create()));
    //connect(ui->pushButton_createTempPass,SIGNAL(clicked(bool)),this,SLOT(create()));
}



accountCreate::~accountCreate()
{
    delete ui;
}



void accountCreate::create()
{
QMessageBox msgbox;

    if (!createConnection()){

            msgbox.setText("Not connected!");
            msgbox.exec();
        }
        else{

            QSqlQuery query;
            query.prepare("INSERT INTO Account(accountID,employeeID, firstName,middleName,lastName,password,ispasswdtemp,islocked,isAdministrator,isAssistAdmin,isSysAdmin,isTA,isInstructor) "
                          "VALUES (:accountID,:employeeID,:firstName,:middleName,:lastName,:password,:ispasswdtemp,:islocked,:isAssistAdmin,:isSysAdmin,:isAdministrator,:isTA,:isInstructor)");



            //ui->lineEdit_tempPass->setEnabled(true);
            query.bindValue(":accountID",ui->Text_accountID->text());
            query.bindValue(":employeeID",ui->Text_employeeID->text());
            query.bindValue(":firstName",ui->Text_firstName->text());
            query.bindValue(":middleName",ui->Text_middleName->text());
            query.bindValue(":lastName",ui->Text_lastName->text());
            //query.bindValue(":userName",ui->Text_userName->text());
            query.bindValue(":password",ui->lineEdit_tempPass->text());
            query.bindValue(":ispasswdtemp",ui->checkBox_ispasswdtemp->isChecked());
            query.bindValue(":islocked",ui->checkBox_islocked->isChecked());
            query.bindValue(":isAssistAdmin",ui->checkBox_isAssistAdmin->isChecked());
            query.bindValue(":isSysAdmin",ui->checkBox_isSysAdmin->isChecked());
            query.bindValue(":isTA",ui->checkBox_isTA->isChecked());
            query.bindValue(":isInstructor",ui->checkBox_isInstructor->isChecked());
            query.bindValue(":isAdministrator",ui->checkBox_isAdministrator->isChecked());


            if(ui->Text_accountID->text()!="")
            {
                if(query.exec())

                {
                    QMessageBox::information(this,"","New record added!");
                    this->close();
                }
                else
                {
                    QMessageBox::information(this,"",query.lastError().text());
                }
            }
    }
}

//creates a temporary password when button is pressed
void accountCreate::on_pushButton_createTempPass_clicked(bool pressed)
{
    int randmax = 99999999;
        int randmin = 10000000;

       // QTime time = QTime::currentTime();
        //qsrand((uint)time.msec());

        int pass = qrand()%(randmax-randmin+1)+randmin;
        QString tempPass = QString::number(pass);
        ui->lineEdit_tempPass->setText(tempPass);
        ui->lineEdit_tempPass->setEnabled(false);

        //ui->Text_password->setText(hidePass);
        ui->checkBox_ispasswdtemp->setChecked(true);
        ui->checkBox_ispasswdtemp->setEnabled(false);

        QMessageBox msgbox;

        msgbox.setText("Temporary pass is: "+tempPass);
        msgbox.exec();

}*/

#include "systemadminview.h"
#include "accountCreate.h"
#include "ui_accountcreate.h"
#include <QtSql>
#include <QMessageBox>
#include <QString>
#include "login.h"

bool createConnection();
void createTempPass();

accountCreate::accountCreate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::accountCreate)
{
    ui->setupUi(this);
    connect(ui->pushButton_create,SIGNAL(released()),this,SLOT(create()));
    //connect(ui->pushButton_createTempPass,SIGNAL(clicked(bool)),this,SLOT(create()));
}

//Updated July/26 by Stan

accountCreate::~accountCreate()
{
    delete ui;
}



void accountCreate::create()
{
QMessageBox msgbox;

    Login newConnecction;
    if (!newConnecction.createConnection()){

            msgbox.setText("Not connected!");
            msgbox.exec();
        }
        else{

            int initialCount = 0;
            QSqlQuery query;
            query.prepare("INSERT INTO Account(accountID,employeeID, firstName,middleName,lastName,password, loginCountID ,ispasswdtemp,islocked,isAdministrator,isAssistAdmin,isSysAdmin,isTA,isInstructor) "
                          "VALUES (:accountID,:employeeID,:firstName,:middleName,:lastName,:password,:loginCountID,:ispasswdtemp,:islocked,:isAdministrator,:isAssistAdmin,:isSysAdmin,:isTA,:isInstructor)");

            query.bindValue(":accountID",ui->Text_accountID->text());
            query.bindValue(":employeeID",ui->Text_employeeID->text());
            query.bindValue(":firstName",ui->Text_firstName->text());
            query.bindValue(":middleName",ui->Text_middleName->text());
            query.bindValue(":lastName",ui->Text_lastName->text());
            //query.bindValue(":userName",ui->Text_userName->text());
            query.bindValue(":password",ui->lineEdit_tempPass->text());
            query.bindValue(":ispasswdtemp",ui->checkBox_ispasswdtemp->isChecked());
            query.bindValue(":islocked",ui->checkBox_islocked->isChecked());
            query.bindValue(":isAssistAdmin",ui->checkBox_isAssistAdmin->isChecked());
            query.bindValue(":isSysAdmin",ui->checkBox_isSysAdmin->isChecked());
            query.bindValue(":isTA",ui->checkBox_isTA->isChecked());
            query.bindValue(":isInstructor",ui->checkBox_isInstructor->isChecked());
            query.bindValue(":isAdministrator",ui->checkBox_isAdministrator->isChecked());
            query.bindValue(":loginCountID", initialCount);
            query.finish();

            if(ui->Text_accountID->text()!="")
            {
                if(query.exec())

                {
                    QMessageBox::information(this,"","New record added!");


                }
                else
                {
                    QMessageBox::information(this,"",query.lastError().text());
                }
            }

            if (ui->checkBox_isTA->isChecked()){
                QMessageBox::information(this,"","inside!");
                QSqlQuery queryTAupdate;
                queryTAupdate.prepare ("INSERT INTO TA (taID, accountID, taName)" "VALUES(:taID, :accountID, :taName)");
                queryTAupdate.bindValue(":accountID",ui->Text_accountID->text());
                queryTAupdate.bindValue(":taID",ui->Text_employeeID->text());
                queryTAupdate.bindValue(":taName",ui->Text_firstName->text());
                if(queryTAupdate.exec())

                {
                    QMessageBox::information(this,"","Ta!");


                }

            }
            }
    }





//creates a temporary password when button is pressed
void accountCreate::on_pushButton_createTempPass_clicked(bool pressed)
{
    const QString possibleCharacters("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789");
    const int randomStringLength = rand() % ((12 + 1)-6)+6;

    QString randomString;
    for(int i=0; i<randomStringLength; ++i)
    {
       int index = qrand() % possibleCharacters.length();
       QChar nextChar = possibleCharacters.at(index);
       randomString.append(nextChar);
    }

        QString tempPass = randomString;
        ui->lineEdit_tempPass->setText(tempPass);
        ui->lineEdit_tempPass->setEnabled(false);

        //ui->Text_password->setText(hidePass);
        ui->checkBox_ispasswdtemp->setChecked(true);
        ui->checkBox_ispasswdtemp->setEnabled(false);

        QMessageBox msgbox;

        msgbox.setText("Temporary pass is: "+tempPass);
        msgbox.exec();
}

void accountCreate::on_pushButton_back_clicked()
{
    //systemadminview *sysDash = new systemadminview();
    this->close();
}


