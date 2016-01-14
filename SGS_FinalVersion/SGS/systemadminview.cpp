/*
#include "systemadminview.h"
#include "ui_systemadminview.h"
#include <QtSql>
#include <QMessageBox>
#include <QtDebug>
#include "accountcreate.h"
#include "login.h"

bool createConnection();

systemadminview::systemadminview(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::systemadminview)
{
    ui->setupUi(this);

    //connect(ui->pushButton_load,SIGNAL(released()),this,SLOT(load()));
}

systemadminview::~systemadminview()
{
    delete ui;
}

//link the UI
void systemadminview::on_addNewAccount_clicked()
{
    accountCreate *accountCreateDash = new accountCreate();
    accountCreateDash->setModal(true);
    accountCreateDash->show();
    accountCreateDash->activateWindow();
    accountCreateDash->raise();
}

void systemadminview::on_Load_table_clicked()
{

    QMessageBox msgbox;

        if (!createConnection()){

                msgbox.setText("Not connected!");
                msgbox.exec();
            }
            else{
           

            //tablewidget
                QSqlQuery query;

                query.exec("select accountID from dbo.Account");// choose the attribute you want to display form database

                ui->table_account->setRowCount(15); //this is QTableWidget
                //ui->Ta_list->setColumnCount( 2); //<- depends how many columns has your query

                int row =0;
                QTableWidgetItem *tmpItem;

                while (query.next()) { //this next() is important
                                    int col = 0;
                                    tmpItem= new QTableWidgetItem(tr("%1").arg(query.value(0).toString()));
                                    ui->table_account->setItem(row++, col, tmpItem);
                                    }

                QSqlQuery query1;
                row=0;
                query1.exec("select employeeID from dbo.Account");// choose the attribute you want to display form database
                while (query1.next()) { //this next() is important
                                    int col = 1;
                                    tmpItem= new QTableWidgetItem(tr("%1").arg(query1.value(0).toString()));
                                    ui->table_account->setItem(row++, col, tmpItem);
                                    }
                QSqlQuery query2;
                row=0;
                query2.exec("select firstName from dbo.Account");// choose the attribute you want to display form database
                while (query2.next()) { //this next() is important
                                    int col = 2;
                                    tmpItem= new QTableWidgetItem(tr("%1").arg(query2.value(0).toString()));
                                    ui->table_account->setItem(row++, col, tmpItem);
                                    }
                QSqlQuery query3;
                row=0;
                query3.exec("select middleName from dbo.Account");// choose the attribute you want to display form database
                while (query3.next()) { //this next() is important
                                    int col = 3;
                                    tmpItem= new QTableWidgetItem(tr("%1").arg(query3.value(0).toString()));
                                    ui->table_account->setItem(row++, col, tmpItem);
                                    }
                QSqlQuery query4;
                row=0;
                query4.exec("select lastName from dbo.Account");// choose the attribute you want to display form database
                while (query4.next()) { //this next() is important
                                    int col = 4;
                                    tmpItem= new QTableWidgetItem(tr("%1").arg(query4.value(0).toString()));
                                    ui->table_account->setItem(row++, col, tmpItem);
                                    }
                QSqlQuery query5;
                row=0;
                query5.exec("select userName from dbo.Account");// choose the attribute you want to display form database
                while (query5.next()) { //this next() is important
                                    int col = 5;
                                    tmpItem= new QTableWidgetItem(tr("%1").arg(query5.value(0).toString()));
                                    ui->table_account->setItem(row++, col, tmpItem);
                }

                //Assist Admin
                QSqlQuery query7;
                row=0;
                query7.exec("select isAssitAdmin from dbo.Account");// choose the attribute you want to display form database
                while (query7.next()) { //this next() is important
                                    int col = 7;
                                    tmpItem= new QTableWidgetItem(tr("%1").arg(query7.value(0).toString()));
                                    ui->table_account->setItem(row++, col, tmpItem);
                }
                //Roles!!


            }



}

void systemadminview::on_Data_Pass_clicked()
{
    QString account_id=(ui->table_account->currentItem())->text();
                  QSqlQuery queryAccount;
                  queryAccount.prepare("SELECT accountID, employeeID, firstName, middleName, lastName, islocked, isAssistAdmin, isSysAdmin, isInstructor, isTA, isAdministrator FROM Account WHERE accountID = :accountID");
                  queryAccount.bindValue(":accountID", account_id);
                  queryAccount.exec();

                  if(queryAccount.next())
                  {
                      ui->AA_checkBox->setChecked(false);
                      ui->sysadmin_checkBox->setChecked(false);
                      ui->Instructor_checkBox->setChecked(false);
                      ui->TA_checkBox->setChecked(false);
                      ui->Administractor_checkBox->setChecked(false);
                      ui->block_checkBox->setChecked(false);
                      ui->AccountID_input->setText(queryAccount.value(0).toString());
                      ui->EmployeeID_input->setText(queryAccount.value(1).toString());
                      ui->FirstName_input->setText(queryAccount.value(2).toString());
                      ui->MiddleName_input->setText(queryAccount.value(3).toString());
                      ui->LastName_input->setText(queryAccount.value(4).toString());
                     

                     //is block?
                     if (queryAccount.value(5) == 1)
                     {
                         ui->block_checkBox->setChecked(true);
                     }
                     //is AA?
                     if (queryAccount.value(6)== 1)
                     {
                         ui->AA_checkBox->setChecked(true);
                     }
                     //is System Admin?
                     if (queryAccount.value(7)== 1)
                     {
                        ui->sysadmin_checkBox->setChecked(true);
                     }
                     //is Instructor?
                     if (queryAccount.value(8)== 1)
                     {
                        ui->Instructor_checkBox->setChecked(true);
                     }
                      //is TA?
                     if (queryAccount.value(9)== 1)
                     {
                        ui->TA_checkBox->setChecked(true);
                     }
                     // is Admin?
                     if (queryAccount.value(10)== 1)
                     {
                        ui->Administractor_checkBox->setChecked(true);
                     }


                  }
}



void systemadminview::on_Modify_Comfirm_clicked()
{
    QString account_id=(ui->table_account->currentItem())->text();
    QSqlQuery queryModify;
    queryModify.prepare("UPDATE Account set accountID=:accountID, employeeID=:employeeID, firstName=:firstName, middleName=:middleName, lastName=:lastName, islocked=:islocked, isAssistAdmin=:isAssistAdmin, isSysAdmin=:isSysAdmin, isInstructor=:isInstructor,isTA=:isTA,isAdministrator=:isAdministrator FROM Account WHERE accountID = :accountID" );
    queryModify.bindValue(":accountID", account_id);


    queryModify.bindValue(":accountID",ui->AccountID_input->text());
    queryModify.bindValue(":employeeID",ui->EmployeeID_input->text());
    //qDebug() <<ui->EmployeeID_input->text();
    queryModify.bindValue(":firstName",ui->FirstName_input->text());
    queryModify.bindValue(":middleName",ui->MiddleName_input->text());
    queryModify.bindValue(":lastName",ui->LastName_input->text());
    queryModify.bindValue(":islocked",ui->block_checkBox->isChecked());
    queryModify.bindValue(":isAssistAdmin",ui->AA_checkBox->isChecked());
    queryModify.bindValue(":isSysAdmin",ui->sysadmin_checkBox->isChecked());
    queryModify.bindValue(":isInstructor",ui->Instructor_checkBox->isChecked());
    queryModify.bindValue(":isTA",ui->TA_checkBox->isChecked());
    queryModify.bindValue(":isAdministrator",ui->Administractor_checkBox->isChecked());
    queryModify.exec();
}

void systemadminview::on_pushButton_logout_clicked()
{
    Login *login = new Login();
    this->close();
    login->show();
    login->activateWindow();
    login->raise();
}
*/
//Updated July/26 by Stan
#include "systemadminview.h"
#include "ui_systemadminview.h"
#include <QtSql>
#include <QMessageBox>
#include <QtDebug>
#include "accountCreate.h"
#include "QDialog"
#include "login.h"
#include "changepass.h"

