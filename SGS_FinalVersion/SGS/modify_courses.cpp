#include "modify_courses.h"
#include "ui_modify_courses.h"
#include <QtSql>
#include "astadmin.h"

modify_courses::modify_courses(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modify_courses)
{
    ui->setupUi(this);
    connect(ui->pushButton_LoadCourse,SIGNAL(released()),this,SLOT(on_pushButton_LoadCourse_clicked()));
    connect(ui->pushButton_currentInfo,SIGNAL(released()),this,SLOT(on_pushButton_currentInfo_clicked()));
    connect(ui->pushButton_Add_modify_studentList,SIGNAL(released()),this,SLOT(on_pushButton_Add_modify_studentList_clicked()));
    connect(ui->pushButton_Modify,SIGNAL(released()),this,SLOT(on_pushButton_Modify_clicked()));
    connect(ui->pushButton_load,SIGNAL(released()),this,SLOT(on_pushButton_load_clicked()));
}

modify_courses::~modify_courses()
{
    delete ui;
}

void modify_courses::on_pushButton_LoadCourse_clicked()
{
    QMessageBox msgbox;

            //tablewidget
                QSqlQuery query;

                query.exec("select courseID from dbo.Course");// choose the attribute you want to display form database

                ui->Courses->setRowCount(20); //this is QTableWidget
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

void modify_courses::on_pushButton_currentInfo_clicked()
{

    \
                ui->Ta_list->clearContents();
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


                    queryinsName.prepare("SELECT firstName FROM Account WHERE employeeID = :employeeID");
                    queryinsName.bindValue(":employeeID",  ui->Text_instructorEmployeeID->text());
                    queryinsName.exec();
                    queryinsName.next();
                    ui->Text_instructorName->setText(queryinsName.value(0).toString());



                }
                else
                {
                    QMessageBox::information(this, "", "Cannot Retrive Data from Course Table");

                }


            queryCourse.finish();

            QSqlQuery query;
            // displaying current TAa in the selected course
            query.prepare("SELECT taID ,taName from TA where courseID = :courseID ");
            query.bindValue(":courseID", course_ID_String);
            query.exec();

            ui->Ta_list->setRowCount(30); //this is QTableWidget


            int row =0;
            QTableWidgetItem *tmpItem_ID,*tmpItem_Name ;

            while (query.next()) {

                                          tmpItem_ID= new QTableWidgetItem(tr("%1").arg(query.value(0).toString()));
                                          ui->Ta_list->setItem(row, 1, tmpItem_ID);
                                          tmpItem_Name= new QTableWidgetItem(tr("%1").arg(query.value(1).toString()));
                                          ui->Ta_list->setItem(row, 0, tmpItem_Name);
                                          row++;
                                          }


}


void modify_courses::on_pushButton_Add_modify_studentList_clicked()
{
    ui->Student_List->clearContents();
    QString fileName = QFileDialog::getOpenFileName(this,
          tr("Open .CSV file"), "Desktop ", tr("CSV files (*.csv)"));
  //    QString fileName = QFileDialog::ExistingFile(this, tr("Save File"),
  //                               "U:/",
  //                               tr("csv (*.csv)"));


      QFile file(fileName);
        if (!(file.open( QIODevice::ReadOnly))) {
             QMessageBox::information(this,"",file.errorString());
         }
       else{

            QString data;
            data = file.readAll();
//            QMessageBox::information(this,"",data);
            QStringList wordList;
            wordList = data.split(',');

             ui->Student_List->setRowCount(wordList.size()/4);
              int index =0;

                   QTableWidgetItem *pCell;
                   for(int i=0; i<ui->Student_List->rowCount(); i++)
                      {
                          for(int j=0; j<ui->Student_List->columnCount(); j++)
                          {
                              pCell = ui->Student_List->item(i, j);
                              if(!pCell)
                              {
                                  pCell = new QTableWidgetItem;
                                  ui->Student_List->setItem(i, j, pCell);
                              }
                              if(!wordList.at(index).isEmpty()){

                                  pCell->setText(wordList.at(index));
                                  index++;
                              }
                          }
                       }
            file.close();


            }
}


void modify_courses::on_pushButton_Modify_clicked()
{
    course_ID_String=(ui->Courses->currentItem())->text();
    QSqlQuery queryCour;
    queryCour.prepare("UPDATE Course SET courseName = :courseName, instructorEmployeeID = :instructorEmployeeID, startDate = :startDate, endDate = :endDate WHERE courseID = :CourseID");
    queryCour.bindValue(":CourseID" ,course_ID_String );



    queryCour.bindValue(":startDate",ui->date_startDate->dateTime());
    queryCour.bindValue(":endDate",ui->date_endDate->dateTime());
    queryCour.bindValue(":courseName",ui->Text_courseName->text());
    queryCour.bindValue(":instructorEmployeeID",ui->Text_instructorEmployeeID->text());
    if(queryCour.exec())
    {
          QMessageBox::information(this, ""," Information has been updated" );

    }
    else{
        QMessageBox::information(this, "", queryCour.lastError().text());
    }


}


