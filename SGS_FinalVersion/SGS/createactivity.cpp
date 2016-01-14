#include "createactivity.h"
#include "ui_createactivity.h"
#include "createrubric.h"
#include "createbonuspenalty.h"
#include "programming.h"
#include <QtSql>
#include <QFileDialog>
#include <QMessageBox>
#include "instructor.h"

createActivity::createActivity(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::createActivity)
{
    ui->setupUi(this);
}

createActivity::~createActivity()
{
    delete ui;
}

void createActivity::displayData(QString activityId)
{

    QSqlQuery query;
    query.prepare("SELECT activityName, activityType, dueDate, language, pathToSubmissions, numTests, pathToSolution FROM Activity WHERE activityID = :activityId");
    query.bindValue(":activityId",activityId );
    if(query.exec())
    {
        if(query.next())
        {
            ui->txtActivityName->setText(query.value(0).toString());
            ui->comboBox_activityType->setCurrentText(query.value(1).toString());
            ui->dueDate->setDateTime(query.value(2).toDateTime());
            ui->comboBox_activityLang->setCurrentText(query.value(3).toString());
            ui->txtStdDir->setText(query.value(4).toString());
            ui->Numtests->setValue(query.value(5).toInt());
            ui->txtSolutionPath->setText(query.value(6).toString());

        }
        else
        {
            QMessageBox::information(this,"","No next!");
        }
    }
    else
    {
        QMessageBox::information(this,"","Query cannot be executed!");
    }

}



void createActivity::on_pushButton_createActivity_clicked()
{
    bool exist=false;
    QMessageBox msgbox;
    QString numTestString = ui->Numtests->text();
    int numTests = numTestString.toInt();
    QSqlQuery queryInsertActivity;
    QSqlQuery queryGetAllActivityName;
    queryGetAllActivityName.exec("select activityName from dbo.Activity");
    queryInsertActivity.prepare("INSERT INTO Activity(courseID, activityName, activityType, dueDate, language, pathToSubmissions, numTests, pathToSolution)"
                  "VALUES (:CourseID, :ActivityName, :ActivityType, :DueDate, :Language, :PathToSubmissions , :NumTests, :PathToSolution)");

    queryInsertActivity.bindValue(":CourseID", CourseID);//courseID from instructor selection page
    queryInsertActivity.bindValue(":ActivityName", ui->txtActivityName->text());
    queryInsertActivity.bindValue(":ActivityType", ui->comboBox_activityType->currentText());
    queryInsertActivity.bindValue(":DueDate", ui->dueDate->dateTime());
    queryInsertActivity.bindValue(":Language", ui->comboBox_activityLang->currentText());
    queryInsertActivity.bindValue(":PathToSubmissions", ui->txtStdDir->text());
    queryInsertActivity.bindValue(":NumTests", numTests);
    queryInsertActivity.bindValue(":PathToSolution", ui->txtSolutionPath->text());
    while (queryGetAllActivityName.next())
    {
        if (ui->txtActivityName->text() == queryGetAllActivityName.value(0))
        {
           msgbox.setText("This Activity Name already existed");
           msgbox.exec();
           exist=true;
           break;
        }
    }
    if((!exist)&&(ui->txtActivityName->text()!="") &&(ui->txtSolutionPath->text()!="") && (ui->comboBox_activityType->currentText()!="") && (ui->comboBox_activityLang->currentText()!= "" ))
    {
        if(ui->comboBox_activityType->currentText()== "Programming Assignment")
        {
            if(ui->txtTestID->text()=="")
            {
                msgbox.information(this,"","Please fill details for Programming Activity!!");
            }
            else
            {
                if(queryInsertActivity.exec())
                {
                    QSqlQuery queryGetActivityId;
                    queryGetActivityId.prepare("SELECT activityID FROM dbo.Activity WHERE activityName=:ActivityName");
                    queryGetActivityId.bindValue(":ActivityName",ui->txtActivityName->text() );
                    if(queryGetActivityId.exec())
                    {
                        if(queryGetActivityId.next())
                        {
                            QString numTestString1 = ui->numInput->text();
                            int numInput = numTestString1.toInt();
                            QString numTestString2 = ui->numOutput->text();
                            int numOutput = numTestString2.toInt();
                            QSqlQuery insertProgTest;
                            ActivityID = queryGetActivityId.value(0).toString();
                            insertProgTest.prepare("INSERT INTO dbo.ProgrammingTest(testID, activityID, testNum, numOfInputFiles, numOfOutputFiles, environment)"
                                          "VALUES (:TestID, :ActivityID, :TestNum, :NumOfInputFiles, :NumOfOutputFiles, :Environment)");
                            insertProgTest.bindValue(":TestID",ui->txtTestID->text().toInt());
                            insertProgTest.bindValue(":ActivityID", ActivityID.toInt());//ActivityID for the specified programming assignment
                            insertProgTest.bindValue(":TestNum", ui->spinBox_numTests->text().toInt());
                            insertProgTest.bindValue(":NumOfInputFiles", numInput);
                            insertProgTest.bindValue(":NumOfOutputFiles", numOutput);
                            insertProgTest.bindValue(":Environment", ui->comboBox_environment->currentText());

                            if((ui->txtTestID->text()!="") &&(ui->spinBox_numTests->text()!="") && (ui->comboBox_environment->currentText()!=""))
                            {

                                if(insertProgTest.exec())
                                {

                                    msgbox.information(this,"","New record updated!");

                                }
                                else
                                {
                                    QMessageBox::information(this,"",insertProgTest.lastError().text());
                                }
                            }
                        }
                        else
                        {
                            msgbox.information(this,"","No Next!!");
                        }
                    }
                    else
                    {
                        msgbox.information(this,"",queryGetActivityId.lastError().text());
                    }
                }
                else
                {
                    msgbox.information(this,"",queryInsertActivity.lastError().text());
                }
            }
        }
        else
        {
            if(queryInsertActivity.exec())
            {
                msgbox.information(this,"","Record Added");
            }
            else
            {
                msgbox.information(this,"",queryInsertActivity.lastError().text());
            }
        }

    }
    else
    {
        msgbox.information(this,"","Please fill the important fields");
    }
}




void createActivity::setData(QString courseId)
{
    CourseID = courseId;
}

void createActivity::on_pushButton_SearchSub_clicked()
{
    QString filename = QFileDialog::getExistingDirectory(this, tr("Open Directory"), "C://");

        if (filename=="")
        {
            QMessageBox::information(this, "No File Selected.", "Please specify the path to submit.");
            return;
        }
        else
        {
            ui->txtStdDir->setText(filename);
        }
}

void createActivity::on_pushButton_SearchSol_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, tr("Open Directory"), "C://", "All files (*.*)");

        if (filename=="")
        {
            QMessageBox::information(this, "No File Selected.", "Please choose the solution file that want to add.");
            return;
        }
        else
        {
            ui->txtSolutionPath->setText(filename);
        }

}
