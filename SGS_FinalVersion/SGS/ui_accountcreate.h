/********************************************************************************
** Form generated from reading UI file 'accountcreate.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTCREATE_H
#define UI_ACCOUNTCREATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_accountCreate
{
public:
    QLineEdit *Text_accountID;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *Text_lastName;
    QLabel *label_2;
    QCheckBox *checkBox_isSysAdmin;
    QCheckBox *checkBox_isAssistAdmin;
    QCheckBox *checkBox_isInstructor;
    QPushButton *pushButton_createTempPass;
    QLabel *label_7;
    QLabel *label;
    QCheckBox *checkBox_ispasswdtemp;
    QCheckBox *checkBox_isAdministrator;
    QPushButton *pushButton_create;
    QCheckBox *checkBox_isTA;
    QLabel *label_5;
    QLineEdit *Text_firstName;
    QLineEdit *Text_employeeID;
    QCheckBox *checkBox_islocked;
    QLineEdit *Text_middleName;
    QLineEdit *lineEdit_tempPass;
    QPushButton *pushButton_back;

    void setupUi(QDialog *accountCreate)
    {
        if (accountCreate->objectName().isEmpty())
            accountCreate->setObjectName(QStringLiteral("accountCreate"));
        accountCreate->resize(605, 506);
        Text_accountID = new QLineEdit(accountCreate);
        Text_accountID->setObjectName(QStringLiteral("Text_accountID"));
        Text_accountID->setGeometry(QRect(190, 210, 161, 20));
        label_4 = new QLabel(accountCreate);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(110, 120, 61, 16));
        label_3 = new QLabel(accountCreate);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(110, 80, 61, 16));
        Text_lastName = new QLineEdit(accountCreate);
        Text_lastName->setObjectName(QStringLiteral("Text_lastName"));
        Text_lastName->setGeometry(QRect(190, 160, 161, 20));
        label_2 = new QLabel(accountCreate);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 40, 61, 16));
        checkBox_isSysAdmin = new QCheckBox(accountCreate);
        checkBox_isSysAdmin->setObjectName(QStringLiteral("checkBox_isSysAdmin"));
        checkBox_isSysAdmin->setEnabled(true);
        checkBox_isSysAdmin->setGeometry(QRect(110, 350, 131, 17));
        checkBox_isAssistAdmin = new QCheckBox(accountCreate);
        checkBox_isAssistAdmin->setObjectName(QStringLiteral("checkBox_isAssistAdmin"));
        checkBox_isAssistAdmin->setEnabled(true);
        checkBox_isAssistAdmin->setGeometry(QRect(110, 310, 141, 17));
        checkBox_isInstructor = new QCheckBox(accountCreate);
        checkBox_isInstructor->setObjectName(QStringLiteral("checkBox_isInstructor"));
        checkBox_isInstructor->setEnabled(true);
        checkBox_isInstructor->setGeometry(QRect(110, 460, 70, 17));
        pushButton_createTempPass = new QPushButton(accountCreate);
        pushButton_createTempPass->setObjectName(QStringLiteral("pushButton_createTempPass"));
        pushButton_createTempPass->setGeometry(QRect(370, 240, 151, 21));
        label_7 = new QLabel(accountCreate);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(110, 240, 61, 16));
        label = new QLabel(accountCreate);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 210, 61, 16));
        checkBox_ispasswdtemp = new QCheckBox(accountCreate);
        checkBox_ispasswdtemp->setObjectName(QStringLiteral("checkBox_ispasswdtemp"));
        checkBox_ispasswdtemp->setEnabled(true);
        checkBox_ispasswdtemp->setGeometry(QRect(290, 310, 121, 17));
        checkBox_isAdministrator = new QCheckBox(accountCreate);
        checkBox_isAdministrator->setObjectName(QStringLiteral("checkBox_isAdministrator"));
        checkBox_isAdministrator->setEnabled(true);
        checkBox_isAdministrator->setGeometry(QRect(110, 390, 121, 17));
        pushButton_create = new QPushButton(accountCreate);
        pushButton_create->setObjectName(QStringLiteral("pushButton_create"));
        pushButton_create->setGeometry(QRect(390, 470, 75, 23));
        checkBox_isTA = new QCheckBox(accountCreate);
        checkBox_isTA->setObjectName(QStringLiteral("checkBox_isTA"));
        checkBox_isTA->setEnabled(true);
        checkBox_isTA->setGeometry(QRect(110, 430, 70, 17));
        label_5 = new QLabel(accountCreate);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(110, 160, 61, 16));
        Text_firstName = new QLineEdit(accountCreate);
        Text_firstName->setObjectName(QStringLiteral("Text_firstName"));
        Text_firstName->setGeometry(QRect(190, 80, 161, 20));
        Text_employeeID = new QLineEdit(accountCreate);
        Text_employeeID->setObjectName(QStringLiteral("Text_employeeID"));
        Text_employeeID->setGeometry(QRect(190, 40, 161, 20));
        checkBox_islocked = new QCheckBox(accountCreate);
        checkBox_islocked->setObjectName(QStringLiteral("checkBox_islocked"));
        checkBox_islocked->setEnabled(true);
        checkBox_islocked->setGeometry(QRect(290, 340, 70, 17));
        Text_middleName = new QLineEdit(accountCreate);
        Text_middleName->setObjectName(QStringLiteral("Text_middleName"));
        Text_middleName->setGeometry(QRect(190, 120, 161, 20));
        lineEdit_tempPass = new QLineEdit(accountCreate);
        lineEdit_tempPass->setObjectName(QStringLiteral("lineEdit_tempPass"));
        lineEdit_tempPass->setGeometry(QRect(190, 240, 161, 21));
        lineEdit_tempPass->setEchoMode(QLineEdit::Password);
        pushButton_back = new QPushButton(accountCreate);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(10, 10, 75, 23));

        retranslateUi(accountCreate);

        QMetaObject::connectSlotsByName(accountCreate);
    } // setupUi

    void retranslateUi(QDialog *accountCreate)
    {
        accountCreate->setWindowTitle(QApplication::translate("accountCreate", "Dialog", 0));
        label_4->setText(QApplication::translate("accountCreate", "Middle NAme", 0));
        label_3->setText(QApplication::translate("accountCreate", "First Name", 0));
        label_2->setText(QApplication::translate("accountCreate", "employeerID", 0));
        checkBox_isSysAdmin->setText(QApplication::translate("accountCreate", "System Administrator", 0));
        checkBox_isAssistAdmin->setText(QApplication::translate("accountCreate", "Assistent Administrator", 0));
        checkBox_isInstructor->setText(QApplication::translate("accountCreate", "Instructor", 0));
        pushButton_createTempPass->setText(QApplication::translate("accountCreate", "Create Temporary Password", 0));
        label_7->setText(QApplication::translate("accountCreate", "Password", 0));
        label->setText(QApplication::translate("accountCreate", "AccountID", 0));
        checkBox_ispasswdtemp->setText(QApplication::translate("accountCreate", "temporary password", 0));
        checkBox_isAdministrator->setText(QApplication::translate("accountCreate", "Administrator", 0));
        pushButton_create->setText(QApplication::translate("accountCreate", "create", 0));
        checkBox_isTA->setText(QApplication::translate("accountCreate", "T.A", 0));
        label_5->setText(QApplication::translate("accountCreate", "Last Name", 0));
        checkBox_islocked->setText(QApplication::translate("accountCreate", "locked", 0));
        pushButton_back->setText(QApplication::translate("accountCreate", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class accountCreate: public Ui_accountCreate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTCREATE_H
