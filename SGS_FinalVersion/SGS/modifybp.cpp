#include "modifybp.h"
#include "ui_modifybp.h"
#include <Qstring>
#include <QMessageBox>
#include <QtSql>
#include <QMessageLogger>
#include <QSqlQuery>

ModifyBP::ModifyBP(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModifyBP)
{
    ui->setupUi(this);
}

ModifyBP::~ModifyBP()
{
    delete ui;
}


void ModifyBP::displayData(QString bonusPenaltyTypeID)
{
    ui->label_BPTypeID ->setText(bonusPenaltyTypeID);
    QSqlQuery query,querytype;
    query.prepare("SELECT bonusPenaltyID, hour_time, amount FROM dbo.BonusPenalty WHERE bonusPenaltyTypeID = :bonusPenaltyTypeID");
    query.bindValue(":bonusPenaltyTypeID",bonusPenaltyTypeID );
    querytype.prepare("SELECT type FROM dbo.BonusPenaltyType WHERE bonusPenaltyTypeID = :bonusPenaltyTypeID");
    querytype.bindValue(":bonusPenaltyTypeID",bonusPenaltyTypeID );

    if(query.exec() && querytype.exec())
    {
        if(query.next() && querytype.next())
        {
            double hours = query.value(1).toString().toDouble();
            ui->txtBonusPenaltyType->setText(querytype.value(0).toString());
            ui->intBonusPenaltyId->setText(query.value(0).toString());
            ui->intHour->setText(QString::number(hours/24));
            ui->intAmount->setText(query.value(2).toString());

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


void ModifyBP::on_pushButton_updateBonusPenalty_clicked()
{
    QMessageBox msgbox;
    QString bonusPenaltyTypeID = ui->label_BPTypeID->text();
    double hours,numerator, denomerator;
    QString dayFraction = ui->intHour->text();

    if (dayFraction.contains('\/'))
    {
       int slashPos = dayFraction.indexOf('\/');
       numerator=(dayFraction.left(slashPos)).toFloat();
       denomerator=(dayFraction.right(slashPos)).toFloat();
       hours = (numerator/denomerator)*24.0;
    }
    else
    {
        hours=dayFraction.toDouble()*24.0;
    }

    QSqlQuery query, querytype;
        query.prepare("UPDATE BonusPenalty SET bonusPenaltyID = :bonusPenaltyID, hour_time = :hour_time, amount = :amount  WHERE bonusPenaltyTypeID = :bonusPenaltyTypeID");
        query.bindValue(":bonusPenaltyTypeID",bonusPenaltyTypeID );
        querytype.prepare("UPDATE BonusPenaltyType SET type = :type WHERE bonusPenaltyTypeID = :bonusPenaltyTypeID");
        querytype.bindValue(":bonusPenaltyTypeID",bonusPenaltyTypeID );

        query.bindValue(":bonusPenaltyID", ui->intBonusPenaltyId->text());
        query.bindValue(":hour_time", hours);
        query.bindValue(":amount", ui->intAmount->text());

        querytype.bindValue(":type", ui->txtBonusPenaltyType->text());

        if((ui->intBonusPenaltyId->text()!="") &&(ui->intHour->text()!="") && (ui->intAmount->text()!="") && (ui->txtBonusPenaltyType->text()!= "" ))
        {
            if(query.exec() && querytype.exec())
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
