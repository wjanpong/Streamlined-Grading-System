/********************************************************************************
** Form generated from reading UI file 'astadmin.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASTADMIN_H
#define UI_ASTADMIN_H

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

class Ui_AstAdmin
{
public:
    QLabel *label_status;
    QLabel *label_filler;
    QPushButton *pushButton_createcourse;
    QPushButton *pushButton_ViewCourse;
    QPushButton *pushButton_modifycourse;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_logout;
    QPushButton *pushButton_ChangePass;

    void setupUi(QDialog *AstAdmin)
    {
        if (AstAdmin->objectName().isEmpty())
            AstAdmin->setObjectName(QStringLiteral("AstAdmin"));
        AstAdmin->resize(542, 490);
        label_status = new QLabel(AstAdmin);
        label_status->setObjectName(QStringLiteral("label_status"));
        label_status->setGeometry(QRect(30, 440, 181, 21));
        label_filler = new QLabel(AstAdmin);
        label_filler->setObjectName(QStringLiteral("label_filler"));
        label_filler->setGeometry(QRect(153, 10, 211, 31));
        QFont font;
        font.setPointSize(20);
        label_filler->setFont(font);
        pushButton_createcourse = new QPushButton(AstAdmin);
        pushButton_createcourse->setObjectName(QStringLiteral("pushButton_createcourse"));
        pushButton_createcourse->setGeometry(QRect(40, 72, 441, 101));
        pushButton_ViewCourse = new QPushButton(AstAdmin);
        pushButton_ViewCourse->setObjectName(QStringLiteral("pushButton_ViewCourse"));
        pushButton_ViewCourse->setGeometry(QRect(40, 310, 441, 111));
        pushButton_modifycourse = new QPushButton(AstAdmin);
        pushButton_modifycourse->setObjectName(QStringLiteral("pushButton_modifycourse"));
        pushButton_modifycourse->setGeometry(QRect(40, 190, 441, 111));
        layoutWidget = new QWidget(AstAdmin);
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


        retranslateUi(AstAdmin);

        QMetaObject::connectSlotsByName(AstAdmin);
    } // setupUi

    void retranslateUi(QDialog *AstAdmin)
    {
        AstAdmin->setWindowTitle(QApplication::translate("AstAdmin", "Dialog", 0));
        label_status->setText(QApplication::translate("AstAdmin", "status", 0));
        label_filler->setText(QApplication::translate("AstAdmin", "Assistant Admin", 0));
        pushButton_createcourse->setText(QApplication::translate("AstAdmin", "CREATE COURSE", 0));
        pushButton_ViewCourse->setText(QApplication::translate("AstAdmin", "VIEW COURSE ", 0));
        pushButton_modifycourse->setText(QApplication::translate("AstAdmin", "MODIFY COURSE", 0));
        pushButton_logout->setText(QApplication::translate("AstAdmin", "Logout", 0));
        pushButton_ChangePass->setText(QApplication::translate("AstAdmin", "Change Pass", 0));
    } // retranslateUi

};

namespace Ui {
    class AstAdmin: public Ui_AstAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASTADMIN_H
