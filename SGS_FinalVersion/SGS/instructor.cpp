#include "instructor.h"
#include "ui_instructor.h"
#include "login.h"
#include "marker.h"
#include <Qstring>
#include <QMessageBox>
#include <QtSql>
#include <QMessageLogger>
#include <QSqlQuery>
#include "createactivity.h"
#include "createbonuspenalty.h"
#include "programmingfile.h"
#include "createrubric.h"
#include "modifyActivity.h"
#include "changepass.h"
#include "modifyrubric.h"
#include "viewbp.h"
#include "programdetail.h"

Instructor::Instructor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Instructor)
{
    ui->setupUi(this);
}

Instructor::~Instructor()
{
    delete ui;
}

void Instructor::on_pushButton_logout_clicked()
{
    Login *login = new Login();
    this->close();
    login->show();
}

void Instructor::receiveData(QString data)
{
    //QString value = data;
    //ui->label_receiveData->setText(value);
    employeeID =  data;
    qDebug() << "The received value is: "+employeeID;
}

void Instructor::on_pushButton_mark_clicked()
{
    marker *markDash = new marker();
    role = "Instructor";
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

void Instructor::on_pushButton_CreateActivityWin_clicked()
{
    QMessageBox msgbox;
    int rowcurrent = ui->show_course->currentRow();
    if (ui->show_course->item(rowcurrent,1)== NULL)//show message box if nothing is selected from the show course table
    {
        msgbox.setText("Please select a course!");
        msgbox.exec();
    }

    else if (ui->show_course->item(rowcurrent,1)->text()!="")
    {
        createActivity *newDia = new createActivity();
        newDia->setData(ui->show_course->item(rowcurrent,1)->text()); //transfer courseId
        newDia->exec();
        this->show();
        delete newDia;

        //refresh()
        int rowcurrent = ui->show_course->currentRow();

                //tablewidget
                    QSqlQuery query, query1, query2, query3,query4, query5, query6, query7, query8;
                    query.exec("select activityID from dbo.Activity");// choose the attribute you want to display form database
                    query1.exec("select courseID from dbo.Activity");// choose the attribute you want to display form database
                    query2.exec("select activityName from dbo.Activity");// choose the attribute you want to display form database
                    query3.exec("select activityType from dbo.Activity");// choose the attribute you want to display form database
                    query4.exec("select dueDate from dbo.Activity");// choose the attribute you want to display form database
                    query5.exec("select language from dbo.Activity");// choose the attribute you want to display form database
                    query6.exec("select pathToSubmissions from dbo.Activity");// choose the attribute you want to display form database
                    query7.exec("select numTests from dbo.Activity");// choose the attribute you want to display form database
                    query8.exec("select pathToSolution from dbo.Activity");// choose the attribute you want to display form database


                    ui->show_activity->setRowCount(50); //this is QTableWidget
                   // ui->show_course->setColumnCount(5); //<- depends how many columns has your query

                    int col =0;
                    int row = 0;
                    QTableWidgetItem *tmpItem;

                    ui->show_activity->clearContents();
                    if (ui->show_course->item(rowcurrent,1)== NULL)
                    {
                        msgbox.setText("Please select a course!");
                        msgbox.exec();
                    }


                    else
                    {

                        while (query.next()&&query1.next()&&query2.next()&&query3.next()&&query4.next()&&query5.next()&&query6.next()&&query7.next()&&query8.next())
                        {

                            if (ui->show_course->item(rowcurrent,1)->text() == query1.value(0).toString())
                            {
                                //ui->txt_CourseSelected->setText(query1.value(0).toString());
                                tmpItem= new QTableWidgetItem(tr("%1").arg(query2.value(0).toString()));
                                ui->show_activity->setItem(row, col++, tmpItem);
                                tmpItem= new QTableWidgetItem(tr("%1").arg(query.value(0).toString()));
                                ui->show_activity->setItem(row, col++, tmpItem);
                                tmpItem= new QTableWidgetItem(tr("%1").arg(query1.value(0).toString()));
                                ui->show_activity->setItem(row, col++, tmpItem);
                                tmpItem= new QTableWidgetItem(tr("%1").arg(query3.value(0).toString()));
                                ui->show_activity->setItem(row, col++, tmpItem);
                                tmpItem= new QTableWidgetItem(tr("%1").arg(query4.value(0).toString()));
                                ui->show_activity->setItem(row, col++, tmpItem);
                                tmpItem= new QTableWidgetItem(tr("%1").arg(query5.value(0).toString()));
                                ui->show_activity->setItem(row, col++, tmpItem);
                                tmpItem= new QTableWidgetItem(tr("%1").arg(query6.value(0).toString()));
                                ui->show_activity->setItem(row, col++, tmpItem);
                                tmpItem= new QTableWidgetItem(tr("%1").arg(query7.value(0).toString()));
                                ui->show_activity->setItem(row, col++, tmpItem);
                                tmpItem= new QTableWidgetItem(tr("%1").arg(query8.value(0).toString()));
                                ui->show_activity->setItem(row, col++, tmpItem);
                                //row++;
                            }
                        }
                    }

    }

    else
    {
        QMessageBox msgbox;
        msgbox.setText("Please Select the Course!");
        msgbox.exec();
    }
}

void Instructor::on_pushButtonDisplay_clicked()
{
    QMessageBox msgbox;

            //tablewidget
                QSqlQuery query;
                query.exec("select courseID from dbo.Course");// choose the attribute you want to display form database
                QSqlQuery query1;
                query1.exec("select startDate from dbo.Course");// choose the attribute you want to display form database
                QSqlQuery query2;
                query2.exec("select endDate from dbo.Course");// choose the attribute you want to display form database
                QSqlQuery query3;
                query3.exec("select courseName from dbo.Course");// choose the attribute you want to display form database
                QSqlQuery query4;
                query4.exec("select instructorEmployeeID from dbo.Course");// choose the attribute you want to display form database

                //QString employID = ui->label_receiveData->text();

                ui->show_course->setRowCount(50); //this is QTableWidget

                int row =0;
                while (query4.next() && query.next() && query1.next() && query2.next() && query3.next())
                {

                    if (query4.value(0) == employeeID)
                    {

                        QTableWidgetItem *tmpItem;
                        int col = 0;
                        tmpItem= new QTableWidgetItem(tr("%1").arg(query3.value(0).toString()));
                        ui->show_course->setItem(row, col++, tmpItem);


                        tmpItem= new QTableWidgetItem(tr("%1").arg(query.value(0).toString()));
                        ui->show_course->setItem(row, col++, tmpItem);


                        tmpItem= new QTableWidgetItem(tr("%1").arg(query1.value(0).toString()));
                        ui->show_course->setItem(row, col++, tmpItem);


                        tmpItem= new QTableWidgetItem(tr("%1").arg(query2.value(0).toString()));
                        ui->show_course->setItem(row, col++, tmpItem);


                        tmpItem= new QTableWidgetItem(tr("%1").arg(query4.value(0).toString()));
                        ui->show_course->setItem(row, col++, tmpItem);
                        row++;

                    }
                }
}

void Instructor::on_show_course_itemClicked(QTableWidgetItem *item)

{
    QMessageBox msgbox;
    int rowcurrent = ui->show_course->currentRow();
    QString selected2 = item->text();
    qDebug()<<"Item selected is: "<<selected2;
            //tablewidget
                QSqlQuery query, query1, query2, query3,query4, query5, query6, query7, query8;
                query.exec("select activityID from dbo.Activity");// choose the attribute you want to display form database
                query1.exec("select courseID from dbo.Activity");// choose the attribute you want to display form database
                query2.exec("select activityName from dbo.Activity");// choose the attribute you want to display form database
                query3.exec("select activityType from dbo.Activity");// choose the attribute you want to display form database
                query4.exec("select dueDate from dbo.Activity");// choose the attribute you want to display form database
                query5.exec("select language from dbo.Activity");// choose the attribute you want to display form database
                query6.exec("select pathToSubmissions from dbo.Activity");// choose the attribute you want to display form database
                query7.exec("select numTests from dbo.Activity");// choose the attribute you want to display form database
                query8.exec("select pathToSolution from dbo.Activity");// choose the attribute you want to display form database


                ui->show_activity->setRowCount(50); //this is QTableWidget
               // ui->show_course->setColumnCount(5); //<- depends how many columns has your query

                int col =0;
                int row = 0;
                QTableWidgetItem *tmpItem;

                ui->show_activity->clearContents();
                if (ui->show_course->item(rowcurrent,1)== NULL)
                {
                    msgbox.setText("Please select a course!");
                    msgbox.exec();
                }

                /*else if (ui->show_course->currentItem()->column() != 1)
                {
                    msgbox.setText("Please specify CourseID!");
                    msgbox.exec();
                }*/


                else
                {

                while (query.next()&&query1.next()&&query2.next()&&query3.next()&&query4.next()&&query5.next()&&query6.next()&&query7.next()&&query8.next())
                {

                    if (ui->show_course->item(rowcurrent,1)->text() == query1.value(0).toString())
                    {
                        //ui->txt_CourseSelected->setText(query1.value(0).toString());
                        tmpItem= new QTableWidgetItem(tr("%1").arg(query2.value(0).toString()));
                        ui->show_activity->setItem(row, col++, tmpItem);
                        tmpItem= new QTableWidgetItem(tr("%1").arg(query.value(0).toString()));
                        ui->show_activity->setItem(row, col++, tmpItem);
                        tmpItem= new QTableWidgetItem(tr("%1").arg(query1.value(0).toString()));
                        ui->show_activity->setItem(row, col++, tmpItem);
                        tmpItem= new QTableWidgetItem(tr("%1").arg(query3.value(0).toString()));
                        ui->show_activity->setItem(row, col++, tmpItem);
                        tmpItem= new QTableWidgetItem(tr("%1").arg(query4.value(0).toString()));
                        ui->show_activity->setItem(row, col++, tmpItem);
                        tmpItem= new QTableWidgetItem(tr("%1").arg(query5.value(0).toString()));
                        ui->show_activity->setItem(row, col++, tmpItem);
                        tmpItem= new QTableWidgetItem(tr("%1").arg(query6.value(0).toString()));
                        ui->show_activity->setItem(row, col++, tmpItem);
                        tmpItem= new QTableWidgetItem(tr("%1").arg(query7.value(0).toString()));
                        ui->show_activity->setItem(row, col++, tmpItem);
                        tmpItem= new QTableWidgetItem(tr("%1").arg(query8.value(0).toString()));
                        ui->show_activity->setItem(row, col++, tmpItem);
                        //row++;
                    }
                }
                }




}



void Instructor::on_pushButton_CreateRubricWin_clicked()
{
    QMessageBox msgbox;
    int rowcurrentact = ui->show_activity->currentRow();
    if (ui->show_activity->item(rowcurrentact,1)== NULL)//show error if nothing is selected from the show activity table
    {
        msgbox.setText("Please select an activity!");
        msgbox.exec();
    }

    /*else if (ui->show_activity->currentItem()->column() != 1)//show error if not selecting from the activityID column
    {
        msgbox.setText("Please specify Activity ID!");
        msgbox.exec();
    }*/

    else if (ui->show_activity->item(rowcurrentact,1)->text()!="")
    {
        createRubric *newDia = new createRubric();
        QString activityId = ui->show_activity->item(rowcurrentact,1)->text();
        QSqlQuery query;
        query.prepare("SELECT numTests FROM Activity where activityID = :activityId");
        query.bindValue(":activityId", activityId);
        query.exec();
        if(query.next())
        {
            int numTests = query.value(0).toInt();
            newDia->setData(ui->show_activity->item(rowcurrentact,1)->text().toInt(), numTests);
            newDia->exec();
            this->show();
            delete newDia;
        }
        else
        {
            QMessageBox::information(this,"","Query cannot be executed!");
        }
    }
    else
    {
        QMessageBox msgbox;
        msgbox.setText("Please select activity before creating Rubric!");
        msgbox.exec();
    }
}

void Instructor::on_pushButton_ModifyWin_clicked()
{

    QMessageBox msgbox;
    int rowcurrentact = ui->show_activity->currentRow();
    if (ui->show_activity->item(rowcurrentact,1)== NULL)//show error if nothing is selected from the show activity table
    {
        msgbox.setText("Please select an activity!");
        msgbox.exec();
    }


    else if (ui->show_activity->item(rowcurrentact,1)->text()!="")
    {
        modifyActivity *newDia = new modifyActivity();
        QString activityId = ui->show_activity->item(rowcurrentact,1)->text();
        newDia->displayData(activityId);
        newDia->exec();
        this->show();
        delete newDia;

                //tablewidget
                    QSqlQuery query, query1, query2, query3,query4, query5, query6, query7, query8;
                    query.exec("select activityID from dbo.Activity");// choose the attribute you want to display form database
                    query1.exec("select courseID from dbo.Activity");// choose the attribute you want to display form database
                    query2.exec("select activityName from dbo.Activity");// choose the attribute you want to display form database
                    query3.exec("select activityType from dbo.Activity");// choose the attribute you want to display form database
                    query4.exec("select dueDate from dbo.Activity");// choose the attribute you want to display form database
                    query5.exec("select language from dbo.Activity");// choose the attribute you want to display form database
                    query6.exec("select pathToSubmissions from dbo.Activity");// choose the attribute you want to display form database
                    query7.exec("select numTests from dbo.Activity");// choose the attribute you want to display form database
                    query8.exec("select pathToSolution from dbo.Activity");// choose the attribute you want to display form database


                    ui->show_activity->setRowCount(50); //this is QTableWidget
                   // ui->show_course->setColumnCount(5); //<- depends how many columns has your query
                    int rowcurrent = ui->show_course->currentRow();
                    int col =0;
                    int row = 0;
                    QTableWidgetItem *tmpItem;

                    ui->show_activity->clearContents();

                    if (ui->show_course->item(rowcurrent,1)== NULL)
                    {
                        msgbox.setText("Please select a course!");
                        msgbox.exec();
                    }

                    /*else if (ui->show_course->currentItem()->column() != 1)
                    {
                        msgbox.setText("Please specify CourseID!");
                        msgbox.exec();
                    }*/


                    else
                    {

                            while (query.next()&&query1.next()&&query2.next()&&query3.next()&&query4.next()&&query5.next()&&query6.next()&&query7.next()&&query8.next())
                            {

                                if (ui->show_course->item(rowcurrent,1)->text() == query1.value(0).toString())
                                {
                                    //ui->txt_CourseSelected->setText(query1.value(0).toString());
                                    tmpItem= new QTableWidgetItem(tr("%1").arg(query2.value(0).toString()));
                                    ui->show_activity->setItem(row, col++, tmpItem);
                                    tmpItem= new QTableWidgetItem(tr("%1").arg(query.value(0).toString()));
                                    ui->show_activity->setItem(row, col++, tmpItem);
                                    tmpItem= new QTableWidgetItem(tr("%1").arg(query1.value(0).toString()));
                                    ui->show_activity->setItem(row, col++, tmpItem);
                                    tmpItem= new QTableWidgetItem(tr("%1").arg(query3.value(0).toString()));
                                    ui->show_activity->setItem(row, col++, tmpItem);
                                    tmpItem= new QTableWidgetItem(tr("%1").arg(query4.value(0).toString()));
                                    ui->show_activity->setItem(row, col++, tmpItem);
                                    tmpItem= new QTableWidgetItem(tr("%1").arg(query5.value(0).toString()));
                                    ui->show_activity->setItem(row, col++, tmpItem);
                                    tmpItem= new QTableWidgetItem(tr("%1").arg(query6.value(0).toString()));
                                    ui->show_activity->setItem(row, col++, tmpItem);
                                    tmpItem= new QTableWidgetItem(tr("%1").arg(query7.value(0).toString()));
                                    ui->show_activity->setItem(row, col++, tmpItem);
                                    tmpItem= new QTableWidgetItem(tr("%1").arg(query8.value(0).toString()));
                                    ui->show_activity->setItem(row, col++, tmpItem);
                                    //row++;
                                }
                            }
                    }

    }
    else
    {
        QMessageBox msgbox;
        msgbox.setText("Please Select Activity to be Modified!");
        msgbox.exec();
    }

}

//new
void Instructor::on_pushButton_DeleteActivity_clicked()
{
    QMessageBox msgbox;
    int rowcurrentact = ui->show_activity->currentRow();
    if (ui->show_activity->item(rowcurrentact,1)== NULL)//show error if nothing is selected from the show activity table
    {
        msgbox.setText("Please select an activity!");
        msgbox.exec();
    }


    else if (ui->show_activity->item(rowcurrentact,1)->text()!="")
    {
        QString activityId = ui->show_activity->item(rowcurrentact,1)->text();
        //queries for deleting
        QSqlQuery queryActivity,
                  queryAnswerKeyResponse,
                  queryBonnusPenalty,
                  queryGroupSubmission,
                  queryProgrammingTest,
                  queryRubricItem,//
                  queryStudentSubmission,
                  queryfileInSystem;
        //queries for select needed data
        QSqlQuery queryGetRubricId;
        queryActivity.prepare("DELETE FROM Activity where activityID = :activityId");
        queryActivity.bindValue(":activityId", activityId);
        queryAnswerKeyResponse.prepare("DELETE FROM AnswerKeyResponse where activityID = :activityId");
        queryAnswerKeyResponse.bindValue(":activityId", activityId);
        queryBonnusPenalty.prepare("DELETE FROM BonusPenalty where activityID = :activityId");
        queryBonnusPenalty.bindValue(":activityId", activityId);
        queryGroupSubmission.prepare("DELETE FROM GroupSubmission where activityID = :activityId");
        queryGroupSubmission.bindValue(":activityId", activityId);
        queryProgrammingTest.prepare("DELETE FROM ProgrammingTest where activityID = :activityId");
        queryProgrammingTest.bindValue(":activityId", activityId);
        queryRubricItem.prepare("DELETE FROM RubricItem where activityID = :activityId");
        queryRubricItem.bindValue(":activityId", activityId);
        queryStudentSubmission.prepare("DELETE FROM StudentSubmission where activityID = :activityId");
        queryStudentSubmission.bindValue(":activityId", activityId);
        queryfileInSystem.prepare("DELETE FROM fileInSystem where activityID = :activityId");
        queryfileInSystem.bindValue(":activityId", activityId);
        queryGetRubricId.prepare("SELECT rubricItemID FROM dbo.RubricItem where activityID = :activityId");
        queryGetRubricId.bindValue(":activityId", activityId);
        while(queryGetRubricId.next())
        {
            int currentRubricId = queryGetRubricId.value(0).toInt();
            QSqlQuery queryGrade;
            queryGrade.prepare("DELETE FROM Grade where rubricItemID = :rubricItemId");
            queryGrade.bindValue(":rubricItemId", currentRubricId);
            queryGrade.exec();
        }
        if(queryActivity.exec())
        {
            queryfileInSystem.exec();
            queryStudentSubmission.exec();
            queryRubricItem.exec();
            queryProgrammingTest.exec();
            queryGroupSubmission.exec();
            queryBonnusPenalty.exec();
            queryAnswerKeyResponse.exec();
//            if(!queryfileInSystem.exec())
//            {
//                QMessageBox::information(this,"",queryfileInSystem.lastError().text());
//            }
//            if(queryStudentSubmission.exec())
//            {
//                QMessageBox::information(this,"",queryStudentSubmission.lastError().text());
//            }
//            if(queryRubricItem.exec())
//            {
//                QMessageBox::information(this,"",queryRubricItem.lastError().text());
//            }
//            if(queryProgrammingTest.exec())
//            {
//                QMessageBox::information(this,"",queryProgrammingTest.lastError().text());
//            }
//            if(queryGroupSubmission.exec())
//            {
//                QMessageBox::information(this,"",queryGroupSubmission.lastError().text());
//            }
//            if(queryBonnusPenalty.exec())
//            {
//                QMessageBox::information(this,"",queryBonnusPenalty.lastError().text());
//            }
//            if(queryAnswerKeyResponse.exec())
//            {
//                QMessageBox::information(this,"",queryAnswerKeyResponse.lastError().text());
//            }
            QMessageBox::information(this,"", "Record Deleted!");
            QMessageBox msgbox;
            int rowcurrent = ui->show_course->currentRow();

                    //tablewidget
                        QSqlQuery query, query1, query2, query3,query4, query5, query6, query7, query8;
                        query.exec("select activityID from dbo.Activity");// choose the attribute you want to display form database
                        query1.exec("select courseID from dbo.Activity");// choose the attribute you want to display form database
                        query2.exec("select activityName from dbo.Activity");// choose the attribute you want to display form database
                        query3.exec("select activityType from dbo.Activity");// choose the attribute you want to display form database
                        query4.exec("select dueDate from dbo.Activity");// choose the attribute you want to display form database
                        query5.exec("select language from dbo.Activity");// choose the attribute you want to display form database
                        query6.exec("select pathToSubmissions from dbo.Activity");// choose the attribute you want to display form database
                        query7.exec("select numTests from dbo.Activity");// choose the attribute you want to display form database
                        query8.exec("select pathToSolution from dbo.Activity");// choose the attribute you want to display form database


                        ui->show_activity->setRowCount(50); //this is QTableWidget
                       // ui->show_course->setColumnCount(5); //<- depends how many columns has your query

                        int col =0;
                        int row = 0;
                        QTableWidgetItem *tmpItem;

                        ui->show_activity->clearContents();
                        if (ui->show_course->item(rowcurrent,1)== NULL)
                        {
                            msgbox.setText("Please select a course!");
                            msgbox.exec();
                        }


                        else
                        {

                            while (query.next()&&query1.next()&&query2.next()&&query3.next()&&query4.next()&&query5.next()&&query6.next()&&query7.next()&&query8.next())
                            {

                                if (ui->show_course->item(rowcurrent,1)->text() == query1.value(0).toString())
                                {
                                    //ui->txt_CourseSelected->setText(query1.value(0).toString());
                                    tmpItem= new QTableWidgetItem(tr("%1").arg(query2.value(0).toString()));
                                    ui->show_activity->setItem(row, col++, tmpItem);
                                    tmpItem= new QTableWidgetItem(tr("%1").arg(query.value(0).toString()));
                                    ui->show_activity->setItem(row, col++, tmpItem);
                                    tmpItem= new QTableWidgetItem(tr("%1").arg(query1.value(0).toString()));
                                    ui->show_activity->setItem(row, col++, tmpItem);
                                    tmpItem= new QTableWidgetItem(tr("%1").arg(query3.value(0).toString()));
                                    ui->show_activity->setItem(row, col++, tmpItem);
                                    tmpItem= new QTableWidgetItem(tr("%1").arg(query4.value(0).toString()));
                                    ui->show_activity->setItem(row, col++, tmpItem);
                                    tmpItem= new QTableWidgetItem(tr("%1").arg(query5.value(0).toString()));
                                    ui->show_activity->setItem(row, col++, tmpItem);
                                    tmpItem= new QTableWidgetItem(tr("%1").arg(query6.value(0).toString()));
                                    ui->show_activity->setItem(row, col++, tmpItem);
                                    tmpItem= new QTableWidgetItem(tr("%1").arg(query7.value(0).toString()));
                                    ui->show_activity->setItem(row, col++, tmpItem);
                                    tmpItem= new QTableWidgetItem(tr("%1").arg(query8.value(0).toString()));
                                    ui->show_activity->setItem(row, col++, tmpItem);
                                    //row++;
                                }
                            }
                        }

        }
        else
        {
            QMessageBox::information(this,"",queryActivity.lastError().text());
        }
    }
    else
    {
        QMessageBox msgbox;
        msgbox.setText("Please Select Activity to be Deleted!");
        msgbox.exec();
    }










}

/*void Instructor::on_pushButton_ProgrammingFile_clicked()
{
    programmingFile *newDia = new programmingFile();
    QMessageBox msgbox;
    int rowcurrentact = ui->show_activity->currentRow();
    if (ui->show_activity->item(rowcurrentact,1)== NULL)//show error if nothing is selected from the show activity table
    {
        msgbox.setText("Please select an activity!");
        msgbox.exec();
    }


    else if (ui->show_activity->item(rowcurrentact,1)->text()!="")
    {
        QString activityId = ui->show_activity->item(rowcurrentact,1)->text();
        QSqlQuery query;
        query.prepare("SELECT activityType, numTests FROM Activity where activityID = :activityId");
        query.bindValue(":activityId", activityId);
        query.exec();
        if(query.next())
        {
            QString activityType = query.value(0).toString();
            int numTests = query.value(1).toInt();
            if (activityType == "Programming Assignment")
            {
                newDia->setData(activityId, numTests);
                newDia->exec();
                this->show();
                delete newDia;
            }
            else
            {
                QMessageBox::information(this,"","Selected Activity is not Programming Assignment!");
            }
        }
        else
        {
            QMessageBox::information(this,"","Query cannot be executed!");
        }
    }
    else
    {
        QMessageBox msgbox;
        msgbox.setText("Please Select Activity before creating Rubric!");
        msgbox.exec();
    }
}*/

void Instructor::on_pushButton_ChangePass_clicked()
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





void Instructor::on_pushButton_modifyRubric_clicked()
{
    QMessageBox msgbox;
    int cur_row = ui->show_activity->currentRow();
    if (ui->show_activity->item(cur_row,1)== NULL)//show error if nothing is selected from the show activity table
    {
        msgbox.setText("Please select an activity!");
        msgbox.exec();
    }

    else if (ui->show_activity->item(cur_row,1)->text()!="")
    {
        ModifyRubric *newDia = new ModifyRubric();
        QString activityId = ui->show_activity->item(cur_row,1)->text();
        QString activityName = ui->show_activity->item(cur_row,0)->text();
        QString num_test = ui->show_activity->item(cur_row,7)->text();
        newDia->setData(activityId, activityName, num_test);
        newDia->exec();
        this->show();
        delete newDia;
    }
    else
    {
        QMessageBox msgbox;
        msgbox.setText("Please select activity before creating Rubric!");
        msgbox.exec();
    }
}


void Instructor::on_pushButton_viewBP_clicked()
{
    QMessageBox msgbox;
    int rowcurrentact = ui->show_activity->currentRow();
    if (ui->show_activity->item(rowcurrentact,1)== NULL)//show error if nothing is selected from the show activity table
    {
        msgbox.setText("Please select an activity!");
        msgbox.exec();
    }

    else if (ui->show_activity->item(rowcurrentact,1)->text()!="")
    {
        ViewBP *newDia = new ViewBP();
        int activityId = ui->show_activity->item(rowcurrentact,1)->text().toInt();
        newDia->setData(activityId);
        newDia->exec();
        this->show();
        delete newDia;
    }
    else
    {
        QMessageBox msgbox;
        msgbox.setText("Please Select Activity!");
        msgbox.exec();
    }
}







void Instructor::on_pushButton_viewProgAct_clicked()
{
    QMessageBox msgbox;
    int rowcurrentact = ui->show_activity->currentRow();
    if (ui->show_activity->item(rowcurrentact,1)== NULL)//show error if nothing is selected from the show activity table
    {
        msgbox.setText("Please select an Activity!");
        msgbox.exec();
    }
    else if ((ui->show_activity->item(rowcurrentact,1)->text()!="")&&(ui->show_activity->item(rowcurrentact,3)->text()=="Programming Assignment"))
    {
        ProgramDetail *newDia = new ProgramDetail();
        QString activityId = ui->show_activity->item(rowcurrentact,1)->text();
        newDia->setData(activityId);
        newDia->exec();
        this->show();
        delete newDia;
    }
    else if ((ui->show_activity->item(rowcurrentact,1)->text()!="")&&(ui->show_activity->item(rowcurrentact,3)->text()!="Programming Assignment"))
    {
        msgbox.setText("Please select an Programming Activity!");
        msgbox.exec();
    }
}
