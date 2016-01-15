#include "gradingprogammingasm.h"
#include "ui_gradingprogammingasm.h"
#include "marker.h"
#include <QUrl>
#include <QFileDialog>
#include <QMessageBox>
#include <QDesktopServices>
#include <QSqlQuery>
#include <QDebug>
#include <QProcess>


GradingProgammingASM::GradingProgammingASM(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GradingProgammingASM)
{
    ui->setupUi(this);
    ui->tableWidget_studentGrade->hideColumn(4);
}

GradingProgammingASM::~GradingProgammingASM()
{
    delete ui;
}

void GradingProgammingASM::setData(const QString& activityName ,const QString& currentRole)
{
    ui->label_actName->setText(activityName);
    ui->label_receiveData->setText(currentRole);

    QSqlQuery query_ActivityID;
    query_ActivityID.prepare("SELECT activityID FROM Activity WHERE activityName= '"+activityName+"' ");
    if(query_ActivityID.exec("SELECT activityID FROM Activity WHERE activityName= '"+activityName+"' "))
    {
        while (query_ActivityID.next())
        {
            ui->label_activityID->setText(query_ActivityID.value(0).toString());
        }
    }

    QSqlQuery query_studentlist;
    int num_students = 0;
    query_studentlist.prepare("SELECT studentID FROM StudentSubmission WHERE activityID= '"+ui->label_activityID->text()+"' ");
    if(query_studentlist.exec("SELECT studentID FROM StudentSubmission WHERE activityID= '"+ui->label_activityID->text()+"' "))
    {
        while (query_studentlist.next())
        {
            ui->tableWidget_students->insertRow(num_students);
            ui->tableWidget_students->setItem(num_students,0, new QTableWidgetItem(query_studentlist.value(0).toString()));
            num_students++;
        }
    }

    QSqlQuery query_rubric;
    int num_rubricItem = 0;
    query_rubric.prepare("SELECT rubricItemNumber, rubricItemID, rubricItemText, rubricItemValue FROM RubricItem WHERE activityID= '"+ui->label_activityID->text()+"'");
    if(query_rubric.exec("SELECT rubricItemNumber, rubricItemID, rubricItemText, rubricItemValue FROM RubricItem WHERE activityID= '"+ui->label_activityID->text()+"'"))
    {
        while (query_rubric.next())
        {
            ui->Rubric_table->insertRow(num_rubricItem);
            ui->Rubric_table->setItem(num_rubricItem,0, new QTableWidgetItem(query_rubric.value(0).toString()));
            ui->Rubric_table->setItem(num_rubricItem,1, new QTableWidgetItem(query_rubric.value(1).toString()));
            ui->Rubric_table->setItem(num_rubricItem,2, new QTableWidgetItem(query_rubric.value(2).toString()));
            ui->Rubric_table->setItem(num_rubricItem,3, new QTableWidgetItem(query_rubric.value(3).toString()));
            num_rubricItem++;
        }
        ui->Rubric_table->sortItems(0,Qt::AscendingOrder);
    }

    QSqlQuery query_testlist;
    int num_testlist = 0;
    query_testlist.prepare("SELECT testNum, testID, numOfInputFiles, numOfOutputFiles FROM ProgrammingTest WHERE activityID= '"+ui->label_activityID->text()+"'");
    if(query_testlist.exec("SELECT testNum, testID, numOfInputFiles, numOfOutputFiles FROM ProgrammingTest WHERE activityID= '"+ui->label_activityID->text()+"'"))
    {
        while(query_testlist.next())
        {
            ui->Test_table->insertRow(num_testlist);
            ui->Test_table->setItem(num_testlist,0, new QTableWidgetItem(query_testlist.value(0).toString()));
            ui->Test_table->setItem(num_testlist,1, new QTableWidgetItem(query_testlist.value(1).toString()));
            ui->Test_table->setItem(num_testlist,2, new QTableWidgetItem(query_testlist.value(2).toString()));
            ui->Test_table->setItem(num_testlist,3, new QTableWidgetItem(query_testlist.value(3).toString()));
            num_testlist++;
        }
        ui->Test_table->sortItems(0,Qt::AscendingOrder);
    }
}

