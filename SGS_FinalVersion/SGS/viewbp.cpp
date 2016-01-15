#include "viewbp.h"
#include "ui_viewbp.h"
#include "createbonuspenalty.h"
#include "modifybp.h"
#include <Qstring>
#include <QMessageBox>
#include <QtSql>
#include <QMessageLogger>
#include <QSqlQuery>



ViewBP::ViewBP(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewBP)
{
    ui->setupUi(this);
}

ViewBP::~ViewBP()
{
    delete ui;
}

void ViewBP::setData(int activityId)
{
    ui->label_activityId->setText(QString::number(activityId));
}


void ViewBP::on_pushButton_displayBP_clicked()
{
    ui->show_BP->setRowCount(50); //this is QTableWidget

    int row =0;
    QTableWidgetItem *tmpItem;
    QSqlQuery query;

    query.prepare("SELECT bonusPenaltyID, bonusPenaltyTypeID, hour_time, amount FROM dbo.BonusPenalty WHERE activityID = :activityId");
    query.bindValue(":activityId",ui->label_activityId->text());
    query.exec();

    while(query.next())
    {
        QSqlQuery querytype;
        querytype.prepare("SELECT type FROM dbo.BonusPenaltyType WHERE bonusPenaltyTypeID = :bonusPenaltyTypeID");// choose the attribute you want to display from database
        querytype.bindValue(":bonusPenaltyTypeID",query.value(1));
        querytype.exec();

            while(querytype.next())
            {
                int col = 0;
                tmpItem= new QTableWidgetItem(tr("%1").arg(querytype.value(0).toString()));
                ui->show_BP->setItem(row, col++, tmpItem);


                tmpItem= new QTableWidgetItem(tr("%1").arg(query.value(0).toString()));
                ui->show_BP->setItem(row, col++, tmpItem);


                tmpItem= new QTableWidgetItem(tr("%1").arg(query.value(1).toString()));
                ui->show_BP->setItem(row, col++, tmpItem);


                tmpItem= new QTableWidgetItem(tr("%1").arg(query.value(2).toString()));
                ui->show_BP->setItem(row, col++, tmpItem);


                tmpItem= new QTableWidgetItem(tr("%1").arg(query.value(3).toString()));
                ui->show_BP->setItem(row, col++, tmpItem);
                row++;
            }
     }


}

void ViewBP::on_pushButton_create_clicked()
{
    createBonusPenalty *newDia = new createBonusPenalty();
    int activityId = ui->label_activityId->text().toInt();
    newDia->setData(activityId);
    newDia->exec();
    this->show();
    delete newDia;


    ui->show_BP->setRowCount(50); //this is QTableWidget

    int row =0;
    QTableWidgetItem *tmpItem;
    QSqlQuery query;

    query.prepare("SELECT bonusPenaltyID, bonusPenaltyTypeID, hour_time, amount FROM dbo.BonusPenalty WHERE activityID = :activityId");
    query.bindValue(":activityId",ui->label_activityId->text());
    query.exec();

    while(query.next())
    {
        QSqlQuery querytype;
        querytype.prepare("SELECT type FROM dbo.BonusPenaltyType WHERE bonusPenaltyTypeID = :bonusPenaltyTypeID");// choose the attribute you want to display from database
        querytype.bindValue(":bonusPenaltyTypeID",query.value(1));
        querytype.exec();

            while(querytype.next())
            {
                int col = 0;
                tmpItem= new QTableWidgetItem(tr("%1").arg(querytype.value(0).toString()));
                ui->show_BP->setItem(row, col++, tmpItem);


                tmpItem= new QTableWidgetItem(tr("%1").arg(query.value(0).toString()));
                ui->show_BP->setItem(row, col++, tmpItem);


                tmpItem= new QTableWidgetItem(tr("%1").arg(query.value(1).toString()));
                ui->show_BP->setItem(row, col++, tmpItem);


                tmpItem= new QTableWidgetItem(tr("%1").arg(query.value(2).toString()));
                ui->show_BP->setItem(row, col++, tmpItem);


                tmpItem= new QTableWidgetItem(tr("%1").arg(query.value(3).toString()));
                ui->show_BP->setItem(row, col++, tmpItem);
                row++;
            }
     }
}

