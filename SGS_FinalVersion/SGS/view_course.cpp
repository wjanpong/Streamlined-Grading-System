#include "view_course.h"
#include "ui_view_course.h"
#include <QtSql>
#include "astadmin.h"

view_course::view_course(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::view_course)
{
    ui->setupUi(this);
    connect(ui->pushButton_LoadCourse,SIGNAL(released()),this,SLOT(on_pushButton_LoadCourse_clicked()));
    connect(ui->pushButton_currentInfo,SIGNAL(released()),this,SLOT(on_pushButton_currentInfo_clicked()));

}

view_course::~view_course()
{
    delete ui;
}

void view_course::on_pushButton_LoadCourse_clicked()
{


                QSqlQuery query;

                query.exec("select courseID from dbo.Course");// choose the attribute you want to display form database

                ui->Courses->setRowCount(50); //this is QTableWidget
                //ui->Ta_list->setColumnCount( 2); //<- depends how many columns has your query

                int row =0;
                QTableWidgetItem *tmpItem;

                while (query.next()) { //this next() is important
                                    int col = 0;
                                    tmpItem= new QTableWidgetItem(tr("%1").arg(query.value(0).toString()));
                                    ui->Courses->setItem(row++, col, tmpItem);
                                    }

                QSqlQuery query1;
                row=0;
                query1.exec("select courseName from dbo.Course");// choose the attribute you want to display form database
                while (query1.next()) { //this next() is important
                                    int col = 1;
                                    tmpItem= new QTableWidgetItem(tr("%1").arg(query1.value(0).toString()));
                                    ui->Courses->setItem(row++, col, tmpItem);
                                    }



}

void view_course::on_pushButton_currentInfo_clicked()
{
        ui->Ta_list->clearContents();
        ui->Student_List->clearContents();
        course_ID_String=(ui->Courses->currentItem())->text();
        QSqlQuery queryCourse,queryinsName;
        queryCourse.prepare("SELECT courseName, instructorEmployeeID, startDate, endDate FROM Course WHERE courseID = :CourseID");
        queryCourse.bindValue(":CourseID" ,course_ID_String );
        queryCourse.exec();

        if(queryCourse.next())
        {
            QString employeeId = queryCourse.value(1).toString();
            ui->Text_courseName->setText(queryCourse.value(0).toString());
            ui->Text_instructorEmployeeID->setText(employeeId);
            ui->date_startDate->setDateTime(queryCourse.value(2).toDateTime());
            ui->date_endDate->setDateTime(queryCourse.value(3).toDateTime());
//

            queryinsName.prepare("SELECT firstName FROM Account WHERE employeeID = :employeeID");
            queryinsName.bindValue(":employeeID",  ui->Text_instructorEmployeeID->text());
            queryinsName.exec();
            queryinsName.next();
            ui->Text_instructorName->setText(queryinsName.value(0).toString());

        }
        else
        {
            QMessageBox::information(this, "", "Cannot Retrieve Data from Course Table");

        }

    queryCourse.finish();
    QSqlQuery query_taID,query_studentList;

        query_taID.prepare("SELECT taID, taName from TA where courseID = :courseID ");// choose the attribute you want to display form database
        query_taID.bindValue(":courseID", course_ID_String);
        query_taID.exec();

        ui->Ta_list->setRowCount(20); //this is QTableWidget


        int row =0;
        QTableWidgetItem *tmpItem_ID,*tmpItem_Name;

        while (query_taID.next()) { //this next() is important

                            tmpItem_ID= new QTableWidgetItem(tr("%1").arg(query_taID.value(0).toString()));
                            ui->Ta_list->setItem(row, 1, tmpItem_ID);
                            tmpItem_Name= new QTableWidgetItem(tr("%1").arg(query_taID.value(1).toString()));
                            ui->Ta_list->setItem(row, 0, tmpItem_Name);
                            row++;
                            }

        query_studentList.prepare("SELECT first_name, middle_name, last_name, studentID, registrationID   from Student where courseID = :courseID ");// choose the attribute you want to display form database
        query_studentList.bindValue(":courseID", course_ID_String);
        query_studentList.exec();

        ui->Student_List->setRowCount(100); //this is QTableWidget


        int row_student =0;
        QTableWidgetItem *tmpItem0,*tmpItem1,*tmpItem2,*tmpItem3,*tmpItem4;

        while (query_studentList.next()) { //this next() is important
                           // int col = 1;
                            tmpItem0= new QTableWidgetItem(tr("%1").arg(query_studentList.value(0).toString()));
                            ui->Student_List->setItem(row_student, 0, tmpItem0);
                            tmpItem1= new QTableWidgetItem(tr("%1").arg(query_studentList.value(1).toString()));
                            ui->Student_List->setItem(row_student, 1, tmpItem1);
                            tmpItem2= new QTableWidgetItem(tr("%1").arg(query_studentList.value(2).toString()));
                            ui->Student_List->setItem(row_student, 2, tmpItem2);
                            tmpItem3= new QTableWidgetItem(tr("%1").arg(query_studentList.value(3).toString()));
                            ui->Student_List->setItem(row_student, 3, tmpItem3);
                            tmpItem4= new QTableWidgetItem(tr("%1").arg(query_studentList.value(4).toString()));
                            ui->Student_List->setItem(row_student, 4, tmpItem4);
                            row_student++;
                            }

}
