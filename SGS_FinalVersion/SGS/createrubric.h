#ifndef CREATERUBRIC_H
#define CREATERUBRIC_H

#include <QDialog>

namespace Ui {
class createRubric;
}

class createRubric : public QDialog
{
    Q_OBJECT

public:
    explicit createRubric(QWidget *parent = 0);
    ~createRubric();

public slots:
    void setData(int activityId, int testnum);

private slots:
    void on_pushButton_createRubric_clicked();

private:
    Ui::createRubric *ui;
};

#endif // CREATERUBRIC_H
