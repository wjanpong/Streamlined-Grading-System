#ifndef MARKINGDASH_H
#define MARKINGDASH_H

#include <QDialog>
#include <QTableWidgetItem>

namespace Ui {
class markingDash;
}

class markingDash : public QDialog
{
    Q_OBJECT

public:
    explicit markingDash(QWidget *parent = 0);
    ~markingDash();
    void setData(const QString& activityName ,const QString& currentRole);

private slots:
    void on_pushButton_goSubmissionPath_clicked();

    void on_pushButton_Solution_clicked();

    void on_pushButton_SaveFile_clicked();

    void on_tableWidget_students_itemPressed(QTableWidgetItem *item);

    void on_tableWidget_studentGrade_itemPressed(QTableWidgetItem *item);

    void on_pushButton_updateGrade_clicked();

    void on_Rubric_table_itemPressed(QTableWidgetItem *item);

signals:
    void sendData(QString data);

private:
    Ui::markingDash *ui;
};

#endif // MARKINGDASH_H