bool createConnection();

systemadminview::systemadminview(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::systemadminview)
{
    ui->setupUi(this);

    //connect(ui->pushButton_load,SIGNAL(released()),this,SLOT(load()));
}

/*bool createConnection(){

    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("Driver={SQL Server};Server=cypress.csil.sfu.ca;Database=c275g03A;"); //replace with your database name
    db.setUserName("s_jarboled"); //replace this with your username
    db.setPassword("Hg722JY4tjMmh3bq"); //replace this with your password

    if (!db.open()) {
        qDebug() << "Database error occurred";
        return false;
    }
    return true;
}*/

systemadminview::~systemadminview()
{
    delete ui;
}

//link the UI
void systemadminview::on_addNewAccount_clicked()
{
    accountCreate *accDash = new accountCreate();
    accDash->setModal(true);
    accDash->show();
    accDash->activateWindow();
    accDash->raise();
}

void systemadminview::on_pushButton_logout_clicked()
{
    Login *login = new Login();
    this->close();
    login->show();
    login->activateWindow();
    login->raise();
}

//Display all the account in the table
void systemadminview::on_Load_table_clicked()
{

    QMessageBox msgbox;

        Login newConnecction;
        if (!newConnecction.createConnection()){

                msgbox.setText("Not connected!");
                msgbox.exec();
            }
            else{

            //tablewidget
                //select accountID
                QSqlQuery query;
                query.prepare("SELECT accountID, employeeID, firstName, middleName, lastName, islocked, isAssistAdmin, isSysAdmin, isInstructor, isTA, isAdministrator FROM Account WHERE accountID = :accountID");
                query.exec("select accountID from dbo.Account");// choose the attribute you want to display form database
                QSqlQuery queryCountRow;
                queryCountRow.prepare("select * from Account");
                queryCountRow.exec();
                int TotalNumberAccount =0;
                while (queryCountRow.next())
                {
                   TotalNumberAccount ++;
                }
                ui->table_account->setRowCount(TotalNumberAccount); //this is QTableWidget
                //ui->Ta_list->setColumnCount( 2); //<- depends how many columns has your query

                int row =0;
                QTableWidgetItem *tmpItem;

                while (query.next()) { //this next() is important
                                    int col = 0;
                                    tmpItem= new QTableWidgetItem(tr("%1").arg(query.value(0).toString()));
                                    ui->table_account->setItem(row++, col, tmpItem);
                                    //ui->comboBox->setItem(row++, col, tmpItem);
                                    }
                //select employeeID
                QSqlQuery query1;
                row=0;
                query1.prepare("SELECT accountID, employeeID, firstName, middleName, lastName, islocked, isAssistAdmin, isSysAdmin, isInstructor, isTA, isAdministrator FROM Account WHERE accountID = :accountID");
                query1.exec("select employeeID from dbo.Account");// choose the attribute you want to display form database
                while (query1.next()) { //this next() is important
                                    int col = 1;
                                    tmpItem= new QTableWidgetItem(tr("%1").arg(query1.value(0).toString()));
                                    ui->table_account->setItem(row++, col, tmpItem);
                                    }
                //select first name
                QSqlQuery query2;
                row=0;
                query2.prepare("SELECT accountID, employeeID, firstName, middleName, lastName, islocked, isAssistAdmin, isSysAdmin, isInstructor, isTA, isAdministrator FROM Account WHERE accountID = :accountID");
                query2.exec("select firstName from dbo.Account");// choose the attribute you want to display form database
                while (query2.next()) { //this next() is important
                                    int col = 2;
                                    tmpItem= new QTableWidgetItem(tr("%1").arg(query2.value(0).toString()));
                                    ui->table_account->setItem(row++, col, tmpItem);
                                    }
                //select middle name
                QSqlQuery query3;
                row=0;
                query3.prepare("SELECT accountID, employeeID, firstName, middleName, lastName, islocked, isAssistAdmin, isSysAdmin, isInstructor, isTA, isAdministrator FROM Account WHERE accountID = :accountID");
                query3.exec("select middleName from dbo.Account");// choose the attribute you want to display form database
                while (query3.next()) { //this next() is important
                                    int col = 3;
                                    tmpItem= new QTableWidgetItem(tr("%1").arg(query3.value(0).toString()));
                                    ui->table_account->setItem(row++, col, tmpItem);
                                    }
                //select last name
                QSqlQuery query4;
                row=0;
                query4.prepare("SELECT accountID, employeeID, firstName, middleName, lastName, islocked, isAssistAdmin, isSysAdmin, isInstructor, isTA, isAdministrator FROM Account WHERE accountID = :accountID");
                query4.exec("select lastName from dbo.Account");// choose the attribute you want to display form database
                while (query4.next()) { //this next() is important
                                    int col = 4;
                                    tmpItem= new QTableWidgetItem(tr("%1").arg(query4.value(0).toString()));
                                    ui->table_account->setItem(row++, col, tmpItem);
                                    }
                /*
                QSqlQuery query5;
                row=0;
                query5.exec("select userName from dbo.Account");// choose the attribute you want to display form database
                while (query5.next()) { //this next() is important
                                    int col = 5;
                                    tmpItem= new QTableWidgetItem(tr("%1").arg(query5.value(0).toString()));
                                    ui->table_account->setItem(row++, col, tmpItem);
                }
                */

                //select islocked
                QSqlQuery query5;
                row=0;
                query5.prepare("SELECT accountID, employeeID, firstName, middleName, lastName, islocked, isAssistAdmin, isSysAdmin, isInstructor, isTA, isAdministrator FROM Account WHERE accountID = :accountID");
                query5.exec("select islocked from dbo.Account");// choose the attribute you want to display form database
                while (query5.next()) { //this next() is important
                                    int col = 5;
                                    tmpItem= new QTableWidgetItem(tr("%1").arg(query5.value(0).toString()));
                                    ui->table_account->setItem(row++, col, tmpItem);

                }
                //QSqlQuery query8;

//Roles!!


            }



}
//Pass the data to editline for modify or delete
void systemadminview::on_Data_Pass_clicked()
{
    QString account_id=(ui->table_account->currentItem())->text();
                  QSqlQuery queryAccount;
                  queryAccount.prepare("SELECT accountID, employeeID, firstName, middleName, lastName, islocked, isAssistAdmin, isSysAdmin, isInstructor, isTA, isAdministrator FROM Account WHERE accountID = :accountID");
                  queryAccount.bindValue(":accountID", account_id);
                  queryAccount.exec();

                  if(queryAccount.next())
                  {
                      ui->AA_checkBox->setChecked(false);
                      ui->sysadmin_checkBox->setChecked(false);
                      ui->Instructor_checkBox->setChecked(false);
                      ui->TA_checkBox->setChecked(false);
                      ui->Administractor_checkBox->setChecked(false);
                      ui->block_checkBox->setChecked(false);
                      ui->AccountID_input->setText(queryAccount.value(0).toString());
                      ui->EmployeeID_input->setText(queryAccount.value(1).toString());
                      ui->FirstName_input->setText(queryAccount.value(2).toString());
                      ui->MiddleName_input->setText(queryAccount.value(3).toString());
                      ui->LastName_input->setText(queryAccount.value(4).toString());
                      //ui->UserName_input->setText(queryAccount.value(5).toString());
                     // ui->block_checkBox->setCheckState(queryAccount.value(6).toBool());
                      //ui->AA_checkBox->setCheckState(queryAccount.value(7).toBool());
                     // ui->sysadmin_checkBox->setCheckState(queryAccount.value(8).toBool());
                     // ui->Instructor_checkBox->setCheckState(queryAccount.value(9).toBool());
                     // ui->TA_checkBox->setCheckState(queryAccount.value(10).toBool());
                     // ui->Administractor_checkBox->setCheckState(queryAccount.value(11).toBool());

                     //is block?
                     if (queryAccount.value(5) == 1)
                     {
                         ui->block_checkBox->setChecked(true);
                     }
                     //is AA?
                     if (queryAccount.value(6)== 1)
                     {
                         ui->AA_checkBox->setChecked(true);
                     }
                     //is System Admin?
                     if (queryAccount.value(7)== 1)
                     {
                        ui->sysadmin_checkBox->setChecked(true);
                     }
                     //is Instructor?
                     if (queryAccount.value(8)== 1)
                     {
                        ui->Instructor_checkBox->setChecked(true);
                     }
                      //is TA?
                     isExistTA = 0;
                     if (queryAccount.value(9)== 1)
                     {
                        ui->TA_checkBox->setChecked(true);
                        isExistTA = 1;
                     }
                     // is Admin?
                     if (queryAccount.value(10)== 1)
                     {
                        ui->Administractor_checkBox->setChecked(true);
                     }


                  }
}



