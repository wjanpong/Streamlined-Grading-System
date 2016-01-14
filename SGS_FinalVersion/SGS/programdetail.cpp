#include "programdetail.h"
#include "ui_programdetail.h"
#include <QtSql>
#include <QFileDialog>
#include <QMessageBox>
#include <modifyprogramming.h>
#include "programming.h"
#include "programmingfile.h"
#include "modifyprogrammingfile.h"
ProgramDetail::ProgramDetail(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProgramDetail)
{
    ui->setupUi(this);
}

ProgramDetail::~ProgramDetail()
{
    delete ui;
}

void ProgramDetail::setData(QString activityId)
{
    activityID = activityId;
}


void ProgramDetail::on_pushButton_Display_clicked()
{
    QSqlQuery queryGetProgTest,queryGetFileInSystem;
    queryGetProgTest.prepare("SELECT testID,testNum, numOfInputFiles, numOfOutputFiles,environment FROM ProgrammingTest WHERE activityID = :activityID");
    queryGetProgTest.bindValue(":activityID",activityID);
    queryGetFileInSystem.prepare("SELECT fileID, fileTypeID,testNum, pathToFile FROM fileInSystem WHERE activityID = :activityID");
    queryGetFileInSystem.bindValue(":activityID",activityID);
    ui->tableWidget_progTest->clearContents();
    ui->tableWidget_fileInSys->clearContents();
    ui->tableWidget_progTest->setRowCount(50);
    ui->tableWidget_fileInSys->setRowCount(50);

    if(queryGetProgTest.exec())
    {
        int col =0;
        int row = 0;
        QTableWidgetItem *tmpPT;
        while(queryGetProgTest.next())
        {
            tmpPT= new QTableWidgetItem(tr("%1").arg(queryGetProgTest.value(0).toString()));
            ui->tableWidget_progTest->setItem(row, col++, tmpPT);
            tmpPT= new QTableWidgetItem(tr("%1").arg(queryGetProgTest.value(1).toString()));
            ui->tableWidget_progTest->setItem(row, col++, tmpPT);
            tmpPT= new QTableWidgetItem(tr("%1").arg(queryGetProgTest.value(2).toString()));
            ui->tableWidget_progTest->setItem(row, col++, tmpPT);
            tmpPT= new QTableWidgetItem(tr("%1").arg(queryGetProgTest.value(3).toString()));
            ui->tableWidget_progTest->setItem(row, col++, tmpPT);
            tmpPT= new QTableWidgetItem(tr("%1").arg(queryGetProgTest.value(4).toString()));
            ui->tableWidget_progTest->setItem(row, col++, tmpPT);
        }
    }
    if(queryGetFileInSystem.exec())
    {
        int col =0;
        int row = 0;
        QTableWidgetItem *tmpFIS;
        while(queryGetFileInSystem.next())
        {
            QSqlQuery queryGetTestFileType;
            queryGetTestFileType.prepare("SELECT type FROM TestFileType WHERE fileTypeID = :FileTypeID");
            queryGetTestFileType.bindValue(":FileTypeID", queryGetFileInSystem.value(1).toString());
            queryGetTestFileType.exec();
            while(queryGetTestFileType.next())
            {
                tmpFIS= new QTableWidgetItem(tr("%1").arg(queryGetFileInSystem.value(0).toString()));
                ui->tableWidget_fileInSys->setItem(row, col++, tmpFIS);
                tmpFIS= new QTableWidgetItem(tr("%1").arg(queryGetFileInSystem.value(1).toString()));
                ui->tableWidget_fileInSys->setItem(row, col++, tmpFIS);
                tmpFIS= new QTableWidgetItem(tr("%1").arg(queryGetFileInSystem.value(2).toString()));
                ui->tableWidget_fileInSys->setItem(row, col++, tmpFIS);
                tmpFIS= new QTableWidgetItem(tr("%1").arg(queryGetFileInSystem.value(3).toString()));
                ui->tableWidget_fileInSys->setItem(row, col++, tmpFIS);
                tmpFIS= new QTableWidgetItem(tr("%1").arg(queryGetTestFileType.value(0).toString()));
                ui->tableWidget_fileInSys->setItem(row, col++, tmpFIS);
            }
        }
    }
}


