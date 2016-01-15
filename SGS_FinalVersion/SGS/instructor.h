#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include <QDialog>
#include <QTableWidgetItem>

namespace Ui {
class Instructor;
}

class Instructor : public QDialog
{
    Q_OBJECT

public:
    explicit Instructor(QWidget *parent = 0);
    ~Instructor();

private slots:
    void on_pushButton_logout_clicked();

    void on_pushButton_mark_clicked();

    void receiveData(QString data);

    void on_pushButtonDisplay_clicked();

    void on_show_course_itemClicked(QTableWidgetItem *item);

//    void on_pushButton_CreateBonusPenaltyWin_clicked();

    void on_pushButton_CreateRubricWin_clicked();

    void on_pushButton_ModifyWin_clicked();

    void on_pushButton_DeleteActivity_clicked();

//    void on_pushButton_ProgrammingFile_clicked();

    void on_pushButton_CreateActivityWin_clicked();

    void on_pushButton_ChangePass_clicked();



    void on_pushButton_modifyRubric_clicked();

    void on_pushButton_viewBP_clicked();

    void on_pushButton_viewProgAct_clicked();

signals:
    void sendData(QString data);

    void sendData2(QString data);

    void sendData3(QString data, QString data2, QString data3);
private:
    Ui::Instructor *ui;
    QString employeeID;
    QString role;
};

#endif // INSTRUCTOR_H
