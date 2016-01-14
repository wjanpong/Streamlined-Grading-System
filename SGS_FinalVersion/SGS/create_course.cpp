#include "create_course.h"
#include "ui_create_course.h"
#include <QSqlQuery>
#include <QtSql>
#include "login.h"

create_course::create_course(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::create_course)
{
    ui->setupUi(this);
    connect(ui->pushButton_create,SIGNAL(released()),this,SLOT(create()));
    connect(ui->pushButton_load,SIGNAL(released()),this,SLOT(load()));
}

create_course::~create_course()
{
    delete ui;
}

void create_course::load()
{
        ui->Ta_list->clearContents();
        QSqlQuery query;

        query.exec("select taName, taID from dbo.TA where courseID is NULL ");// choose the attribute you want to display form database

        ui->Ta_list->setRowCount(20); //this is QTableWidget
        //ui->Ta_list->setColumnCount( 2); //<- depends how many columns has your query

        int row =0;
        QTableWidgetItem *tmpItem_TAName,*tmpItem_TaID;

        while (query.next()) { //this next() is important

                            tmpItem_TAName= new QTableWidgetItem(tr("%1").arg(query.value(0).toString()));
                            ui->Ta_list->setItem(row, 0, tmpItem_TAName);
                            tmpItem_TaID= new QTableWidgetItem(tr("%1").arg(query.value(1).toString()));
                            ui->Ta_list->setItem(row, 1, tmpItem_TaID);
                            row++;

                            }
}

void create_course::create()
{
    QMessageBox msgbox;
    Login newConnecction;
        if (!newConnecction.createConnection()){

                msgbox.setText("Not connected!");
                msgbox.exec();
            }
            else{

            QSqlQuery query1,queryChekcIns;
            query1.prepare("INSERT INTO Course(courseID,startDate,endDate,courseName,instructorEmployeeID) "
                          "VALUES (:courseID,:startDate,:endDate,:courseName,:instructorEmployeeID)");
            queryChekcIns.exec("select employeeID from dbo.Account where isInstructor =1");

          // random courseID

            srand(time(NULL));
            Course_ID= rand() % 99999;
            course_ID_String= QString::number(Course_ID);
            QMessageBox::information(this,"",course_ID_String);
            int exist=0;

            query1.bindValue(":courseID",course_ID_String);
            query1.bindValue(":startDate",ui->date_startDate->dateTime());
            query1.bindValue(":endDate",ui->date_endDate->dateTime());
            query1.bindValue(":courseName",ui->Text_courseName->text());

            while (queryChekcIns.next())
            {
                if (queryChekcIns.value(0).toString() == ui->Text_instructorEmployeeID->text()){
                    exist=1;
                    queryChekcIns.finish();
                }

            }
            if(exist>0)
            {
               query1.bindValue(":instructorEmployeeID",ui->Text_instructorEmployeeID->text());
            }
            else
            {   if(ui->Text_instructorEmployeeID->text()!= ""){
                QMessageBox::information(this,"","Instructor not assigned, instructor employee ID does not exist");
                }

             }

            if(ui->Text_courseName->text()!="")
            {
                if(query1.exec())

                {
                    QMessageBox::information(this,"","New record added!");
                }
                else
                {
                    QMessageBox::information(this,"",query1.lastError().text());
                }
            }



            query1.finish();
            queryChekcIns.finish();
            int size= (ui->Ta_list->selectedItems()).size();

            if ((ui->Ta_list->selectedItems()).empty()== false)
            {
               int index1=0;

                QString item=(((ui->Ta_list->selectedItems()).at(index1))->text());
                QSqlQuery queryTaADD, queryExtract;
                queryExtract.prepare("SELECT taName, accountID FROM dbo.TA WHERE taID= :taID" );

                queryTaADD.prepare("INSERT INTO TA(taID,taName,accountID,courseID) "
                                   "VALUES (:taID,:taName,:accountID,:courseID)");;

               // queryExtract.prepare("SELECT taName, accountID FROM TA WHERE taID = :taIdentity ");

                bool confirm =false;

                while (size>0) { //this next() is important
                    item=(((ui->Ta_list->selectedItems()).at(index1))->text());
                    queryExtract.bindValue(":taID",item);
                    queryExtract.exec();
                    if(!queryExtract.next())

                    {
                       QMessageBox::information(this,"",queryExtract.lastError().text());

                    }


                    queryTaADD.bindValue(":taName",queryExtract.value(0).toString());
                    queryTaADD.bindValue(":accountID",queryExtract.value(1).toString());
                    queryTaADD.bindValue(":courseID",course_ID_String);
                    queryTaADD.bindValue(":taID",(((ui->Ta_list->selectedItems()).at(index1))->text()));

                    if(queryTaADD.exec())

                    {
                        confirm=true;
                    }
                    else
                    {
                        QMessageBox::information(this,"",queryTaADD.lastError().text());
                    }

                    index1++;

                    size--;
                }


                if(confirm)

                    {
                         QMessageBox::information(this,"","Tas assigned");
                    }


              }

       }


}