void ProgramDetail::on_pushButton_ModifyPT_clicked()
{
    QMessageBox msgbox;
    int rowcurrentact = ui->tableWidget_progTest->currentRow();
    if (ui->tableWidget_progTest->item(rowcurrentact,0)== NULL)//show error if nothing is selected from the show activity table
    {
        msgbox.setText("Please select an test!");
        msgbox.exec();
    }

    else if (ui->tableWidget_progTest->item(rowcurrentact,0)->text()!="")
    {
        QString testID = ui->tableWidget_progTest->item(rowcurrentact,0)->text();
        ModifyProgramming *newDia = new ModifyProgramming();
        newDia->transferData(activityID, testID);
        newDia->exec();
        this->show();
        delete newDia;
        QSqlQuery queryGetProgTest;
        queryGetProgTest.prepare("SELECT testID,testNum, numOfInputFiles, numOfOutputFiles,environment FROM ProgrammingTest WHERE activityID = :activityID");
        queryGetProgTest.bindValue(":activityID",activityID);

        ui->tableWidget_progTest->clearContents();
        ui->tableWidget_progTest->setRowCount(50);
        if(queryGetProgTest.exec())
        {
            int col =0;
            int row = 0;
            QTableWidgetItem *tmpPT;
            while(queryGetProgTest.next())
            {
                tmpPT= new QTableWidgetItem(tr("%1").arg(queryGetProgTest.value(0).toString()));
                ui->tableWidget_progTest->setItem(row, col++, tmpPT);
                tmpPT= new QTableWidgetItem(tr("%1").arg(queryGetProgTest.value(1).toString()));
                ui->tableWidget_progTest->setItem(row, col++, tmpPT);
                tmpPT= new QTableWidgetItem(tr("%1").arg(queryGetProgTest.value(2).toString()));
                ui->tableWidget_progTest->setItem(row, col++, tmpPT);
                tmpPT= new QTableWidgetItem(tr("%1").arg(queryGetProgTest.value(3).toString()));
                ui->tableWidget_progTest->setItem(row, col++, tmpPT);
                tmpPT= new QTableWidgetItem(tr("%1").arg(queryGetProgTest.value(4).toString()));
                ui->tableWidget_progTest->setItem(row, col++, tmpPT);
            }
        }
    }

}

void ProgramDetail::on_pushButton_DeletePT_clicked()
{
        QMessageBox msgbox;
        int rowcurrentact = ui->tableWidget_progTest->currentRow();
        if (ui->tableWidget_progTest->item(rowcurrentact,0)== NULL)//show error if nothing is selected from the show activity table
        {
            msgbox.setText("Please select an test!");
            msgbox.exec();
        }

        else if (ui->tableWidget_progTest->item(rowcurrentact,0)->text()!="")
        {
            QString testID = ui->tableWidget_progTest->item(rowcurrentact,0)->text();
            QSqlQuery query;
            query.prepare("DELETE FROM ProgrammingTest where testID = :testID");
            query.bindValue(":testID", testID);
            if(query.exec())
            {
                QMessageBox::information(this,"","Record Delete!");
                QSqlQuery queryGetProgTest;
                queryGetProgTest.prepare("SELECT testID,testNum, numOfInputFiles, numOfOutputFiles,environment FROM ProgrammingTest WHERE activityID = :activityID");
                queryGetProgTest.bindValue(":activityID",activityID);

                ui->tableWidget_progTest->clearContents();
                ui->tableWidget_progTest->setRowCount(50);
                if(queryGetProgTest.exec())
                {
                    int col =0;
                    int row = 0;
                    QTableWidgetItem *tmpPT;
                    while(queryGetProgTest.next())
                    {
                        tmpPT= new QTableWidgetItem(tr("%1").arg(queryGetProgTest.value(0).toString()));
                        ui->tableWidget_progTest->setItem(row, col++, tmpPT);
                        tmpPT= new QTableWidgetItem(tr("%1").arg(queryGetProgTest.value(1).toString()));
                        ui->tableWidget_progTest->setItem(row, col++, tmpPT);
                        tmpPT= new QTableWidgetItem(tr("%1").arg(queryGetProgTest.value(2).toString()));
                        ui->tableWidget_progTest->setItem(row, col++, tmpPT);
                        tmpPT= new QTableWidgetItem(tr("%1").arg(queryGetProgTest.value(3).toString()));
                        ui->tableWidget_progTest->setItem(row, col++, tmpPT);
                        tmpPT= new QTableWidgetItem(tr("%1").arg(queryGetProgTest.value(4).toString()));
                        ui->tableWidget_progTest->setItem(row, col++, tmpPT);
                    }
                }
            }
        }
}

