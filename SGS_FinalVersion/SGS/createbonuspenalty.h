#ifndef CREATEBONUSPENALTY_H
#define CREATEBONUSPENALTY_H

#include <QDialog>

namespace Ui {
class createBonusPenalty;
}

class createBonusPenalty : public QDialog
{
    Q_OBJECT

public:
    explicit createBonusPenalty(QWidget *parent = 0);
    ~createBonusPenalty();
    void setData(int activityId);

private slots:
    void on_pushButton_createBonusPenalty_clicked();

    void on_pushButton_createBPT_clicked();

private:
    Ui::createBonusPenalty *ui;
};

#endif // CREATEBONUSPENALTY_H
