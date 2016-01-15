#ifndef MODIFY_COURSES_H
#define MODIFY_COURSES_H

#include <QDialog>
#include <QList>
#include <QString>
#include <QWidget>
#include <QDebug>
#include <QTableWidgetItem>
#include <QListWidgetItem>
#include <QStringList>
#include <string>
#include <stdlib.h>
#include <QMessageBox>
#include <sstream>
#include <time.h>
#include <QFileDialog>
#include <QDebug>
#include <QVector>
#include <QTextStream>
#include <QFile.h>
#include <QDateTime>
#include <QFileDialog>
#include <QStringListModel>
namespace Ui {
class modify_courses;
}

class modify_courses : public QDialog
{
    Q_OBJECT
    QString course_ID_String;

public:
    explicit modify_courses(QWidget *parent = 0);
    ~modify_courses();

private slots:
    void on_pushButton_LoadCourse_clicked();

    void on_pushButton_currentInfo_clicked();

    void on_pushButton_Add_modify_studentList_clicked();

    void on_pushButton_Modify_clicked();

    void on_pushButton_load_clicked();

    void on_pushButton_Add_tas_clicked();
    void on_pushButton_A_M_studentList_clicked();

private:
    Ui::modify_courses *ui;
};

#endif // MODIFY_COURSES_H
