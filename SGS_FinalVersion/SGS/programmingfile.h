#ifndef PROGRAMMINGFILE_H
#define PROGRAMMINGFILE_H

#include <QDialog>

namespace Ui {
class programmingFile;
}

class programmingFile : public QDialog
{
    Q_OBJECT

public:
    explicit programmingFile(QWidget *parent = 0);
    ~programmingFile();

    void setData(QString activityId);
    QString ActivityID;

private slots:
    void on_pushButton_insertToTestFileType_clicked();

    void on_pushButton_insertToFileInSystem_clicked();

    void on_pushButton_BrowseFile_clicked();


private:
    Ui::programmingFile *ui;
};

#endif // PROGRAMMINGFILE_H
