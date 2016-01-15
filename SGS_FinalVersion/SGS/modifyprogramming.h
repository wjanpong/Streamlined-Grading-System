#ifndef MODIFYPROGRAMMING_H
#define MODIFYPROGRAMMING_H

#include <QDialog>

namespace Ui {
class ModifyProgramming;
}

class ModifyProgramming : public QDialog
{
    Q_OBJECT

public:
    explicit ModifyProgramming(QWidget *parent = 0);
    ~ModifyProgramming();
    void transferData(QString activityID, QString testID);
    QString TestID;
    QString ActivityID;

private slots:
    void on_pushButton_update_P_Test_clicked();

private:
    Ui::ModifyProgramming *ui;
};

#endif // MODIFYPROGRAMMING_H
