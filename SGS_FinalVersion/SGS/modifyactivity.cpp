#include "modifyactivity.h"
#include "ui_modifyactivity.h"
#include "createactivity.h"
#include "ui_createactivity.h"
#include "createrubric.h"
#include "createbonuspenalty.h"
#include "programming.h"
#include <QtSql>
#include <QMessageBox>
#include "Instructor.h"
#include <QFileDialog>
#include <modifyprogramming.h>

modifyActivity::modifyActivity(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modifyActivity)
{
    ui->setupUi(this);
}

modifyActivity::~modifyActivity()
{
    delete ui;
}

void modifyActivity::displayData(QString activityId)
{
    ui->txtActvityId->setText(activityId);
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

void modifyActivity::on_ModifyAcitivty_clicked()
{
    QMessageBox msgbox;
//    QString numTestString = ui->Numtests->text();
//    int numTests = numTestString.toInt();
        QSqlQuery query;
        query.prepare("UPDATE Activity SET activityName = :ActivityName, activityType = :ActivityType, dueDate = :DueDate , language = :Language , pathToSubmissions = :PathToSubmissions, numTests = :NumTests, pathToSolution= :PathToSolution WHERE activityID = :ActivityID");

        query.bindValue(":ActivityID",ui->txtActvityId->text());
        //query.bindValue(":CourseID", CourseID);//courseID from instructor selection page
        query.bindValue(":ActivityName", ui->txtActivityName->text());
        query.bindValue(":ActivityType", ui->comboBox_activityType->currentText());
        query.bindValue(":DueDate", ui->dueDate->dateTime());
        query.bindValue(":Language", ui->comboBox_activityLang->currentText());
        query.bindValue(":PathToSubmissions", ui->txtStdDir->text());
        query.bindValue(":NumTests",ui->Numtests->text().toInt());
        query.bindValue(":PathToSolution", ui->txtSolutionPath->text());

        if((ui->txtActivityName->text()!="") &&(ui->txtSolutionPath->text()!="") && (ui->comboBox_activityType->currentText()!="") && (ui->comboBox_activityLang->currentText()!= "" ))
        {
            if(query.exec())
            {
                msgbox.information(this,"","Record Updated!");
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

//                if(ui->comboBox_activityType->currentText() == "Programming Assignment")
//                {
//                    QSqlQuery queryGetTestId;
//                    queryGetTestId.prepare("SELECT testID, testNum FROM ProgrammingTest WHERE activityID = :activityID");
//                    queryGetTestId.bindValue(":activityID", ui->txtActvityId->text());
//                    if(queryGetTestId.exec())
//                    {
//                        if(queryGetTestId.next())
//                        {
//                            ModifyProgramming *newDia = new ModifyProgramming();
//                            newDia->transferData(ui->txtActvityId->text(), queryGetTestId.value(0).toString());
//                            newDia->exec();
//                            this->show();
//                            delete newDia;
//                        }
//                        else
//                        {
//                            msgbox.information(this,"","No next!");
//                        }
//                    }
//                    else
//                    {
//                        msgbox.information(this,"",queryGetTestId.lastError().text());
//                    }

//                }
//                else
//                {
//                     msgbox.information(this,"","Record Updated!");
//                }

//            }
//            else
//            {
//                QMessageBox::information(this,"",query.lastError().text());
//            }
//        }
//        else
//        {
//            msgbox.setText("Please fill the important fields");
//            msgbox.exec();
//        }

//}

void modifyActivity::on_pushButton_BrowseSol_clicked()
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

void modifyActivity::on_pushButton_BrowseSub_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, tr("Open Directory"), "C://", "All files (*.*)");

        if (filename=="")
        {
            QMessageBox::information(this, "No File Selected.", "Please choose the solution file that want to add.");
            return;
        }
        else
        {
            ui->txtStdDir->setText(filename);
        }
}
