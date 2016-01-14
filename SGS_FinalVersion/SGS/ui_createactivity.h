/********************************************************************************
** Form generated from reading UI file 'createactivity.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEACTIVITY_H
#define UI_CREATEACTIVITY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_createActivity
{
public:
    QLabel *label;
    QLabel *label_3;
    QLineEdit *txtTestID;
    QComboBox *comboBox_activityType;
    QLabel *label_12;
    QLabel *label_2;
    QPushButton *pushButton_createActivity;
    QDateEdit *dueDate;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_5;
    QPushButton *pushButton_SearchSol;
    QLineEdit *txtActivityName;
    QLineEdit *txtStdDir;
    QPushButton *pushButton_SearchSub;
    QLabel *label_10;
    QSpinBox *spinBox_numTests;
    QFrame *line;
    QComboBox *comboBox_activityLang;
    QSpinBox *Numtests;
    QSpinBox *numOutput;
    QComboBox *comboBox_environment;
    QLineEdit *txtSolutionPath;
    QLabel *label_7;
    QLabel *label_8;
    QSpinBox *numInput;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_testID;

    void setupUi(QDialog *createActivity)
    {
        if (createActivity->objectName().isEmpty())
            createActivity->setObjectName(QStringLiteral("createActivity"));
        createActivity->resize(1017, 439);
        label = new QLabel(createActivity);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 30, 71, 16));
        label_3 = new QLabel(createActivity);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 110, 81, 16));
        txtTestID = new QLineEdit(createActivity);
        txtTestID->setObjectName(QStringLiteral("txtTestID"));
        txtTestID->setGeometry(QRect(880, 80, 113, 20));
        comboBox_activityType = new QComboBox(createActivity);
        comboBox_activityType->setObjectName(QStringLiteral("comboBox_activityType"));
        comboBox_activityType->setGeometry(QRect(230, 110, 91, 22));
        label_12 = new QLabel(createActivity);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(780, 30, 151, 16));
        label_2 = new QLabel(createActivity);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 70, 91, 16));
        pushButton_createActivity = new QPushButton(createActivity);
        pushButton_createActivity->setObjectName(QStringLiteral("pushButton_createActivity"));
        pushButton_createActivity->setGeometry(QRect(130, 280, 411, 41));
        dueDate = new QDateEdit(createActivity);
        dueDate->setObjectName(QStringLiteral("dueDate"));
        dueDate->setGeometry(QRect(230, 200, 110, 22));
        label_9 = new QLabel(createActivity);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(730, 160, 121, 31));
        label_11 = new QLabel(createActivity);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(750, 120, 91, 21));
        label_5 = new QLabel(createActivity);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 160, 191, 16));
        pushButton_SearchSol = new QPushButton(createActivity);
        pushButton_SearchSol->setObjectName(QStringLiteral("pushButton_SearchSol"));
        pushButton_SearchSol->setGeometry(QRect(540, 70, 75, 23));
        txtActivityName = new QLineEdit(createActivity);
        txtActivityName->setObjectName(QStringLiteral("txtActivityName"));
        txtActivityName->setGeometry(QRect(230, 30, 301, 20));
        txtStdDir = new QLineEdit(createActivity);
        txtStdDir->setObjectName(QStringLiteral("txtStdDir"));
        txtStdDir->setGeometry(QRect(230, 160, 309, 20));
        pushButton_SearchSub = new QPushButton(createActivity);
        pushButton_SearchSub->setObjectName(QStringLiteral("pushButton_SearchSub"));
        pushButton_SearchSub->setGeometry(QRect(550, 160, 75, 23));
        label_10 = new QLabel(createActivity);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(730, 200, 131, 21));
        spinBox_numTests = new QSpinBox(createActivity);
        spinBox_numTests->setObjectName(QStringLiteral("spinBox_numTests"));
        spinBox_numTests->setGeometry(QRect(880, 120, 42, 22));
        line = new QFrame(createActivity);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(653, 10, 20, 421));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        comboBox_activityLang = new QComboBox(createActivity);
        comboBox_activityLang->setObjectName(QStringLiteral("comboBox_activityLang"));
        comboBox_activityLang->setGeometry(QRect(520, 110, 91, 22));
        Numtests = new QSpinBox(createActivity);
        Numtests->setObjectName(QStringLiteral("Numtests"));
        Numtests->setGeometry(QRect(520, 200, 42, 22));
        numOutput = new QSpinBox(createActivity);
        numOutput->setObjectName(QStringLiteral("numOutput"));
        numOutput->setGeometry(QRect(880, 200, 81, 22));
        comboBox_environment = new QComboBox(createActivity);
        comboBox_environment->setObjectName(QStringLiteral("comboBox_environment"));
        comboBox_environment->setGeometry(QRect(880, 240, 69, 22));
        txtSolutionPath = new QLineEdit(createActivity);
        txtSolutionPath->setObjectName(QStringLiteral("txtSolutionPath"));
        txtSolutionPath->setGeometry(QRect(230, 70, 299, 20));
        label_7 = new QLabel(createActivity);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(80, 210, 61, 16));
        label_8 = new QLabel(createActivity);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(410, 200, 101, 16));
        numInput = new QSpinBox(createActivity);
        numInput->setObjectName(QStringLiteral("numInput"));
        numInput->setGeometry(QRect(880, 170, 81, 22));
        label_6 = new QLabel(createActivity);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(760, 240, 71, 21));
        label_4 = new QLabel(createActivity);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(400, 110, 101, 16));
        label_testID = new QLabel(createActivity);
        label_testID->setObjectName(QStringLiteral("label_testID"));
        label_testID->setGeometry(QRect(760, 80, 61, 21));

        retranslateUi(createActivity);

        QMetaObject::connectSlotsByName(createActivity);
    } // setupUi

    void retranslateUi(QDialog *createActivity)
    {
        createActivity->setWindowTitle(QApplication::translate("createActivity", "Dialog", 0));
        label->setText(QApplication::translate("createActivity", "*Activity Name :", 0));
        label_3->setText(QApplication::translate("createActivity", "*Activity Type :", 0));
        comboBox_activityType->clear();
        comboBox_activityType->insertItems(0, QStringList()
         << QApplication::translate("createActivity", "Essay", 0)
         << QApplication::translate("createActivity", "Problem Set", 0)
         << QApplication::translate("createActivity", "Programming Assignment", 0)
         << QApplication::translate("createActivity", "Multiple Choice", 0)
        );
        label_12->setText(QApplication::translate("createActivity", "For Programming Activtity Only", 0));
        label_2->setText(QApplication::translate("createActivity", "*Path to Solutions :", 0));
        pushButton_createActivity->setText(QApplication::translate("createActivity", "Create Activity", 0));
        label_9->setText(QApplication::translate("createActivity", "Number Of Input Files: ", 0));
        label_11->setText(QApplication::translate("createActivity", "Number of Test:", 0));
        label_5->setText(QApplication::translate("createActivity", "Path to Student Submission Directory :", 0));
        pushButton_SearchSol->setText(QApplication::translate("createActivity", "Browse", 0));
        pushButton_SearchSub->setText(QApplication::translate("createActivity", "Browse", 0));
        label_10->setText(QApplication::translate("createActivity", "Number Of Output Files:", 0));
        comboBox_activityLang->clear();
        comboBox_activityLang->insertItems(0, QStringList()
         << QApplication::translate("createActivity", "English", 0)
         << QApplication::translate("createActivity", "French", 0)
         << QApplication::translate("createActivity", "German", 0)
         << QApplication::translate("createActivity", "Chinese", 0)
         << QApplication::translate("createActivity", "C++", 0)
         << QApplication::translate("createActivity", "Java", 0)
         << QApplication::translate("createActivity", "Python", 0)
        );
        comboBox_environment->clear();
        comboBox_environment->insertItems(0, QStringList()
         << QApplication::translate("createActivity", "c++", 0)
         << QApplication::translate("createActivity", "Java", 0)
         << QApplication::translate("createActivity", "Eclipse", 0)
         << QApplication::translate("createActivity", "QT", 0)
        );
        label_7->setText(QApplication::translate("createActivity", "Due Date :", 0));
        label_8->setText(QApplication::translate("createActivity", "Number of Test :", 0));
        label_6->setText(QApplication::translate("createActivity", "Environment:", 0));
        label_4->setText(QApplication::translate("createActivity", "*Activity Language :", 0));
        label_testID->setText(QApplication::translate("createActivity", "*testID:", 0));
    } // retranslateUi

};

namespace Ui {
    class createActivity: public Ui_createActivity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEACTIVITY_H
