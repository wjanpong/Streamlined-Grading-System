#include "modifyrubric.h"
#include "ui_modifyrubric.h"
#include "instructor.h"
#include <Qstring>
#include <QMessageBox>
#include <QtSql>
#include <QMessageLogger>
#include <QSqlQuery>
#include <QUrl>
#include <QFileDialog>
#include <QDesktopServices>
#include <QDebug>

ModifyRubric::ModifyRubric(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModifyRubric)
{
    ui->setupUi(this);
}

ModifyRubric::~ModifyRubric()
{
    delete ui;
}

void ModifyRubric::setData(const QString& activityId ,const QString& activityName, const QString& num_test)
{
    ui->label_activityId->setText(activityId);
    ui->label_activityName->setText(activityName);
    ui->label_numTest->setText(num_test);

    //load rubric table
    QSqlQuery query_rubric;
    int num_rubricItem = 0;
    query_rubric.prepare("SELECT rubricItemNumber, rubricItemID, rubricItemText, rubricItemValue FROM RubricItem WHERE activityID= '"+activityId+"'");
    if(query_rubric.exec("SELECT rubricItemNumber, rubricItemID, rubricItemText, rubricItemValue FROM RubricItem WHERE activityID= '"+activityId+"'"))
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
    return;
}

void ModifyRubric::on_Rubric_table_itemPressed(QTableWidgetItem *item)
{
    int cur_row = ui->Rubric_table->currentRow();
    ui->label_rubricID->setText(ui->Rubric_table->item(cur_row,1)->text());
    ui->lineEdit_ItemNum->setText(ui->Rubric_table->item(cur_row,0)->text());
    ui->lineEdit_rubricValue->setText(ui->Rubric_table->item(cur_row,3)->text());
    ui->lineEdit_rubricText->setText(ui->Rubric_table->item(cur_row,2)->text());
    return;
}

void ModifyRubric::on_pushButton_UpdateRubric_pressed()
{
    bool itemNum;
    bool value;
    bool text;
    int cur_row = ui->Rubric_table->currentRow();
    qDebug() << "The current row count is: "<<cur_row;

    if (cur_row > -1)
    {
        itemNum = (ui->lineEdit_ItemNum->text()) == (ui->Rubric_table->item(cur_row,0)->text());
        qDebug()<<"The current item in itemNum is: "<<itemNum;
        value = (ui->lineEdit_rubricValue->text()) == (ui->Rubric_table->item(cur_row,3)->text());
        text = (ui->lineEdit_rubricText->text()) == (ui->Rubric_table->item(cur_row,2)->text());

        if(((itemNum & value) & text)!=1)
        {
            QSqlQuery query_rubricList;
            query_rubricList.prepare("UPDATE RubricItem SET rubricItemNumber = :RubricItemNumber, rubricItemText = :RubricItemText, rubricItemValue = :RubricItemValue WHERE rubricItemID = :RubricItemID and activityID = :ActivityID");
            query_rubricList.bindValue(":ActivityID" , ui->label_activityId->text());
            query_rubricList.bindValue(":RubricItemID" , ui->label_rubricID->text());

            query_rubricList.bindValue(":RubricItemNumber",ui->lineEdit_ItemNum->text());
            query_rubricList.bindValue(":RubricItemText",ui->lineEdit_rubricText->text());
            query_rubricList.bindValue(":RubricItemValue",ui->lineEdit_rubricValue->text());

            if(query_rubricList.exec())
            {
                QMessageBox::information(this,"","Updated");
            }

            //refresh the table
            ui->Rubric_table->clear();
            while(ui->Rubric_table->rowCount()>0)
            {
                ui->Rubric_table->removeRow(0);
            }
            QSqlQuery query_rubric;
            int num_rubricItem = 0;
            query_rubric.prepare("SELECT rubricItemNumber, rubricItemID, rubricItemText, rubricItemValue FROM RubricItem WHERE activityID= '"+ui->label_activityId->text()+"'");
            if(query_rubric.exec("SELECT rubricItemNumber, rubricItemID, rubricItemText, rubricItemValue FROM RubricItem WHERE activityID= '"+ui->label_activityId->text()+"'"))
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
                ui->Rubric_table->setHorizontalHeaderItem(0, new QTableWidgetItem("Item Number"));
                ui->Rubric_table->setHorizontalHeaderItem(1, new QTableWidgetItem("Item ID"));
                ui->Rubric_table->setHorizontalHeaderItem(2, new QTableWidgetItem("Item Text"));
                ui->Rubric_table->setHorizontalHeaderItem(3, new QTableWidgetItem("Value"));
                ui->Rubric_table->sortItems(0,Qt::AscendingOrder);
            }

            QSqlQuery query_studentGrade;
            int num_student = 0;
            query_studentGrade.exec("DELETE FROM Grade WHERE rubricItemID = "+ui->label_rubricID->text()+" ");
            QMessageBox::information(this,"","All Students Graded with this RubricItemID are Removed from the database.");
        }
        else
        {
            QMessageBox::information(this,"Rejected","Nothing changed");
            return;
        }

    }
    else
    {
        QMessageBox::information(this,"Failed","Please select the item to be updated");
    }



}

void ModifyRubric::on_pushButton_DeleteRubric_pressed()
{
    int cur_row = ui->Rubric_table->currentRow();
    QString ID = ui->Rubric_table->item(cur_row,1)->text();
    QSqlQuery query;
    query.exec("DELETE FROM RubricItem WHERE rubricItemID = "+ID+" ");
    QMessageBox::information(this,"","Deleted");

    //refresh the table
    ui->Rubric_table->clear();
    while(ui->Rubric_table->rowCount()>0)
    {
        ui->Rubric_table->removeRow(0);
    }
    QSqlQuery query_rubric;
    int num_rubricItem = 0;
    query_rubric.prepare("SELECT rubricItemNumber, rubricItemID, rubricItemText, rubricItemValue FROM RubricItem WHERE activityID= '"+ui->label_activityId->text()+"'");
    if(query_rubric.exec("SELECT rubricItemNumber, rubricItemID, rubricItemText, rubricItemValue FROM RubricItem WHERE activityID= '"+ui->label_activityId->text()+"'"))
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
        ui->Rubric_table->setHorizontalHeaderItem(0, new QTableWidgetItem("Item Number"));
        ui->Rubric_table->setHorizontalHeaderItem(1, new QTableWidgetItem("Item ID"));
        ui->Rubric_table->setHorizontalHeaderItem(2, new QTableWidgetItem("Item Text"));
        ui->Rubric_table->setHorizontalHeaderItem(3, new QTableWidgetItem("Value"));
        ui->Rubric_table->sortItems(0,Qt::AscendingOrder);
    }
}

