#ifndef MODIFYRUBRIC_H
#define MODIFYRUBRIC_H

#include <QDialog>
#include <QTableWidgetItem>

namespace Ui {
class ModifyRubric;
}

class ModifyRubric : public QDialog
{
    Q_OBJECT

public:
    explicit ModifyRubric(QWidget *parent = 0);
    ~ModifyRubric();
    void setData(const QString& activityId ,const QString& activityName, const QString& num_test);

private slots:
    void on_Rubric_table_itemPressed(QTableWidgetItem *item);

    void on_pushButton_UpdateRubric_pressed();

    void on_pushButton_DeleteRubric_pressed();



private:
    Ui::ModifyRubric *ui;
};

#endif // MODIFYRUBRIC_H
