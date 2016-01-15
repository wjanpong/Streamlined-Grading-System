#ifndef GRADINGPROGAMMINGASM_H
#define GRADINGPROGAMMINGASM_H

#include <QDialog>
#include <QTableWidgetItem>

namespace Ui {
class GradingProgammingASM;
}

class GradingProgammingASM : public QDialog
{
    Q_OBJECT

public:
    explicit GradingProgammingASM(QWidget *parent = 0);
    ~GradingProgammingASM();
    void setData(const QString& activityName ,const QString& currentRole);

private slots:
    //void on_pushButton_goSubmissionPath_clicked();

    //void on_pushButton_Solution_clicked();

    //void on_pushButton_SaveFile_clicked();

    void on_tableWidget_students_itemPressed(QTableWidgetItem *item);

    //void on_tableWidget_studentGrade_itemPressed(QTableWidgetItem *item);

    //void on_pushButton_updateGrade_clicked();

    //void on_Rubric_table_itemPressed(QTableWidgetItem *item);

    void on_Rubric_table_itemPressed(QTableWidgetItem *item);

    void on_pushButton_updateGrade_pressed();

    void on_pushButton_goSubmissionPath_pressed();

    void on_tableWidget_studentGrade_itemPressed(QTableWidgetItem *item);

    void on_pushButton_Solution_pressed();

private:
    Ui::GradingProgammingASM *ui;
};

#endif // GRADINGPROGAMMINGASM_H
