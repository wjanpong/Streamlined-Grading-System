#include "marker.h"
#include "ui_marker.h"
#include "login.h"
#include "ta.h"
#include "instructor.h"
#include <QtSql>
#include <QSqlQuery>
#include <QDebug>
#include <QMessageBox>
#include <QDialog>
#include "markingdash.h"
#include "administrator.h"
#include "gradingprogammingasm.h"

marker::marker(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::marker)
{
    ui->setupUi(this);

}

marker::~marker()
{
    delete ui;
}

void marker::on_pushButton_logout_clicked()
{
    Login *login = new Login();
    this->close();
    login->show();
}

void marker::receiveData(QString data)
{
   // QString value = data;
    role = data;
    ui->label_receiveData->setText(role);
}

void marker::receiveData2(QString data)
{
    //QString value = data;
    employeeID = data;
    ui->label_receiveData2->setText(employeeID);


    //Auto load the course list
    if(role =="Teacher Assistant")
    {
        QSqlQuery query_TA;
        query_TA.prepare("SELECT courseID FROM TA WHERE taID = '"+employeeID+"'");

        if (query_TA.exec("SELECT courseID FROM TA WHERE taID = '"+employeeID+"'"))
        {
            while (query_TA.next())
            {
                QString name = query_TA.value(0).toString();
                ui->Course_comboBox->addItem(name);
            }
        }
    }
    if(role =="Instructor")
    {
        QSqlQuery query_inst;
        query_inst.prepare("SELECT courseID FROM Course WHERE instructorEmployeeID = '"+employeeID+"'");
        if (query_inst.exec("SELECT courseID FROM Course WHERE instructorEmployeeID = '"+employeeID+"'"))
        {
            while (query_inst.next())
            {
               QString name = query_inst.value(0).toString();
               ui->Course_comboBox->addItem(name);
            }
        }
    }
    if(role =="Administrator")
    {
        QSqlQuery query_admin;
        query_admin.prepare("SELECT courseID FROM Course");

        if (query_admin.exec("SELECT courseID FROM Course"))
        {
            while (query_admin.next())
            {
                QString name = query_admin.value(0).toString();
                ui->Course_comboBox->addItem(name);
            }
        }
    }

}

void marker::on_pushButton_back_clicked()
{
   // QString role = ui->label_receiveData->text();
    //QString employID = ui->label_receiveData2->text();
    qDebug() << "The role was: "+role;

    if (role == "Instructor")
    {
        Instructor *instructDash = new Instructor();
        QObject::connect(this, SIGNAL(sendData(QString)), &*instructDash, SLOT(receiveData(QString)));
        emit sendData(employeeID);
        this->close();
        instructDash->show();
    }
    if (role == "Administrator")
    {
        Administrator *adminDash = new Administrator();
        QObject::connect(this, SIGNAL(sendData(QString)), &*adminDash, SLOT(receiveData(QString)));
        emit sendData(employeeID);
        this->close();
        adminDash->show();
    }
    if (role == "Teacher Assistant")
    {
        TA *TADash = new TA();
        QObject::connect(this, SIGNAL(sendData(QString)), &*TADash, SLOT(receiveData(QString)));
        emit sendData(employeeID);
        this->close();
        TADash->show();
    }
}


void marker::on_pushButton_Generate_clicked()
{
    // clear the activity list everytime when button clicked
    ui->tableWidget_activites->clear();

    // check is there a course in Course database table
    QString courseID = ui->Course_comboBox->currentText();
    QSqlQuery query;
    query.prepare("SELECT courseID FROM Course WHERE courseID = '"+courseID+"' ");

    if (query.exec("SELECT courseID FROM Course WHERE courseID = '"+courseID+"' "))
    {
        int count = 0;
        while (query.next())
        {
            count++;
        }
        if (count ==1)
        {
            ui->label_staus->setText("Correct CourseID");
            qDebug()<< "The employeeID is: "+courseID;
        }
        if (count<1)
            ui->label_staus->setText("Incorrect CourseID");
    }

    // Find the activity from the course and put them in the table
    QSqlQuery query2;
    int row = 0;
    query2.prepare("SELECT activityName, activityType FROM Activity WHERE courseID = '"+courseID+"' ");
    if (query2.exec("SELECT activityName, activityType FROM Activity WHERE courseID = '"+courseID+"' "))
    {
        while (ui->tableWidget_activites->rowCount() >0)    //clear the table content every search
        {
            ui->tableWidget_activites->removeRow(0);
        }
        while (query2.next())
        {
           qDebug() << "actName is: "+ query2.value(0).toString();
           ui->tableWidget_activites->insertRow(row);
           ui->tableWidget_activites->setItem(row,0, new QTableWidgetItem(query2.value(0).toString()));
           ui->tableWidget_activites->setItem(row,1, new QTableWidgetItem(query2.value(1).toString()));
           row++;
        }
    }
}

void marker::on_tableWidget_activites_itemPressed(QTableWidgetItem *item)
{
    if((ui->tableWidget_activites->item(ui->tableWidget_activites->currentRow(),1)->text()=="Essay") or (ui->tableWidget_activites->item(ui->tableWidget_activites->currentRow(),1)->text()=="Problem Set"))
    {
        QString activity_Name = ui->tableWidget_activites->item(ui->tableWidget_activites->currentRow(),0)->text();
        QString cur_role = ui->label_receiveData->text();
        markingDash newDis;
        newDis.setData(activity_Name, cur_role);
        newDis.exec();
        newDis.show();
        newDis.activateWindow();
        newDis.raise();
    }

    if(ui->tableWidget_activites->item(ui->tableWidget_activites->currentRow(),1)->text()=="Programming Assignment")
    {
        QString activity_Name = ui->tableWidget_activites->item(ui->tableWidget_activites->currentRow(),0)->text();
        QString cur_role = ui->label_receiveData->text();
        GradingProgammingASM newDis;
        newDis.setData(activity_Name, cur_role);
        newDis.exec();
        newDis.show();
        newDis.activateWindow();
        newDis.raise();
    }

}
