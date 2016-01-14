/********************************************************************************
** Form generated from reading UI file 'programmingfile.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRAMMINGFILE_H
#define UI_PROGRAMMINGFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_programmingFile
{
public:
    QSpinBox *spinBox_numTest;
    QLabel *label_2;
    QLineEdit *txtFileId;
    QPushButton *pushButton_insertToFileInSystem;
    QLineEdit *txtPathToFile;
    QPushButton *pushButton_BrowseFile;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_activityId;
    QPushButton *pushButton_insertToTestFileType;
    QLineEdit *txtType;
    QLineEdit *txtFileTypeID;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_5;

    void setupUi(QDialog *programmingFile)
    {
        if (programmingFile->objectName().isEmpty())
            programmingFile->setObjectName(QStringLiteral("programmingFile"));
        programmingFile->resize(561, 338);
        spinBox_numTest = new QSpinBox(programmingFile);
        spinBox_numTest->setObjectName(QStringLiteral("spinBox_numTest"));
        spinBox_numTest->setGeometry(QRect(190, 210, 42, 22));
        label_2 = new QLabel(programmingFile);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 180, 47, 13));
        txtFileId = new QLineEdit(programmingFile);
        txtFileId->setObjectName(QStringLiteral("txtFileId"));
        txtFileId->setGeometry(QRect(190, 180, 113, 20));
        pushButton_insertToFileInSystem = new QPushButton(programmingFile);
        pushButton_insertToFileInSystem->setObjectName(QStringLiteral("pushButton_insertToFileInSystem"));
        pushButton_insertToFileInSystem->setGeometry(QRect(194, 270, 121, 23));
        txtPathToFile = new QLineEdit(programmingFile);
        txtPathToFile->setObjectName(QStringLiteral("txtPathToFile"));
        txtPathToFile->setGeometry(QRect(190, 240, 231, 20));
        pushButton_BrowseFile = new QPushButton(programmingFile);
        pushButton_BrowseFile->setObjectName(QStringLiteral("pushButton_BrowseFile"));
        pushButton_BrowseFile->setGeometry(QRect(440, 240, 75, 23));
        label_3 = new QLabel(programmingFile);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 80, 71, 16));
        label = new QLabel(programmingFile);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 40, 61, 16));
        label_activityId = new QLabel(programmingFile);
        label_activityId->setObjectName(QStringLiteral("label_activityId"));
        label_activityId->setGeometry(QRect(190, 40, 47, 13));
        pushButton_insertToTestFileType = new QPushButton(programmingFile);
        pushButton_insertToTestFileType->setObjectName(QStringLiteral("pushButton_insertToTestFileType"));
        pushButton_insertToTestFileType->setGeometry(QRect(190, 140, 131, 23));
        txtType = new QLineEdit(programmingFile);
        txtType->setObjectName(QStringLiteral("txtType"));
        txtType->setGeometry(QRect(190, 110, 113, 20));
        txtFileTypeID = new QLineEdit(programmingFile);
        txtFileTypeID->setObjectName(QStringLiteral("txtFileTypeID"));
        txtFileTypeID->setGeometry(QRect(190, 80, 113, 20));
        label_4 = new QLabel(programmingFile);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 210, 81, 16));
        label_6 = new QLabel(programmingFile);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(120, 110, 47, 13));
        label_5 = new QLabel(programmingFile);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(100, 240, 71, 20));

        retranslateUi(programmingFile);

        QMetaObject::connectSlotsByName(programmingFile);
    } // setupUi

    void retranslateUi(QDialog *programmingFile)
    {
        programmingFile->setWindowTitle(QApplication::translate("programmingFile", "Dialog", 0));
        label_2->setText(QApplication::translate("programmingFile", "File ID :", 0));
        pushButton_insertToFileInSystem->setText(QApplication::translate("programmingFile", "INSERT to fileInSystem", 0));
        pushButton_BrowseFile->setText(QApplication::translate("programmingFile", "Browse", 0));
        label_3->setText(QApplication::translate("programmingFile", "File Type ID :", 0));
        label->setText(QApplication::translate("programmingFile", "Activity ID:", 0));
        label_activityId->setText(QApplication::translate("programmingFile", "activityId", 0));
        pushButton_insertToTestFileType->setText(QApplication::translate("programmingFile", "INSERT to TestFileType", 0));
        label_4->setText(QApplication::translate("programmingFile", "Number Of Test :", 0));
        label_6->setText(QApplication::translate("programmingFile", "Type :", 0));
        label_5->setText(QApplication::translate("programmingFile", "Path to File :", 0));
    } // retranslateUi

};

namespace Ui {
    class programmingFile: public Ui_programmingFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRAMMINGFILE_H