void ViewBP::on_pushButton_Delete_clicked()
{
    QMessageBox msgbox;
    int rowcurrentact = ui->show_BP->currentRow();
    if (ui->show_BP->item(rowcurrentact,2)== NULL)//show error if nothing is selected from the show activity table
    {
        msgbox.setText("Please select a bonus/penalty!");
        msgbox.exec();
    }

    else if (ui->show_BP->item(rowcurrentact,2)->text()!="")
    {
        QString bonusPenaltyTypeID = ui->show_BP->item(rowcurrentact,2)->text();

        QSqlQuery queryBonusPenaltyType, queryBonusPenalty;
        queryBonusPenaltyType.prepare("DELETE FROM BonusPenaltyType where bonusPenaltyTypeID = :bonusPenaltyTypeID");
        queryBonusPenaltyType.bindValue(":bonusPenaltyTypeID",bonusPenaltyTypeID);
        queryBonusPenaltyType.exec();


        queryBonusPenalty.prepare("DELETE FROM BonusPenalty where bonusPenaltyTypeID = :bonusPenaltyTypeID");
        queryBonusPenalty.bindValue(":bonusPenaltyTypeID",bonusPenaltyTypeID);
        queryBonusPenalty.exec();


        QMessageBox::information(this,"", "Record Deleted!");


        ui->show_BP->setRowCount(50); //this is QTableWidget
        ui->show_BP->clearContents();
        int row =0;
        QTableWidgetItem *tmpItem;
        QSqlQuery query;

        query.prepare("SELECT bonusPenaltyID, bonusPenaltyTypeID, hour_time, amount FROM dbo.BonusPenalty WHERE activityID = :activityId");
        query.bindValue(":activityId",ui->label_activityId->text());
        query.exec();

        while(query.next())
        {
           QSqlQuery querytype;
           querytype.prepare("SELECT type FROM dbo.BonusPenaltyType WHERE bonusPenaltyTypeID = :bonusPenaltyTypeID");// choose the attribute you want to display from database
           querytype.bindValue(":bonusPenaltyTypeID",query.value(1));
           querytype.exec();

           while(querytype.next())
              {
                  int col = 0;
                  tmpItem= new QTableWidgetItem(tr("%1").arg(querytype.value(0).toString()));
                  ui->show_BP->setItem(row, col++, tmpItem);


                  tmpItem= new QTableWidgetItem(tr("%1").arg(query.value(0).toString()));
                  ui->show_BP->setItem(row, col++, tmpItem);


                  tmpItem= new QTableWidgetItem(tr("%1").arg(query.value(1).toString()));
                  ui->show_BP->setItem(row, col++, tmpItem);


                  tmpItem= new QTableWidgetItem(tr("%1").arg(query.value(2).toString()));
                  ui->show_BP->setItem(row, col++, tmpItem);


                  tmpItem= new QTableWidgetItem(tr("%1").arg(query.value(3).toString()));
                  ui->show_BP->setItem(row, col++, tmpItem);
                  row++;
               }
         }

   }
    else
    {
       QMessageBox msgbox;
       msgbox.setText("Please Select Activity to be Deleted!");
       msgbox.exec();
    }

}

void ViewBP::on_pushButton_Modify_clicked()
{
    QMessageBox msgbox;
    int rowcurrent = ui->show_BP->currentRow();
    if (ui->show_BP->item(rowcurrent,2)== NULL)//show error if nothing is selected from the show activity table
    {
        msgbox.setText("Please select a Bonus/Penalty!");
        msgbox.exec();
    }


    else if (ui->show_BP->item(rowcurrent,2)->text()!="")
    {
        ModifyBP *newDia = new ModifyBP();
        QString bonusPenaltyTypeID = ui->show_BP->item(rowcurrent,2)->text();
        newDia->displayData(bonusPenaltyTypeID);
        newDia->exec();
        this->show();
        delete newDia;

        ui->show_BP->setRowCount(50); //this is QTableWidget
        ui->show_BP->clearContents();
        int row =0;
        QTableWidgetItem *tmpItem;
        QSqlQuery query;

        query.prepare("SELECT bonusPenaltyID, bonusPenaltyTypeID, hour_time, amount FROM dbo.BonusPenalty WHERE activityID = :activityId");
        query.bindValue(":activityId",ui->label_activityId->text());
        query.exec();

        while(query.next())
        {
           QSqlQuery querytype;
           querytype.prepare("SELECT type FROM dbo.BonusPenaltyType WHERE bonusPenaltyTypeID = :bonusPenaltyTypeID");// choose the attribute you want to display from database
           querytype.bindValue(":bonusPenaltyTypeID",query.value(1));
           querytype.exec();

           while(querytype.next())
              {
                  int col = 0;
                  tmpItem= new QTableWidgetItem(tr("%1").arg(querytype.value(0).toString()));
                  ui->show_BP->setItem(row, col++, tmpItem);


                  tmpItem= new QTableWidgetItem(tr("%1").arg(query.value(0).toString()));
                  ui->show_BP->setItem(row, col++, tmpItem);


                  tmpItem= new QTableWidgetItem(tr("%1").arg(query.value(1).toString()));
                  ui->show_BP->setItem(row, col++, tmpItem);


                  tmpItem= new QTableWidgetItem(tr("%1").arg(query.value(2).toString()));
                  ui->show_BP->setItem(row, col++, tmpItem);


                  tmpItem= new QTableWidgetItem(tr("%1").arg(query.value(3).toString()));
                  ui->show_BP->setItem(row, col++, tmpItem);
                  row++;
               }
         }

    }
    else
    {
        QMessageBox msgbox;
        msgbox.setText("Please Select a Bonus/Penalty to be Modified!");
        msgbox.exec();
    }

}




