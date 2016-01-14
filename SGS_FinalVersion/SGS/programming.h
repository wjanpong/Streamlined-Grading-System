#ifndef PROGRAMMING_H
#define PROGRAMMING_H

#include <QDialog>

namespace Ui {
class programming;
}

class programming : public QDialog
{
    Q_OBJECT

public:
    explicit programming(QWidget *parent = 0);
    ~programming();
    void setData(int activityId,int numTests);

    void transferData(QString activityId);
private slots:
    void on_pushButton_update_P_Test_clicked();
private:
    Ui::programming *ui;
};

#endif // PROGRAMMING_H
