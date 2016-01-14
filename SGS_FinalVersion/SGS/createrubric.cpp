#include "createrubric.h"
#include "ui_createrubric.h"
#include <QtSql>
#include <QMessageBox>
#include "instructor.h"
createRubric::createRubric(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::createRubric)
{
    ui->setupUi(this);
}

createRubric::~createRubric()
{
    delete ui;
}

void createRubric::on_pushButton_createRubric_clicked()
{
    Instructor newConnection;
    QMessageBox msgbox;
    bool exist = false;
    /*if (!newConnection.createConnection())
    {
        msgbox.setText("Not Connected!");
        msgbox.exec();
    }
    else
    {*/
        QSqlQuery query;
        QSqlQuery queryrubric;
        queryrubric.exec("select rubricItemID from dbo.RubricItem");
        query.prepare("INSERT INTO RubricItem(rubricItemID, activityID, rubricItemNumber, rubricItemText, rubricItemValue)"
                      "VALUES (:RubricItemID, :ActivityID, :RubricItemNumber, :RubricItemText, :RubricItemValue)");
        query.bindValue(":RubricItemID", ui->intRubicId->text().toInt());
        query.bindValue(":ActivityID", ui->label_activityId->text());
        query.bindValue(":RubricItemNumber", ui->spinBox_RubricNum->text().toInt());
        query.bindValue(":RubricItemText", ui->textEdit_descriptionRubric->toPlainText());
        query.bindValue(":RubricItemValue", ui->lineEdit_maxRubricPoint->text().toInt());
        //if((ui->intRubicId->text()!="") && (ui->spinBox_RubricNum->text()!="") && (ui->lineEdit_maxRubricPoint->text()!="") &&(ui->textEdit_descriptionRubric->toPlainText()!=""))
        while (queryrubric.next())
        {

            if (ui->intRubicId->text() == queryrubric.value(0))
            {
                msgbox.setText("Rubric ID exists");
                msgbox.exec();
                exist=true;
                break;
            }
        }
        if (!exist)
        {
            if(ui->intRubicId->text()!="")
            {
                if(query.exec())
                {
                    msgbox.information(this,"" ,"New Record Added!");
                }
                else
                {
                    QMessageBox::information(this,"", query.lastError().text());
                }
            }

            else
            {
                msgbox.setText("Please Fill the Important Fields");
                msgbox.exec();
            }
        }
    //}
}

void createRubric::setData(int activityId,int testnum)
{
    ui->label_activityId->setText(QString::number(activityId));
    ui->spinBox_RubricNum->setMaximum(testnum);
    ui->spinBox_RubricNum->setMinimum(1);
}