void GradingProgammingASM::on_tableWidget_students_itemPressed(QTableWidgetItem *item)
{
    ui->label_studentID->setText(ui->tableWidget_students->currentItem()->text());

    ui->tableWidget_studentGrade->clear();
    while (ui->tableWidget_studentGrade->rowCount() >0)    //clear the table content every search
    {
        ui->tableWidget_studentGrade->removeRow(0);
    }
    QString name = item->text();

    QSqlQuery query_StudentGrade;
    query_StudentGrade.prepare("SELECT rubricItemID, earnedGrade, gradeOverride FROM Grade WHERE studentID='"+name+"' ");

    if(query_StudentGrade.exec("SELECT rubricItemID, earnedGrade, gradeOverride FROM Grade WHERE studentID='"+name+"' "))
    {
        int row = 0;
        while(query_StudentGrade.next())
        {
            int rows = ui->Rubric_table->rowCount();
            QString studentGradeItemID = query_StudentGrade.value(0).toString();
            for(int i = 0; i < rows; i++)
            {
                if(ui->Rubric_table->item(i, 1)->text() == studentGradeItemID)
                {
                    ui->tableWidget_studentGrade->insertRow(row);
                    ui->tableWidget_studentGrade->setItem(row, 1, new QTableWidgetItem(query_StudentGrade.value(0).toString())); //ItemID
                    ui->tableWidget_studentGrade->setItem(row, 2, new QTableWidgetItem(query_StudentGrade.value(1).toString()));
                    ui->tableWidget_studentGrade->setItem(row, 4, new QTableWidgetItem(query_StudentGrade.value(2).toString()));
                    ui->tableWidget_studentGrade->setItem(row, 0, new QTableWidgetItem(ui->Rubric_table->item(i,0)->text()));
                    row++;
                }
            }
            ui->tableWidget_studentGrade->sortItems(0,Qt::AscendingOrder);
        }
    }
    ui->tableWidget_studentGrade->setHorizontalHeaderItem(0, new QTableWidgetItem("ItemNumber"));
    ui->tableWidget_studentGrade->setHorizontalHeaderItem(1, new QTableWidgetItem("ItemID"));
    ui->tableWidget_studentGrade->setHorizontalHeaderItem(2, new QTableWidgetItem("Grade"));
    ui->tableWidget_studentGrade->setHorizontalHeaderItem(3, new QTableWidgetItem("Commend"));
    ui->tableWidget_studentGrade->hideColumn(4);
}


void GradingProgammingASM::on_Rubric_table_itemPressed(QTableWidgetItem *item)
{
    int row = ui->Rubric_table->currentRow();
    ui->label_ItemID->setText(ui->Rubric_table->item(row,1)->text());
    ui->label_ItemNumber->setText(ui->Rubric_table->item(row,0)->text());
}


