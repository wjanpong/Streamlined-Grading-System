#ifndef VIEW_COURSE_H
#define VIEW_COURSE_H

#include <QDialog>
#include <QDialog>
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
#include <QMessageLogger>
#include <sstream>
#include <time.h>
#include <QFileDialog>
#include <QDebug>
#include <QVector>
#include <QTextStream>
#include <QFile.h>
#include <QDateTime>
namespace Ui {
class view_course;
}

class view_course : public QDialog
{
    Q_OBJECT
    QString course_ID_String;
public:
    explicit view_course(QWidget *parent = 0);
    ~view_course();
private slots:
    void on_pushButton_LoadCourse_clicked();

    void on_pushButton_currentInfo_clicked();
private:
    Ui::view_course *ui;
};

#endif // VIEW_COURSE_H
