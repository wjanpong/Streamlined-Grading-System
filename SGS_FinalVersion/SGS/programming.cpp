#include "programming.h"
#include "ui_programming.h"
#include <QtSql>
#include <QMessageBox>
#include "instructor.h"

programming::programming(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::programming)
{
    ui->setupUi(this);
}

programming::~programming()
{
    delete ui;
}

void programming::transferData(QString activityId)
{
    ui->label_activityId->setText(activityId);
    ui->spinBox_numTests->setMinimum(1);
}

void programming::setData(int activityId, int numTests)
{
    ui->label_activityId->setText(QString:: number(activityId));
    ui->spinBox_numTests->setMaximum(numTests);
    ui->spinBox_numTests->setMinimum(numTests);
}

void programming::on_pushButton_update_P_Test_clicked()
{

    QMessageBox msgbox;
    bool exist=false;
        QString numTestString1 = ui->numInput->text();
        int numInput = numTestString1.toInt();
        QString numTestString2 = ui->numOutput->text();
        int numOutput = numTestString2.toInt();

        QSqlQuery queryActivity;
        queryActivity.prepare("INSERT INTO dbo.ProgrammingTest(testID, activityID, testNum, numOfInputFiles, numOfOutputFiles, environment)"
                      "VALUES (:TestID, :ActivityID, :TestNum, :NumOfInputFiles, :NumOfOutputFiles, :Environment)");
        queryActivity.bindValue(":TestID",ui->txtTestID->text().toInt());
        queryActivity.bindValue(":ActivityID", ui->label_activityId->text().toInt());//ActivityID for the specified programming assignment
        queryActivity.bindValue(":TestNum", ui->spinBox_numTests->text().toInt());
        queryActivity.bindValue(":NumOfInputFiles", numInput);
        queryActivity.bindValue(":NumOfOutputFiles", numOutput);
        queryActivity.bindValue(":Environment", ui->comboBox_environment->currentText());

        QSqlQuery queryGetTestID;
        queryGetTestID.exec("SELECT testID from ProgrammingTest");
        while (queryGetTestID.next())
        {
            if (ui->txtTestID->text() == queryGetTestID.value(0))
            {
                msgbox.setText("This Test ID Already Exists");
                msgbox.exec();
                exist=true;
                break;
            }
        }

        if(!exist)
        {
                if((ui->txtTestID->text()!="") &&(ui->spinBox_numTests->text()!="") && (ui->comboBox_environment->currentText()!=""))
                {

                        if(queryActivity.exec())
                        {

                            msgbox.information(this,"","New record updated!");

                        }
                        else
                        {
                            QMessageBox::information(this,"",queryActivity.lastError().text());
                        }
                }
               else
               {
                  msgbox.setText("Please fill the important fields");
                  msgbox.exec();
               }
        }



}