void systemadminview::on_Modify_Comfirm_clicked()
{
    QString account_id=(ui->table_account->currentItem())->text();
    QSqlQuery queryModify;
    queryModify.prepare("UPDATE Account set accountID=:accountID, employeeID=:employeeID, firstName=:firstName, middleName=:middleName, lastName=:lastName, islocked=:islocked, isAssistAdmin=:isAssistAdmin, isSysAdmin=:isSysAdmin, isInstructor=:isInstructor,isTA=:isTA,isAdministrator=:isAdministrator from Account WHERE accountID = :accountID" );

    queryModify.bindValue(":accountID", account_id);
    queryModify.bindValue(":accountID",ui->AccountID_input->text());
    queryModify.bindValue(":employeeID",ui->EmployeeID_input->text());

    //qDebug() <<ui->EmployeeID_input->text();
    queryModify.bindValue(":firstName",ui->FirstName_input->text());
    queryModify.bindValue(":middleName",ui->MiddleName_input->text());
    queryModify.bindValue(":lastName",ui->LastName_input->text());
    queryModify.bindValue(":islocked",ui->block_checkBox->isChecked());
    queryModify.bindValue(":isAssistAdmin",ui->AA_checkBox->isChecked());
    queryModify.bindValue(":isSysAdmin",ui->sysadmin_checkBox->isChecked());
    queryModify.bindValue(":isInstructor",ui->Instructor_checkBox->isChecked());
    queryModify.bindValue(":isTA",ui->TA_checkBox->isChecked());
    queryModify.bindValue(":isAdministrator",ui->Administractor_checkBox->isChecked());
    queryModify.exec();
    //queryModify.finish();

    QSqlQuery queryTAupdate;
    if (ui->TA_checkBox->isChecked() & isExistTA == 0){
        //QMessageBox::information(this,"","inside!");


        queryTAupdate.prepare ("INSERT INTO TA (taID, accountID, taName)" "VALUES(:taID, :accountID, :taName)");
        queryTAupdate.bindValue(":accountID",ui->AccountID_input->text());
        queryTAupdate.bindValue(":taID",ui->EmployeeID_input->text());
        queryTAupdate.bindValue(":taName",ui->FirstName_input->text());

        if(queryTAupdate.exec())

        {
            QMessageBox::information(this,"","TA List Updated!");
            //QMessageBox msgbox;
        }

}

    }