void GradingProgammingASM::on_pushButton_updateGrade_pressed()
{
    if((ui->tableWidget_studentGrade->rowCount()==0)&((ui->label_receiveData->text()=="Teacher Assistant") or(ui->label_receiveData->text()=="Instructor")))
    {
        QSqlQuery query_InputGrade;
        query_InputGrade.prepare("INSERT INTO Grade(studentID, rubricItemID, earnedGrade, gradeOverride)"
                      "VALUES (:StudentID, :RubricItemID, :EarnedGrade, :GradeOverride)");

        query_InputGrade.bindValue(":StudentID" , ui->label_studentID->text());
        query_InputGrade.bindValue(":RubricItemID" , ui->label_ItemID->text());
        query_InputGrade.bindValue(":EarnedGrade" , ui->lineEdit_Grade->text().toInt());
        query_InputGrade.bindValue(":GradeOverride" , 0);

        if(query_InputGrade.exec())
        {
            QMessageBox::information(this,"","Graded");
        }

        //refresh the table
        ui->label_studentID->setText(ui->tableWidget_students->currentItem()->text());
        ui->tableWidget_studentGrade->clear();
        while (ui->tableWidget_studentGrade->rowCount()>0)    //clear the table content every search
        {
            ui->tableWidget_studentGrade->removeRow(0);
        }
        QString name = ui->label_studentID->text();
        QSqlQuery query_StudentGrade;
        query_StudentGrade.prepare("SELECT rubricItemID, earnedGrade, gradeOverride FROM Grade WHERE studentID='"+name+"' ");

        if(query_StudentGrade.exec("SELECT rubricItemID, earnedGrade, gradeOverride FROM Grade WHERE studentID='"+name+"' "))
        {
            int row = 0;
            while(query_StudentGrade.next())
            {
                int rows = ui->Rubric_table->rowCount();
                QString studentGradeItemID = query_StudentGrade.value(0).toString();
                for(int i = 0; i < rows; i++)
                {
                    if(ui->Rubric_table->item(i, 1)->text() == studentGradeItemID)
                    {
                        ui->tableWidget_studentGrade->insertRow(row);
                        ui->tableWidget_studentGrade->setItem(row, 1, new QTableWidgetItem(query_StudentGrade.value(0).toString()));
                        ui->tableWidget_studentGrade->setItem(row, 2, new QTableWidgetItem(query_StudentGrade.value(1).toString()));
                        ui->tableWidget_studentGrade->setItem(row, 4, new QTableWidgetItem(query_StudentGrade.value(2).toString()));
                        ui->tableWidget_studentGrade->setItem(row, 0, new QTableWidgetItem(ui->Rubric_table->item(i,0)->text()));
                        row++;
                    }
                }
                ui->tableWidget_studentGrade->sortItems(0,Qt::AscendingOrder);
            }
        }
        ui->tableWidget_studentGrade->setHorizontalHeaderItem(0, new QTableWidgetItem("ItemNumber"));
        ui->tableWidget_studentGrade->setHorizontalHeaderItem(1, new QTableWidgetItem("ItemID"));
        ui->tableWidget_studentGrade->setHorizontalHeaderItem(2, new QTableWidgetItem("Grade"));
        ui->tableWidget_studentGrade->setHorizontalHeaderItem(3, new QTableWidgetItem("Commend"));
        ui->tableWidget_studentGrade->hideColumn(4);
        return;
    }

    if((ui->tableWidget_studentGrade->rowCount()==0)&(ui->label_receiveData->text()=="Administrator"))
    {
        QMessageBox::information(this,"Rejected","Administrator can only Regrade.");
        return;
    }

    if(ui->tableWidget_studentGrade->rowCount()>0)
    {
        //find is there already Graded
        for(int j = 0; j < (ui->tableWidget_studentGrade->rowCount()); j++)
        {
            if(ui->label_ItemID->text() == ui->tableWidget_studentGrade->item(j,1)->text())
            {
                //the graded rubric found
                if(ui->tableWidget_studentGrade->item(j,4)->text().toInt() == 0)
                {
                    QSqlQuery query;
                    query.prepare("UPDATE Grade SET studentID = :StudentID, rubricItemID = :RubricItemID, earnedGrade = :EarnedGrade, gradeOverride = :GradeOverride WHERE studentID = :StudentID and rubricItemID = :RubricItemID ");
                    query.bindValue(":StudentID" , ui->label_studentID->text());
                    query.bindValue(":RubricItemID" , ui->label_ItemID->text());

                    //define is it can be regrade
                    if(ui->label_receiveData->text()=="Administrator")
                    {
                        query.bindValue(":GradeOverride" , 1);
                    }
                    if((ui->label_receiveData->text()=="Teacher Assistant") or(ui->label_receiveData->text()=="Instructor"))
                    {
                        query.bindValue(":GradeOverride" , 0);
                    }

                    query.bindValue(":EarnedGrade" , ui->lineEdit_Grade->text().toInt());
                    if(query.exec())
                    {
                        QMessageBox::information(this,"","Updated");
                    }

                    //refresh the table
                    ui->label_studentID->setText(ui->tableWidget_students->currentItem()->text());
                    ui->tableWidget_studentGrade->clear();
                    while (ui->tableWidget_studentGrade->rowCount() >0)    //clear the table content every search
                    {
                        ui->tableWidget_studentGrade->removeRow(0);
                    }
                    QString name = ui->label_studentID->text();
                    QSqlQuery query_StudentGrade;
                    query_StudentGrade.prepare("SELECT rubricItemID, earnedGrade, gradeOverride FROM Grade WHERE studentID='"+name+"' ");

                    if(query_StudentGrade.exec("SELECT rubricItemID, earnedGrade, gradeOverride FROM Grade WHERE studentID='"+name+"' "))
                    {
                        int row = 0;
                        while(query_StudentGrade.next())
                        {
                            int rows = ui->Rubric_table->rowCount();
                            QString studentGradeItemID = query_StudentGrade.value(0).toString();
                            for(int i = 0; i < rows; i++)
                            {
                                if(ui->Rubric_table->item(i, 1)->text() == studentGradeItemID)
                                {
                                    ui->tableWidget_studentGrade->insertRow(row);
                                    ui->tableWidget_studentGrade->setItem(row, 1, new QTableWidgetItem(query_StudentGrade.value(0).toString())); //ItemID
                                    ui->tableWidget_studentGrade->setItem(row, 2, new QTableWidgetItem(query_StudentGrade.value(1).toString()));
                                    ui->tableWidget_studentGrade->setItem(row, 4, new QTableWidgetItem(query_StudentGrade.value(2).toString()));
                                    ui->tableWidget_studentGrade->setItem(row, 0, new QTableWidgetItem(ui->Rubric_table->item(i,0)->text()));
                                    row++;
                                }
                            }
                            ui->tableWidget_studentGrade->sortItems(0,Qt::AscendingOrder);
                        }
                    }
                    ui->tableWidget_studentGrade->setHorizontalHeaderItem(0, new QTableWidgetItem("ItemNumber"));
                    ui->tableWidget_studentGrade->setHorizontalHeaderItem(1, new QTableWidgetItem("ItemID"));
                    ui->tableWidget_studentGrade->setHorizontalHeaderItem(2, new QTableWidgetItem("Grade"));
                    ui->tableWidget_studentGrade->setHorizontalHeaderItem(3, new QTableWidgetItem("Commend"));
                    ui->tableWidget_studentGrade->hideColumn(4);
                    return;
                }
                else
                {
                    QMessageBox::information(this,"","Cannot be Grade or Regrade");
                    return;
                }
            }
        }

        //when Graded is no found
        if((ui->label_receiveData->text()=="Teacher Assistant") or(ui->label_receiveData->text()=="Instructor"))
        {
            QSqlQuery query_InputGrade;
            query_InputGrade.prepare("INSERT INTO Grade(studentID, rubricItemID, earnedGrade, gradeOverride)"
                          "VALUES (:StudentID, :RubricItemID, :EarnedGrade, :GradeOverride)");

            query_InputGrade.bindValue(":StudentID" , ui->label_studentID->text());
            query_InputGrade.bindValue(":RubricItemID" , ui->label_ItemID->text());
            query_InputGrade.bindValue(":EarnedGrade" , ui->lineEdit_Grade->text().toInt());
            query_InputGrade.bindValue(":GradeOverride" , 0);

            if(query_InputGrade.exec())
            {
                QMessageBox::information(this,"","Graded");
            }

            //refresh the table
            ui->label_studentID->setText(ui->tableWidget_students->currentItem()->text());
            ui->tableWidget_studentGrade->clear();
            while (ui->tableWidget_studentGrade->rowCount() >0)    //clear the table content every search
            {
                ui->tableWidget_studentGrade->removeRow(0);
            }
            QString name = ui->label_studentID->text();
            QSqlQuery query_StudentGrade;
            query_StudentGrade.prepare("SELECT rubricItemID, earnedGrade, gradeOverride FROM Grade WHERE studentID='"+name+"' ");

            if(query_StudentGrade.exec("SELECT rubricItemID, earnedGrade, gradeOverride FROM Grade WHERE studentID='"+name+"' "))
            {
                int row = 0;
                while(query_StudentGrade.next())
                {
                    int rows = ui->Rubric_table->rowCount();
                    QString studentGradeItemID = query_StudentGrade.value(0).toString();
                    for(int i = 0; i < rows; i++)
                    {
                        if(ui->Rubric_table->item(i, 1)->text() == studentGradeItemID)
                        {
                            ui->tableWidget_studentGrade->insertRow(row);
                            ui->tableWidget_studentGrade->setItem(row, 1, new QTableWidgetItem(query_StudentGrade.value(0).toString())); //ItemID
                            ui->tableWidget_studentGrade->setItem(row, 2, new QTableWidgetItem(query_StudentGrade.value(1).toString()));
                            ui->tableWidget_studentGrade->setItem(row, 4, new QTableWidgetItem(query_StudentGrade.value(2).toString()));
                            ui->tableWidget_studentGrade->setItem(row, 0, new QTableWidgetItem(ui->Rubric_table->item(i,0)->text()));
                            row++;
                        }
                    }
                    ui->tableWidget_studentGrade->sortItems(0,Qt::AscendingOrder);
                }
            }
            ui->tableWidget_studentGrade->setHorizontalHeaderItem(0, new QTableWidgetItem("ItemNumber"));
            ui->tableWidget_studentGrade->setHorizontalHeaderItem(1, new QTableWidgetItem("ItemID"));
            ui->tableWidget_studentGrade->setHorizontalHeaderItem(2, new QTableWidgetItem("Grade"));
            ui->tableWidget_studentGrade->setHorizontalHeaderItem(3, new QTableWidgetItem("Commend"));
            ui->tableWidget_studentGrade->hideColumn(4);
            return;
        }
    }
}