void ProgramDetail::on_pushButton_createPT_clicked()
{
    programming *newDia = new programming();
    newDia->transferData(activityID);
    newDia->exec();
    this->show();
    delete newDia;
    QSqlQuery queryGetProgTest;
    queryGetProgTest.prepare("SELECT testID,testNum, numOfInputFiles, numOfOutputFiles,environment FROM ProgrammingTest WHERE activityID = :activityID");
    queryGetProgTest.bindValue(":activityID",activityID);

    ui->tableWidget_progTest->clearContents();
    ui->tableWidget_progTest->setRowCount(50);
    if(queryGetProgTest.exec())
    {
        int col =0;
        int row = 0;
        QTableWidgetItem *tmpPT;
        while(queryGetProgTest.next())
        {
            tmpPT= new QTableWidgetItem(tr("%1").arg(queryGetProgTest.value(0).toString()));
            ui->tableWidget_progTest->setItem(row, col++, tmpPT);
            tmpPT= new QTableWidgetItem(tr("%1").arg(queryGetProgTest.value(1).toString()));
            ui->tableWidget_progTest->setItem(row, col++, tmpPT);
            tmpPT= new QTableWidgetItem(tr("%1").arg(queryGetProgTest.value(2).toString()));
            ui->tableWidget_progTest->setItem(row, col++, tmpPT);
            tmpPT= new QTableWidgetItem(tr("%1").arg(queryGetProgTest.value(3).toString()));
            ui->tableWidget_progTest->setItem(row, col++, tmpPT);
            tmpPT= new QTableWidgetItem(tr("%1").arg(queryGetProgTest.value(4).toString()));
            ui->tableWidget_progTest->setItem(row, col++, tmpPT);
        }
    }
}

void ProgramDetail::on_pushButton_createFIS_clicked()
{
    programmingFile *newDia = new programmingFile();
    newDia->setData(activityID);
    newDia->exec();
    this->show();
    delete newDia;
    QSqlQuery queryGetFileInSystem;
    queryGetFileInSystem.prepare("SELECT fileID, fileTypeID,testNum, pathToFile FROM fileInSystem WHERE activityID = :activityID");
    queryGetFileInSystem.bindValue(":activityID",activityID);
    ui->tableWidget_fileInSys->clearContents();
    ui->tableWidget_fileInSys->setRowCount(50);
    if(queryGetFileInSystem.exec())
    {
        int col =0;
        int row = 0;
        QTableWidgetItem *tmpFIS;
        while(queryGetFileInSystem.next())
        {
            QSqlQuery queryGetTestFileType;
            queryGetTestFileType.prepare("SELECT type FROM TestFileType WHERE fileTypeID = :FileTypeID");
            queryGetTestFileType.bindValue(":FileTypeID", queryGetFileInSystem.value(1).toString());
            queryGetTestFileType.exec();
            while(queryGetTestFileType.next())
            {
                tmpFIS= new QTableWidgetItem(tr("%1").arg(queryGetFileInSystem.value(0).toString()));
                ui->tableWidget_fileInSys->setItem(row, col++, tmpFIS);
                tmpFIS= new QTableWidgetItem(tr("%1").arg(queryGetFileInSystem.value(1).toString()));
                ui->tableWidget_fileInSys->setItem(row, col++, tmpFIS);
                tmpFIS= new QTableWidgetItem(tr("%1").arg(queryGetFileInSystem.value(2).toString()));
                ui->tableWidget_fileInSys->setItem(row, col++, tmpFIS);
                tmpFIS= new QTableWidgetItem(tr("%1").arg(queryGetFileInSystem.value(3).toString()));
                ui->tableWidget_fileInSys->setItem(row, col++, tmpFIS);
                tmpFIS= new QTableWidgetItem(tr("%1").arg(queryGetTestFileType.value(0).toString()));
                ui->tableWidget_fileInSys->setItem(row, col++, tmpFIS);
            }
        }
    }
}

