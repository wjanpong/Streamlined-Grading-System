#include "rolesel.h"
#include "ui_rolesel.h"
#include "login.h"
#include <QObject>
#include <QDebug>
#include "systemadminview.h"
#include "astadmin.h"
#include "instructor.h"
#include "ta.h"
#include "administrator.h"

void populateroles();

roleSel::roleSel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::roleSel)
{
    ui->setupUi(this);
    //connect(ui->pushButton_confirm,SIGNAL(released()),this,SLOT(on_pushButton_confirm_clicked()));

}

roleSel::~roleSel()
{
    delete ui;
}

void roleSel::receiveData(QString data)
{
    //QString value = data;
    employeeID = data;
    //ui->label_receiveData->setText(employeeID);
    qDebug() << "The received value is: "+employeeID;
}


void roleSel::on_pushButton_Logout_clicked()
{
    Login *login = new Login();
    this->close();
    login->show();
    login->activateWindow();
    login->raise();
}

void roleSel::on_pushButton_loadRoles_clicked()
{
    QSqlQuery query;
    QString roleName;
    QTableWidgetItem *tmpItem;
    //QString employID = ui->label_receiveData->text();
    query.prepare("SELECT isAssistAdmin, isSysAdmin, isAdministrator, isTA, isInstructor FROM Account WHERE employeeID = '"+employeeID+"'");
    if(query.exec())
    {
        int count = 0;
        int row = 0;
        while(query.next())
        {
            //if the account has the role enabled
            if ((count<6) & (query.value(count).toString() == "1"))
            {
                roleName = "Assistant Admin";
                ui->tableWidget_roles->insertRow(row);
                tmpItem = new QTableWidgetItem(tr("%1").arg(roleName));
                ui->tableWidget_roles->setItem(row++,0,tmpItem);
                qDebug()<<"Row count is: "<<row;
                qDebug()<<"The item being inserted into table is: "<<tmpItem;
            }
            count++;

            if ((count<6) & (query.value(count).toString() == "1"))
            {
                roleName = "System Admin";
                ui->tableWidget_roles->insertRow(row);
                tmpItem = new QTableWidgetItem(tr("%1").arg(roleName));
                ui->tableWidget_roles->setItem(row++,0,tmpItem);
                qDebug()<<"Row count is: "<<row;
                qDebug()<<"The item being inserted into table is: "<<tmpItem;
            }
            count++;

            if ((count<6) & (query.value(count).toString() == "1"))
            {
                roleName = "Administrator";
                ui->tableWidget_roles->insertRow(row);
                tmpItem = new QTableWidgetItem(tr("%1").arg(roleName));
                ui->tableWidget_roles->setItem(row++,0,tmpItem);
                qDebug()<<"Row count is: "<<row;
                qDebug()<<"The item being inserted into table is: "<<tmpItem;
            }
            count++;

            if ((count<6) & (query.value(count).toString() == "1"))
            {
                roleName = "Teacher Assistant";
                ui->tableWidget_roles->insertRow(row);
                tmpItem = new QTableWidgetItem(tr("%1").arg(roleName));
                ui->tableWidget_roles->setItem(row++,0,tmpItem);
                qDebug()<<"Row count is: "<<row;
                qDebug()<<"The item being inserted into table is: "<<tmpItem;
            }
            count++;

            if ((count<6) & (query.value(count).toString() == "1"))
            {
                roleName = "Instructor";
                ui->tableWidget_roles->insertRow(row);
                tmpItem = new QTableWidgetItem(tr("%1").arg(roleName));
                ui->tableWidget_roles->setItem(row++,0,tmpItem);
                qDebug()<<"Row count is: "<<row;
                qDebug()<<"The item being inserted into table is: "<<tmpItem;
            }
            count++;
        }
    }
}

void roleSel::on_tableWidget_roles_itemClicked(QTableWidgetItem *item)
{
    QString selected = ui->tableWidget_roles->currentItem()->text();
    QString selected2 = item->text();
    qDebug()<<"Item selected is: "<<selected2;
    qDebug()<<"Selected item is: "<<selected;

    if (selected == "Assistant Admin")
    {
        AstAdmin *astAdminDash = new AstAdmin();
        //QString employeeID = ui->label_receiveData->text();
        QObject::connect(this, SIGNAL(sendData(QString)), &*astAdminDash, SLOT(receiveData(QString)));
        emit sendData(employeeID);
        this->close();
        astAdminDash->show();
        astAdminDash->activateWindow();
        astAdminDash->raise();
    }

    if (selected == "System Admin")
    {
        systemadminview *SysAdminDash = new systemadminview();
        QObject::connect(this, SIGNAL(sendData(QString)), &*SysAdminDash, SLOT(receiveData(QString)));
        emit sendData(employeeID);
        this->close();
        SysAdminDash->show();
        SysAdminDash->activateWindow();
        SysAdminDash->raise();
    }

    if (selected == "Administrator")
    {
        Administrator *AdminDash = new Administrator();
        //QString employID = ui->label_receiveData->text();
        QObject::connect(this, SIGNAL(sendData(QString)), &*AdminDash, SLOT(receiveData(QString)));
        qDebug()<<"Sending data: "<<employeeID;
        emit sendData(employeeID);
        this->close();
        AdminDash->show();
        AdminDash->activateWindow();
        AdminDash->raise();
    }

    if (selected == "Teacher Assistant")
    {
        TA *taDash = new TA();
        //QString employID = ui->label_receiveData->text();
        QObject::connect(this, SIGNAL(sendData(QString)), &*taDash, SLOT(receiveData(QString)));
        qDebug()<<"Sending data: "<<employeeID;
        emit sendData(employeeID);
        this->close();
        taDash->show();
        taDash->activateWindow();
        taDash->raise();
    }

    if(selected == "Instructor")
    {
        Instructor *instructDash = new Instructor();
       // QString employID = ui->label_receiveData->text();
        QObject::connect(this, SIGNAL(sendData(QString)), &*instructDash, SLOT(receiveData(QString)));
        qDebug()<<"Sending data: "<<employeeID;
        emit sendData(employeeID);
        this->close();
        instructDash->show();
        instructDash->activateWindow();
        instructDash->raise();
    }
}