void systemadminview::on_Delete_clicked()
{
    QString account_id=(ui->table_account->currentItem())->text();
    QSqlQuery queryDelete;
    queryDelete.prepare("Delete FROM Account WHERE accountID = :accountID" );
    queryDelete.bindValue(":accountID", account_id);
    queryDelete.exec();
    if(queryDelete.exec())

    {
        QMessageBox::information(this,"","Record has been Delete! Press the Load button to reload the table");
    }


}



void systemadminview::on_pushButton_resetPass_clicked()
{
    QString employeeID = ui->EmployeeID_input->text();
    const QString possibleCharacters("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789");
    const int randomStringLength = rand() % ((12 + 1)-6)+6;

    QString randomString;
    for(int i=0; i<randomStringLength; ++i)
    {
       int index = qrand() % possibleCharacters.length();
       QChar nextChar = possibleCharacters.at(index);
       randomString.append(nextChar);
    }

    QSqlQuery query;
    query.prepare("UPDATE Account SET password = :password WHERE employeeID = '"+employeeID+"'");
    query.bindValue(":password", randomString);
    query.exec();

    query.prepare("UPDATE Account SET ispasswdtemp = '1' WHERE employeeID = '"+employeeID+"'");
    query.exec();

    QMessageBox msgbox;

    msgbox.setText("You have successfully changed your password to: "+randomString);
    msgbox.exec();
}

void systemadminview::on_pushButton_ChangePass_clicked()
{
    changePass *CPDash = new changePass();
    QObject::connect(this, SIGNAL(sendData(QString)), &*CPDash, SLOT(receiveData(QString)));
    emit sendData(employeeID);
    CPDash->setModal(true);
    CPDash->show();
    CPDash->activateWindow();
    CPDash->raise();
}

void systemadminview::receiveData(QString data)
{
    employeeID = data;
    qDebug() << "The received value is: "+employeeID;
}