void GradingProgammingASM::on_pushButton_goSubmissionPath_pressed()
{
    QSqlQuery query_sub;

    query_sub.prepare("SELECT pathToSubmissions FROM Activity WHERE activityID= '"+ui->label_activityID->text()+"' ");
    if(query_sub.exec("SELECT pathToSubmissions FROM Activity WHERE activityID= '"+ui->label_activityID->text()+"' "))
    {
        query_sub.next();
        QString filename = query_sub.value(0).toString() + "/" ;
        QString activityID = ui->label_activityID->text() +"/" ;
        QString chose_student = ui->tableWidget_students->currentItem()->text()+ "/";
        QMessageBox::information(this, "", " " + filename + activityID + chose_student +" ");
        QDesktopServices::openUrl(QUrl("file:" + filename + activityID + chose_student, QUrl::TolerantMode));
    }
}

void GradingProgammingASM::on_tableWidget_studentGrade_itemPressed(QTableWidgetItem *item)
{
    ui->label_studentID->setText(ui->tableWidget_students->currentItem()->text());
    ui->label_ItemID->setText(ui->tableWidget_studentGrade->item(ui->tableWidget_studentGrade->currentRow(),1)->text());
    ui->label_ItemNumber->setText(ui->tableWidget_studentGrade->item(ui->tableWidget_studentGrade->currentRow(),0)->text());
    ui->lineEdit_Grade->setText(ui->tableWidget_studentGrade->item(ui->tableWidget_studentGrade->currentRow(),2)->text());

    if (ui->tableWidget_studentGrade->item(ui->tableWidget_studentGrade->currentRow(),4)->text().toInt()==0)
    {
        ui->label_GradeStatus->setText("Can be Grade");
    }
    else if (ui->tableWidget_studentGrade->item(ui->tableWidget_studentGrade->currentRow(),4)->text().toInt()==1)
    {
        ui->label_GradeStatus->setText("Cannot be Grade");
    }
}

void GradingProgammingASM::on_pushButton_Solution_pressed()
{
    QSqlQuery query_solu;

    query_solu.prepare("SELECT pathToSolution FROM Activity WHERE activityID= '"+ui->label_activityID->text()+"' ");
    if(query_solu.exec("SELECT pathToSolution FROM Activity WHERE activityID= '"+ui->label_activityID->text()+"' "))
    {
        query_solu.next();
        QString filename = query_solu.value(0).toString() + "/" ;
        QString activityID = ui->label_activityID->text() + "/" ;
        QString chose_student = "solution/";
        QMessageBox::information(this, "", " " + filename + activityID + chose_student +" ");
        QDesktopServices::openUrl(QUrl("file:" + filename + activityID + chose_student, QUrl::TolerantMode));
    }
}
