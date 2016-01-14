/********************************************************************************
** Form generated from reading UI file 'administrator.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTRATOR_H
#define UI_ADMINISTRATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Administrator
{
public:
    QPushButton *pushButton_mark;
    QLabel *label_status;
    QLabel *label_filler;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_logout;
    QPushButton *pushButton_ChangePass;

    void setupUi(QDialog *Administrator)
    {
        if (Administrator->objectName().isEmpty())
            Administrator->setObjectName(QStringLiteral("Administrator"));
        Administrator->resize(400, 300);
        pushButton_mark = new QPushButton(Administrator);
        pushButton_mark->setObjectName(QStringLiteral("pushButton_mark"));
        pushButton_mark->setGeometry(QRect(280, 20, 91, 21));
        label_status = new QLabel(Administrator);
        label_status->setObjectName(QStringLiteral("label_status"));
        label_status->setGeometry(QRect(20, 270, 181, 21));
        label_filler = new QLabel(Administrator);
        label_filler->setObjectName(QStringLiteral("label_filler"));
        label_filler->setGeometry(QRect(100, 70, 231, 121));
        QFont font;
        font.setPointSize(20);
        label_filler->setFont(font);
        layoutWidget = new QWidget(Administrator);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 77, 54));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_logout = new QPushButton(layoutWidget);
        pushButton_logout->setObjectName(QStringLiteral("pushButton_logout"));

        verticalLayout->addWidget(pushButton_logout);

        pushButton_ChangePass = new QPushButton(layoutWidget);
        pushButton_ChangePass->setObjectName(QStringLiteral("pushButton_ChangePass"));

        verticalLayout->addWidget(pushButton_ChangePass);


        retranslateUi(Administrator);

        QMetaObject::connectSlotsByName(Administrator);
    } // setupUi

    void retranslateUi(QDialog *Administrator)
    {
        Administrator->setWindowTitle(QApplication::translate("Administrator", "Dialog", 0));
        pushButton_mark->setText(QApplication::translate("Administrator", "Mark", 0));
        label_status->setText(QApplication::translate("Administrator", "status", 0));
        label_filler->setText(QApplication::translate("Administrator", "Administrator", 0));
        pushButton_logout->setText(QApplication::translate("Administrator", "Logout", 0));
        pushButton_ChangePass->setText(QApplication::translate("Administrator", "Change Pass", 0));
    } // retranslateUi

};

namespace Ui {
    class Administrator: public Ui_Administrator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRATOR_H
