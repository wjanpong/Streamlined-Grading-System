/********************************************************************************
** Form generated from reading UI file 'modifyactivity.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYACTIVITY_H
#define UI_MODIFYACTIVITY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_modifyActivity
{
public:
    QLabel *label_2;
    QComboBox *comboBox_activityLang;
    QPushButton *ModifyAcitivty;
    QComboBox *comboBox_activityType;
    QLabel *label_5;
    QLineEdit *txtStdDir;
    QSpinBox *Numtests;
    QLabel *label_7;
    QLabel *label_4;
    QLineEdit *txtActivityName;
    QLabel *txtActvityId;
    QLabel *label_14;
    QLabel *label_8;
    QDateEdit *dueDate;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *txtSolutionPath;
    QPushButton *pushButton_BrowseSol;
    QPushButton *pushButton_BrowseSub;

    void setupUi(QDialog *modifyActivity)
    {
        if (modifyActivity->objectName().isEmpty())
            modifyActivity->setObjectName(QStringLiteral("modifyActivity"));
        modifyActivity->resize(665, 464);
        label_2 = new QLabel(modifyActivity);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 160, 91, 16));
        comboBox_activityLang = new QComboBox(modifyActivity);
        comboBox_activityLang->setObjectName(QStringLiteral("comboBox_activityLang"));
        comboBox_activityLang->setGeometry(QRect(520, 200, 91, 22));
        ModifyAcitivty = new QPushButton(modifyActivity);
        ModifyAcitivty->setObjectName(QStringLiteral("ModifyAcitivty"));
        ModifyAcitivty->setGeometry(QRect(260, 380, 251, 23));
        comboBox_activityType = new QComboBox(modifyActivity);
        comboBox_activityType->setObjectName(QStringLiteral("comboBox_activityType"));
        comboBox_activityType->setGeometry(QRect(230, 200, 91, 22));
        label_5 = new QLabel(modifyActivity);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 250, 191, 16));
        txtStdDir = new QLineEdit(modifyActivity);
        txtStdDir->setObjectName(QStringLiteral("txtStdDir"));
        txtStdDir->setGeometry(QRect(230, 250, 309, 20));
        Numtests = new QSpinBox(modifyActivity);
        Numtests->setObjectName(QStringLiteral("Numtests"));
        Numtests->setGeometry(QRect(520, 290, 42, 22));
        label_7 = new QLabel(modifyActivity);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(80, 300, 61, 16));
        label_4 = new QLabel(modifyActivity);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(400, 200, 101, 16));
        txtActivityName = new QLineEdit(modifyActivity);
        txtActivityName->setObjectName(QStringLiteral("txtActivityName"));
        txtActivityName->setGeometry(QRect(230, 120, 301, 20));
        txtActvityId = new QLabel(modifyActivity);
        txtActvityId->setObjectName(QStringLiteral("txtActvityId"));
        txtActvityId->setGeometry(QRect(230, 80, 47, 13));
        label_14 = new QLabel(modifyActivity);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(90, 80, 71, 16));
        label_8 = new QLabel(modifyActivity);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(410, 290, 101, 16));
        dueDate = new QDateEdit(modifyActivity);
        dueDate->setObjectName(QStringLiteral("dueDate"));
        dueDate->setGeometry(QRect(230, 290, 110, 22));
        label_3 = new QLabel(modifyActivity);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 200, 81, 16));
        label = new QLabel(modifyActivity);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 120, 71, 16));
        txtSolutionPath = new QLineEdit(modifyActivity);
        txtSolutionPath->setObjectName(QStringLiteral("txtSolutionPath"));
        txtSolutionPath->setGeometry(QRect(230, 160, 299, 20));
        pushButton_BrowseSol = new QPushButton(modifyActivity);
        pushButton_BrowseSol->setObjectName(QStringLiteral("pushButton_BrowseSol"));
        pushButton_BrowseSol->setGeometry(QRect(560, 160, 75, 23));
        pushButton_BrowseSub = new QPushButton(modifyActivity);
        pushButton_BrowseSub->setObjectName(QStringLiteral("pushButton_BrowseSub"));
        pushButton_BrowseSub->setGeometry(QRect(560, 250, 75, 23));

        retranslateUi(modifyActivity);

        QMetaObject::connectSlotsByName(modifyActivity);
    } // setupUi

    void retranslateUi(QDialog *modifyActivity)
    {
        modifyActivity->setWindowTitle(QApplication::translate("modifyActivity", "Dialog", 0));
        label_2->setText(QApplication::translate("modifyActivity", "*Path to Solutions :", 0));
        comboBox_activityLang->clear();
        comboBox_activityLang->insertItems(0, QStringList()
         << QApplication::translate("modifyActivity", "English", 0)
         << QApplication::translate("modifyActivity", "French", 0)
         << QApplication::translate("modifyActivity", "German", 0)
         << QApplication::translate("modifyActivity", "Chinese", 0)
         << QApplication::translate("modifyActivity", "C++", 0)
         << QApplication::translate("modifyActivity", "Java", 0)
         << QApplication::translate("modifyActivity", "Python", 0)
        );
        ModifyAcitivty->setText(QApplication::translate("modifyActivity", "Modify Activity", 0));
        comboBox_activityType->clear();
        comboBox_activityType->insertItems(0, QStringList()
         << QApplication::translate("modifyActivity", "Essay", 0)
         << QApplication::translate("modifyActivity", "Problem Set", 0)
         << QApplication::translate("modifyActivity", "Programming Assignment", 0)
         << QApplication::translate("modifyActivity", "Multiple Choice", 0)
        );
        label_5->setText(QApplication::translate("modifyActivity", "Path to Student Submission Directory :", 0));
        label_7->setText(QApplication::translate("modifyActivity", "Due Date :", 0));
        label_4->setText(QApplication::translate("modifyActivity", "*Activity Language :", 0));
        txtActvityId->setText(QApplication::translate("modifyActivity", "activityID", 0));
        label_14->setText(QApplication::translate("modifyActivity", "*Activity ID :", 0));
        label_8->setText(QApplication::translate("modifyActivity", "Number of Test :", 0));
        label_3->setText(QApplication::translate("modifyActivity", "*Activity Type :", 0));
        label->setText(QApplication::translate("modifyActivity", "*Activity Name :", 0));
        pushButton_BrowseSol->setText(QApplication::translate("modifyActivity", "Browse", 0));
        pushButton_BrowseSub->setText(QApplication::translate("modifyActivity", "Browse", 0));
    } // retranslateUi

};

namespace Ui {
    class modifyActivity: public Ui_modifyActivity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYACTIVITY_H
