#include "createbonuspenalty.h"
#include "ui_createbonuspenalty.h"
#include "createactivity.h"
#include "instructor.h"
#include <QtSql>
#include <QMessageBox>

createBonusPenalty::createBonusPenalty(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::createBonusPenalty)
{
    ui->setupUi(this);
}

createBonusPenalty::~createBonusPenalty()
{
    delete ui;
}

void createBonusPenalty::setData(int activityId)
{
    ui->label_activityId->setText(QString::number(activityId));
}

void createBonusPenalty::on_pushButton_createBonusPenalty_clicked()
{
    double numerator, denomerator;
    bool exist = false;
    QMessageBox msgbox;

        QSqlQuery queryBP, queryGetBP;
        QString dayFraction = ui->intHour->text();
        double hours;
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

            queryGetBP.exec("select BonusPenaltyTypeID from dbo.BonusPenalty");


            queryBP.prepare("INSERT INTO BonusPenalty(bonusPenaltyID, activityID, bonusPenaltyTypeID, hour_time, amount)"
                            "VALUES (:BonusPenaltyID, :ActivityID, :BonusPenaltyTypeID, :Hours, :Amount)");
            queryBP.bindValue(":BonusPenaltyID", ui->intBonusPenaltyId->text().toInt());
            queryBP.bindValue(":ActivityID", ui->label_activityId->text().toInt());
            queryBP.bindValue(":BonusPenaltyTypeID", ui->intBonusPenaltyTypeId->text().toInt());
            queryBP.bindValue(":Hours", hours);
            queryBP.bindValue(":Amount", ui->intAmount->text().toDouble());

            while (queryGetBP.next())
            {

                if (ui->intBonusPenaltyTypeId->text() == queryGetBP.value(0))
                {
                    msgbox.setText("This BonusPenaltyTypeID Already Exists");
                    msgbox.exec();
                    exist=true;
                    break;
                }
            }
            if ((!exist))
            {
                if((ui->intBonusPenaltyTypeId->text()!="")&&(ui->intBonusPenaltyId->text()!=""))
                {
                    if (queryBP.exec())
                        {
                             msgbox.information(this,"" ,"New Record Added!");
                        }
                        else
                        {
                           QMessageBox::information(this,"",queryBP.lastError().text());
                        }

                }
                else
                {
                    msgbox.setText("Please Fill the Important Fields");
                    msgbox.exec();
                }
            }
}



void createBonusPenalty::on_pushButton_createBPT_clicked()
{
    QSqlQuery queryBPType;
    QMessageBox msgbox;
    queryBPType.prepare("INSERT INTO BonusPenaltyType(bonusPenaltyTypeID, type)"
                  "VALUES (:BonusPenaltyTypeID, :Type)");
    queryBPType.bindValue(":BonusPenaltyTypeID", ui->intBonusPenaltyTypeId->text().toInt());
    queryBPType.bindValue(":Type", ui->txtBonusPenaltyType->text());


    if((ui->txtBonusPenaltyType->text()!="") && (ui->intBonusPenaltyTypeId->text()!=""))
        {
            if (queryBPType.exec())
                {
                     msgbox.information(this,"" ,"New Record Added!");
                }
                else
                {
                   QMessageBox::information(this,"",queryBPType.lastError().text());
                }
        }
        else
        {
            msgbox.setText("Please Fill the Important Fields");
            msgbox.exec();
        }

}