void ProgramDetail::on_pushButton_3_clicked()
{
    QMessageBox msgbox;
    int rowcurrentact = ui->tableWidget_fileInSys->currentRow();
    if (ui->tableWidget_fileInSys->item(rowcurrentact,0)== NULL)//show error if nothing is selected from the show activity table
    {
        msgbox.setText("Please select a File!");
        msgbox.exec();
    }

    else if (ui->tableWidget_fileInSys->item(rowcurrentact,0)->text()!="")
    {
        QString fileID = ui->tableWidget_fileInSys->item(rowcurrentact,0)->text();
        QString fileTypeID = ui->tableWidget_fileInSys->item(rowcurrentact,1)->text();
        QSqlQuery queryFIS,queryTestFileType;
        queryFIS.prepare("DELETE FROM fileInSystem where fileID = :fileID");
        queryFIS.bindValue(":fileID", fileID);
        queryTestFileType.prepare("DELETE FROM TestFileType where fileTypeID = :fileTypeID");
        queryTestFileType.bindValue(":fileTypeID", fileTypeID);
       // if((queryTestFileType.exec())&&(queryFIS.exec()))
        if(queryFIS.exec())
        {
            QMessageBox::information(this,"","Record Delete!");
            QSqlQuery queryGetFileInSystem;
            queryGetFileInSystem.prepare("SELECT fileID, fileTypeID,testNum, pathToFile FROM fileInSystem WHERE activityID = :activityID");
            queryGetFileInSystem.bindValue(":activityID",activityID);
            ui->tableWidget_fileInSys->clearContents();
            ui->tableWidget_fileInSys->setRowCount(50);
            int col =0;
            int row = 0;
            QTableWidgetItem *tmpFIS;
            queryGetFileInSystem.exec();
            while(queryGetFileInSystem.next())
            {
                QSqlQuery queryGetTestFileType;
                queryGetTestFileType.prepare("SELECT type FROM TestFileType WHERE fileTypeID = :FileTypeID");
                queryGetTestFileType.bindValue(":FileTypeID", queryGetFileInSystem.value(1).toString());
                queryGetTestFileType.exec();
                while(queryGetTestFileType.next())
                {
                    tmpFIS= new QTableWidgetItem(tr("%1").arg(queryGetFileInSystem.value(0).toString()));
                    ui->tableWidget_fileInSys->setItem(row, col++, tmpFIS);
                    tmpFIS= new QTableWidgetItem(tr("%1").arg(queryGetFileInSystem.value(1).toString()));
                    ui->tableWidget_fileInSys->setItem(row, col++, tmpFIS);
                    tmpFIS= new QTableWidgetItem(tr("%1").arg(queryGetFileInSystem.value(2).toString()));
                    ui->tableWidget_fileInSys->setItem(row, col++, tmpFIS);
                    tmpFIS= new QTableWidgetItem(tr("%1").arg(queryGetFileInSystem.value(3).toString()));
                    ui->tableWidget_fileInSys->setItem(row, col++, tmpFIS);
                    tmpFIS= new QTableWidgetItem(tr("%1").arg(queryGetTestFileType.value(0).toString()));
                    ui->tableWidget_fileInSys->setItem(row, col++, tmpFIS);
                }
            }
        }
    }
}

void ProgramDetail::on_pushButton_ModifyFIS_clicked()
{
    QMessageBox msgbox;
    int rowcurrentact = ui->tableWidget_fileInSys->currentRow();
    if (ui->tableWidget_fileInSys->item(rowcurrentact,0)== NULL)//show error if nothing is selected from the show activity table
    {
        msgbox.setText("Please select a File!");
        msgbox.exec();
    }

    else if (ui->tableWidget_fileInSys->item(rowcurrentact,0)->text()!="")
    {
        QString fileID = ui->tableWidget_fileInSys->item(rowcurrentact,0)->text();
        QString fileTypeID = ui->tableWidget_fileInSys->item(rowcurrentact,1)->text();
        ModifyProgrammingFile *newDia = new ModifyProgrammingFile();
        newDia->transferData(fileID, fileTypeID,activityID);
        newDia->exec();
        this->show();
        delete newDia;
        QSqlQuery queryGetFileInSystem;
        queryGetFileInSystem.prepare("SELECT fileID, fileTypeID,testNum, pathToFile FROM fileInSystem WHERE activityID = :activityID");
        queryGetFileInSystem.bindValue(":activityID",activityID);
        ui->tableWidget_fileInSys->clearContents();
        ui->tableWidget_fileInSys->setRowCount(50);
        int col =0;
        int row = 0;
        QTableWidgetItem *tmpFIS;
        queryGetFileInSystem.exec();
        while(queryGetFileInSystem.next())
        {
            QSqlQuery queryGetTestFileType;
            queryGetTestFileType.prepare("SELECT type FROM TestFileType WHERE fileTypeID = :FileTypeID");
            queryGetTestFileType.bindValue(":FileTypeID", queryGetFileInSystem.value(1).toString());
            queryGetTestFileType.exec();
            while(queryGetTestFileType.next())
            {
                tmpFIS= new QTableWidgetItem(tr("%1").arg(queryGetFileInSystem.value(0).toString()));
                ui->tableWidget_fileInSys->setItem(row, col++, tmpFIS);
                tmpFIS= new QTableWidgetItem(tr("%1").arg(queryGetFileInSystem.value(1).toString()));
                ui->tableWidget_fileInSys->setItem(row, col++, tmpFIS);
                tmpFIS= new QTableWidgetItem(tr("%1").arg(queryGetFileInSystem.value(2).toString()));
                ui->tableWidget_fileInSys->setItem(row, col++, tmpFIS);
                tmpFIS= new QTableWidgetItem(tr("%1").arg(queryGetFileInSystem.value(3).toString()));
                ui->tableWidget_fileInSys->setItem(row, col++, tmpFIS);
                tmpFIS= new QTableWidgetItem(tr("%1").arg(queryGetTestFileType.value(0).toString()));
                ui->tableWidget_fileInSys->setItem(row, col++, tmpFIS);
            }
        }
}
}
