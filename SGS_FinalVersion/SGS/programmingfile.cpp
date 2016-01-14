#include "programmingfile.h"
#include "ui_programmingfile.h"
#include <QtSql>
#include <QFileDialog>
#include <QMessageBox>

programmingFile::programmingFile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::programmingFile)
{
    ui->setupUi(this);
}

programmingFile::~programmingFile()
{
    delete ui;
}

void programmingFile::setData(QString activityId)
{
    ui->label_activityId->setText(activityId);
    ui->spinBox_numTest->setMinimum(1);
    //ui->spinBox_numTest->setMaximum(numTests);
}


void programmingFile::on_pushButton_insertToTestFileType_clicked()
{
    QMessageBox msgbox;
    QSqlQuery queryGetFileTypeID;
    bool exist=false;
    queryGetFileTypeID.exec("SELECT fileTypeID FROM TestFileType");
    while(queryGetFileTypeID.next())
    {
        if (ui->txtFileTypeID->text() == queryGetFileTypeID.value(0))
        {
            msgbox.setText("This File Type ID Already Exists");
            msgbox.exec();
            exist=true;
            break;
        }
    }
    if(!exist)
    {
        if(ui->txtFileTypeID->text()!="")
        {
                QSqlQuery query;
                query.prepare("INSERT INTO TestFileType(fileTypeID, type)"
                              "VALUES(:FileTypeID, :Type)");
                query.bindValue(":FileTypeID", ui->txtFileTypeID->text());
                query.bindValue(":Type", ui->txtType->text());
                if(query.exec())
                {
                    QMessageBox::information(this, "", "Record Added");
                }
                else
                {
                    QMessageBox::information(this, "", query.lastError().text());
                }
        }
        else
        {
            QMessageBox::information(this,"", "Please fill the important field");
        }
    }

}



void programmingFile::on_pushButton_insertToFileInSystem_clicked()
{
    QMessageBox msgbox;
    QSqlQuery queryGetFileID;
    bool exist=false;
    queryGetFileID.exec("SELECT fileID FROM FileInSystem");
    while(queryGetFileID.next())
    {
        if (ui->txtFileId->text() == queryGetFileID.value(0))
        {
            msgbox.setText("This File ID Already Exists");
            msgbox.exec();
            exist=true;
            break;
        }
    }
    if(!exist)
    {
            if(ui->txtFileId->text()!="")
            {
                QSqlQuery query;
                query.prepare("INSERT INTO FileInSystem(fileID, activityID, fileTypeID, testNum, pathToFile)"
                              "VALUES (:FileID, :ActivityID, :FileTypeID, :testNum, :PathToFile)");
                query.bindValue(":FileID", ui->txtFileId->text().toInt());
                query.bindValue(":ActivityID", ui->label_activityId->text());
                query.bindValue(":FileTypeID", ui->txtFileTypeID->text().toInt());
                query.bindValue(":testNum",ui->spinBox_numTest->text().toInt());
                query.bindValue(":PathToFile", ui->txtPathToFile->text());
                if(query.exec())
                {
                    QMessageBox::information(this, "", "Record Added");
                }
                else
                {
                    QMessageBox::information(this, "", query.lastError().text());
                }
            }
            else
            {
                QMessageBox::information(this,"", "Please fill the important fill");
            }
    }

}

void programmingFile::on_pushButton_BrowseFile_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, tr("Open Directory"), "C://", "All files (*.*)");

    if (filename=="")
    {
         QMessageBox::information(this, "No File Selected.", "Please choose the solution file that want to add.");
         return;
    }
    else
    {
          ui->txtPathToFile->setText(filename);
    }

}

//void programmingFile::on_pushButton_Create_clicked()
//{
//    if((ui->txtFileTypeID->text()!="") &&(ui->txtFileId->text()!=""))
//    {
//        QSqlQuery queryFT,queryFIS;
//        queryFT.prepare("INSERT INTO TestFileType(fileTypeID, type)"
//                      "VALUES(:FileTypeID, :Type)");
//        queryFT.bindValue(":FileTypeID", ui->txtFileTypeID->text());
//        queryFT.bindValue(":Type", ui->txtType->text());
//        queryFIS.prepare("INSERT INTO FileInSystem(fileID, activityID, fileTypeID, testNum, pathToFile)"
//                      "VALUES (:FileID, :ActivityID, :FileTypeID, :testNum, :PathToFile)");
//        queryFIS.bindValue(":FileID", ui->txtFileId->text().toInt());
//        queryFIS.bindValue(":ActivityID", ui->label_activityId->text());
//        queryFIS.bindValue(":FileTypeID", ui->txtFileTypeID->text().toInt());
//        queryFIS.bindValue(":testNum",ui->spinBox_numTest->text().toInt());
//        queryFIS.bindValue(":PathToFile", ui->txtPathToFile->text());
//        if(queryFT.exec())
//        {
//            if(queryFIS.exec())
//            {
//                QMessageBox::information(this, "", "Record Added");
//            }
//            else
//            {
//                QMessageBox::information(this, "", queryFIS.lastError().text());
//            }
//        }
//        else
//        {
//            QMessageBox::information(this, "", queryFT.lastError().text());
//        }
//    }
//     else
//     {
//         QMessageBox::information(this,"", "Please fill the important fill");
//     }
//}


