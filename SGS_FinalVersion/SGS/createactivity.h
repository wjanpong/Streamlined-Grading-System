#ifndef CREATEACTIVITY_H
#define CREATEACTIVITY_H

#include <QDialog>

namespace Ui {
class createActivity;
}

class createActivity : public QDialog
{
    Q_OBJECT

public:
    explicit createActivity(QWidget *parent = 0);
    ~createActivity();
    void setData(QString courseId);
    void displayData(QString activityId);

private slots:
    //void on_pushButton_createRubricWin_clicked();
    //void createActivity();

   // void on_pushButton_createBonusPenaltyWin_clicked();

    void on_pushButton_createActivity_clicked();

    void on_pushButton_SearchSub_clicked();

    void on_pushButton_SearchSol_clicked();

private:
    Ui::createActivity *ui;
    QString CourseID;
    QString ActivityID;
};

#endif // CREATEACTIVITY_H
