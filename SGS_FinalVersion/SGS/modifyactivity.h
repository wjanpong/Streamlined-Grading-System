#ifndef MODIFYACTIVITY_H
#define MODIFYACTIVITY_H

#include <QDialog>

namespace Ui {
class modifyActivity;
}

class modifyActivity : public QDialog
{
    Q_OBJECT

public:
    explicit modifyActivity(QWidget *parent = 0);
    ~modifyActivity();
    void displayData(QString activityId);

private slots:
    void on_ModifyAcitivty_clicked();

    void on_pushButton_BrowseSol_clicked();

    void on_pushButton_BrowseSub_clicked();

private:
    Ui::modifyActivity *ui;
};

#endif // MODIFYACTIVITY_H
