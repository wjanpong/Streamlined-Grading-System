#ifndef CREATE_COURSE_H
#define CREATE_COURSE_H

#include <QDialog>
#include <QDialog>
#include <QList>
#include <QString>
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
namespace Ui {
class create_course;
}

class create_course : public QDialog
{
    Q_OBJECT
    QStringList selected_Items;
    int Course_ID;
    QString course_ID_String;

public:
    explicit create_course(QWidget *parent = 0);
    ~create_course();

private slots:
    void create();

    void load();

private:
    Ui::create_course *ui;
};

#endif // CREATE_COURSE_H