void modify_courses::on_pushButton_load_clicked()
{

    ui->Ta_list_2->clearContents();
    QSqlQuery query;

    query.exec("select taName, taID from dbo.TA where courseID is NULL ");// choose the attribute you want to display form database

    ui->Ta_list_2->setRowCount(20); //this is QTableWidget
    //ui->Ta_list->setColumnCount( 2); //<- depends how many columns has your query

    int row =0;
    QTableWidgetItem *tmpItem_TAName,*tmpItem_TaID;

    while (query.next()) { //this next() is important

                        tmpItem_TAName= new QTableWidgetItem(tr("%1").arg(query.value(0).toString()));
                        ui->Ta_list_2->setItem(row, 0, tmpItem_TAName);
                        tmpItem_TaID= new QTableWidgetItem(tr("%1").arg(query.value(1).toString()));
                        ui->Ta_list_2->setItem(row, 1, tmpItem_TaID);
                        row++;

                        }

}


void modify_courses::on_pushButton_Add_tas_clicked()
{

        course_ID_String=(ui->Courses->currentItem())->text();

        if ((ui->Ta_list_2->selectedItems()).empty()== false)
        {
           \
            int size= (ui->Ta_list_2->selectedItems()).size();

            int index1=0;


             QSqlQuery queryTaADD, queryExtract;
             queryExtract.prepare("SELECT taName, accountID FROM dbo.TA WHERE taID= :taIDentity " );

             queryTaADD.prepare("INSERT INTO TA(taID,taName,accountID,courseID) "
                                "VALUES (:taID,:taName,:accountID,:courseID)");

            // queryExtract.prepare("SELECT taName, accountID FROM TA WHERE taID = :taIdentity ");

             queryExtract.bindValue(":courseID",course_ID_String);
             bool confirm= false;
             while (size>0) { //this next() is important
                 queryExtract.bindValue(":taIDentity",(((ui->Ta_list_2->selectedItems()).at(index1))->text()));
                 queryExtract.exec();
                 if(!queryExtract.next())

                 {
                    QMessageBox::information(this,"",queryExtract.lastError().text());

                 }


                 queryTaADD.bindValue(":taName",queryExtract.value(0).toString());
                 queryTaADD.bindValue(":accountID",queryExtract.value(1).toString());
                 queryTaADD.bindValue(":courseID",course_ID_String);
                 queryTaADD.bindValue(":taID",(((ui->Ta_list_2->selectedItems()).at(index1))->text()));

                 if(queryTaADD.exec())

                 {
                     confirm=true;
                 }
                 else
                 {
                     QMessageBox::information(this,"",queryTaADD.lastError().text());
                 }



                 index1++;

                 size--;
             }
             if(confirm)

             {
                 QMessageBox::information(this,"","tas added!");
             }


          }




}


void modify_courses::on_pushButton_A_M_studentList_clicked()
{
    course_ID_String=(ui->Courses->currentItem())->text();
       QSqlQuery queryDelete;
                  queryDelete.prepare("DELETE FROM Student WHERE courseID=:courseID");
                  queryDelete.bindValue(":courseID",course_ID_String);
                      if(queryDelete.exec())
                      {
                          QMessageBox::information(this,"","Past records deleted");
                      }
                      else
                      {
                          QMessageBox::information(this,"",queryDelete.lastError().text());
                      }

        queryDelete.finish();



               QSqlQuery queryStudentList;
               queryStudentList.prepare("INSERT INTO Student(first_name,middle_name,last_name, courseID,studentID) "
                             "VALUES (:first_name,:middle_name ,:last_name ,:courseID,:studentID)");
               int row=0;


               while((ui->Student_List->rowCount()) != row )
               {
               queryStudentList.bindValue(":courseID",course_ID_String);

               queryStudentList.bindValue(":studentID",(ui->Student_List->item(row,3))->text());
               queryStudentList.bindValue(":first_name",(ui->Student_List->item(row,0))->text());
               queryStudentList.bindValue(":middle_name",(ui->Student_List->item(row,1))->text());
               queryStudentList.bindValue(":last_name",(ui->Student_List->item(row,2))->text());
                   if(!queryStudentList.exec())

                   {
                      QMessageBox::information(this,"",queryStudentList.lastError().text());
                   }

               row++;
               }

               if(queryStudentList.exec())
               {
                   QMessageBox::information(this,"","student list updated");
               }
}
