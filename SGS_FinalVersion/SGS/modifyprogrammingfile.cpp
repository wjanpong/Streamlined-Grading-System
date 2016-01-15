#include "modifyprogrammingfile.h"
#include "ui_modifyprogrammingfile.h"
#include <QtSql>
#include <QFileDialog>
#include <QMessageBox>
ModifyProgrammingFile::ModifyProgrammingFile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModifyProgrammingFile)
{
    ui->setupUi(this);
}

ModifyProgrammingFile::~ModifyProgrammingFile()
{
    delete ui;
}

void ModifyProgrammingFile::transferData(QString fileId, QString fileTypeId, QString activityID)
{
    FileID = fileId;
    FileTypeID = fileTypeId;
    ActivityID = activityID;
    ui->fileID->setText(FileID);
    ui->fileTypeId->setText(FileTypeID);
    QSqlQuery queryFType,queryFIS;
    queryFIS.prepare("SELECT testNum, pathToFile FROM fileInSystem WHERE fileID = :FileID");
    queryFIS.bindValue(":FileID", FileID);
    queryFType.prepare("SELECT type FROM TestFileType WHERE fileTypeID = :FileTypeID");
    queryFType.bindValue(":FileTypeID", FileTypeID);
    if((queryFIS.exec())&&(queryFType.exec()))
    {
        if((queryFIS.next())&&(queryFType.next()))
        {
            ui->label_activityId->setText(ActivityID);
            ui->spinBox_numTest->setValue(queryFIS.value(0).toInt());
            ui->txtPathToFile->setText(queryFIS.value(1).toString());
            ui->txtType->setText(queryFType.value(0).toString());
        }
    }
    else
    {
        QMessageBox::information(this,"",queryFIS.lastError().text());
    }
}
void ModifyProgrammingFile::on_pushButton_update_clicked()
{
    QSqlQuery queryFIS,queryFT;
    queryFIS.prepare("UPDATE fileInSystem SET testNum = :testNum, pathToFile = :PathToFile WHERE fileID = :FileID");
    queryFIS.bindValue(":FileID", FileID);
    queryFIS.bindValue(":testNum",ui->spinBox_numTest->text().toInt());
    queryFIS.bindValue(":PathToFile", ui->txtPathToFile->text());
    queryFT.prepare("UPDATE TestFileType SET type = :Type WHERE fileTypeID = :FileTypeID");
    queryFT.bindValue(":Type", ui->txtType->text());
    queryFT.bindValue(":FileTypeID", FileTypeID);
    if(queryFIS.exec())
    {
        if(queryFT.exec())
        {
            QMessageBox::information(this,"", "Record Updated!");
        }
        else
        {
            QMessageBox::information(this,"", queryFT.lastError().text());
        }
    }
    else
    {
        QMessageBox::information(this,"", queryFIS.lastError().text());
    }
}

void ModifyProgrammingFile::on_pushButton_BrowseFile_clicked()
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
