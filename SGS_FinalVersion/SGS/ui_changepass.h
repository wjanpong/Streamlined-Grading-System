/********************************************************************************
** Form generated from reading UI file 'changepass.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASS_H
#define UI_CHANGEPASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_changePass
{
public:
    QPushButton *pushButton_confirm;
    QLabel *label_status;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_current;
    QLineEdit *lineEdit_current;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_new;
    QLineEdit *lineEdit_new;
    QPushButton *pushButton_back;
    QLabel *label;
    QLabel *label_employeeID;

    void setupUi(QDialog *changePass)
    {
        if (changePass->objectName().isEmpty())
            changePass->setObjectName(QStringLiteral("changePass"));
        changePass->resize(407, 315);
        pushButton_confirm = new QPushButton(changePass);
        pushButton_confirm->setObjectName(QStringLiteral("pushButton_confirm"));
        pushButton_confirm->setGeometry(QRect(300, 280, 75, 23));
        label_status = new QLabel(changePass);
        label_status->setObjectName(QStringLiteral("label_status"));
        label_status->setGeometry(QRect(20, 280, 181, 16));
        QFont font;
        font.setItalic(true);
        label_status->setFont(font);
        layoutWidget = new QWidget(changePass);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 110, 243, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_current = new QLabel(layoutWidget);
        label_current->setObjectName(QStringLiteral("label_current"));
        QFont font1;
        font1.setPointSize(10);
        label_current->setFont(font1);

        horizontalLayout->addWidget(label_current);

        lineEdit_current = new QLineEdit(layoutWidget);
        lineEdit_current->setObjectName(QStringLiteral("lineEdit_current"));
        lineEdit_current->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(lineEdit_current);

        layoutWidget1 = new QWidget(changePass);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(70, 150, 241, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_new = new QLabel(layoutWidget1);
        label_new->setObjectName(QStringLiteral("label_new"));
        label_new->setFont(font1);

        horizontalLayout_2->addWidget(label_new);

        lineEdit_new = new QLineEdit(layoutWidget1);
        lineEdit_new->setObjectName(QStringLiteral("lineEdit_new"));
        lineEdit_new->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_new);

        pushButton_back = new QPushButton(changePass);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(10, 10, 75, 23));
        label = new QLabel(changePass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(71, 81, 57, 16));
        label_employeeID = new QLabel(changePass);
        label_employeeID->setObjectName(QStringLiteral("label_employeeID"));
        label_employeeID->setGeometry(QRect(134, 81, 141, 16));

        retranslateUi(changePass);

        QMetaObject::connectSlotsByName(changePass);
    } // setupUi

    void retranslateUi(QDialog *changePass)
    {
        changePass->setWindowTitle(QApplication::translate("changePass", "Dialog", 0));
        pushButton_confirm->setText(QApplication::translate("changePass", "Confirm", 0));
        label_status->setText(QApplication::translate("changePass", "Status", 0));
        label_current->setText(QApplication::translate("changePass", "Current Password", 0));
        label_new->setText(QApplication::translate("changePass", "New Password", 0));
        pushButton_back->setText(QApplication::translate("changePass", "Back", 0));
        label->setText(QApplication::translate("changePass", "EmployeeID", 0));
        label_employeeID->setText(QApplication::translate("changePass", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class changePass: public Ui_changePass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASS_H
