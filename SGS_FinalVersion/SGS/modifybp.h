#ifndef MODIFYBP_H
#define MODIFYBP_H

#include <QDialog>

namespace Ui {
class ModifyBP;
}

class ModifyBP : public QDialog
{
    Q_OBJECT

public:
    explicit ModifyBP(QWidget *parent = 0);
    ~ModifyBP();
    void displayData(QString bonusPenaltyTypeID);

private slots:
    void on_pushButton_updateBonusPenalty_clicked();

private:
    Ui::ModifyBP *ui;
};



#endif // MODIFYBP_H
