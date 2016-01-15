#include "modifyprogramming.h"
#include "ui_modifyprogramming.h"
#include <QtSql>
#include <QFileDialog>
#include <QMessageBox>
ModifyProgramming::ModifyProgramming(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModifyProgramming)
{
    ui->setupUi(this);
}

ModifyProgramming::~ModifyProgramming()
{
    delete ui;
}

void ModifyProgramming::transferData(QString activityID, QString testId)
{
    TestID = testId;
    ActivityID=activityID;
    ui->label_activityId->setText(ActivityID);
    ui->label_testID_2->setText(TestID);
    ui->spinBox_numTests->setMinimum(1);

    QSqlQuery query;
    query.prepare("SELECT testNum, numOfInputFiles, numOfOutputFiles, environment FROM ProgrammingTest WHERE testID = :testID");
    query.bindValue(":testID",TestID );
    if(query.exec())
    {
        if(query.next())
        {
            ui->label_activityId->setText(ActivityID);
            ui->label_testID_2->setText(TestID);
            ui->spinBox_numTests->setValue(query.value(0).toInt());
            ui->numInput->setValue(query.value(1).toInt());
            ui->numOutput->setValue(query.value(2).toInt());
            ui->comboBox_environment->setCurrentText(query.value(3).toString());
        }
    }
    else
    {
        QMessageBox::information(this,"","Query cannot be executed!");
    }

}


void ModifyProgramming::on_pushButton_update_P_Test_clicked()
{
    QMessageBox msgbox;
    QString numTestString1 = ui->numInput->text();
    int numInput = numTestString1.toInt();
    QString numTestString2 = ui->numOutput->text();
    int numOutput = numTestString2.toInt();

    QSqlQuery query;
    query.prepare("UPDATE ProgrammingTest SET testNum = :testNum, numOfInputFiles = :numOfInputFiles, numOfOutputFiles = :numOfOutputFiles , environment = :environment WHERE testID = :testID");

    query.bindValue(":testNum",ui->spinBox_numTests->text().toInt());
    query.bindValue(":numOfInputFiles", numInput);
    query.bindValue(":numOfOutputFiles", numOutput);
    query.bindValue(":environment", ui->comboBox_environment->currentText());
    query.bindValue(":testID",TestID);

    if( (ui->spinBox_numTests->text()!="") && (ui->comboBox_environment->currentText()!=""))
    {

        if(query.exec())
        {

            msgbox.information(this,"","New record updated!");

        }
        else
        {
            QMessageBox::information(this,"",query.lastError().text());
        }
    }
    else
    {
        msgbox.setText("Please fill the important fields");
        msgbox.exec();
    }
}
