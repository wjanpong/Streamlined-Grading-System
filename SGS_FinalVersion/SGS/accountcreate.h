#ifndef ACCOUNTCREATE_H
#define ACCOUNTCREATE_H

#include <QDialog>

namespace Ui {
class accountCreate;
}

class accountCreate : public QDialog
{
    Q_OBJECT

public:
    explicit accountCreate(QWidget *parent = 0);
    ~accountCreate();

private slots:
    void create();

    void on_pushButton_back_clicked();

    void on_pushButton_createTempPass_clicked(bool checked);

private:
    Ui::accountCreate *ui;
};

#endif // ACCOUNT_H
