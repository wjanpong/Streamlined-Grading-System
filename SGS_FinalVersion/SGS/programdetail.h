#ifndef PROGRAMDETAIL_H
#define PROGRAMDETAIL_H

#include <QDialog>

namespace Ui {
class ProgramDetail;
}

class ProgramDetail : public QDialog
{
    Q_OBJECT

public:
    explicit ProgramDetail(QWidget *parent = 0);
    ~ProgramDetail();
    void setData(QString activityId);
    QString activityID;


private slots:
    void on_pushButton_Display_clicked();

    void on_pushButton_ModifyPT_clicked();

    void on_pushButton_DeletePT_clicked();

    void on_pushButton_createPT_clicked();

    void on_pushButton_createFIS_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_ModifyFIS_clicked();

private:
    Ui::ProgramDetail *ui;
};

#endif // PROGRAMDETAIL_H
