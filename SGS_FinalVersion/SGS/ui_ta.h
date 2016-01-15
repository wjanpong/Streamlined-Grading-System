/********************************************************************************
** Form generated from reading UI file 'ta.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TA_H
#define UI_TA_H

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

class Ui_TA
{
public:
    QLabel *label_filler;
    QLabel *label_status;
    QPushButton *pushButton_mark;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_logout;
    QPushButton *pushButton_ChangePass;

    void setupUi(QDialog *TA)
    {
        if (TA->objectName().isEmpty())
            TA->setObjectName(QStringLiteral("TA"));
        TA->resize(400, 300);
        label_filler = new QLabel(TA);
        label_filler->setObjectName(QStringLiteral("label_filler"));
        label_filler->setGeometry(QRect(100, 70, 231, 121));
        QFont font;
        font.setPointSize(20);
        label_filler->setFont(font);
        label_status = new QLabel(TA);
        label_status->setObjectName(QStringLiteral("label_status"));
        label_status->setGeometry(QRect(20, 270, 181, 21));
        pushButton_mark = new QPushButton(TA);
        pushButton_mark->setObjectName(QStringLiteral("pushButton_mark"));
        pushButton_mark->setGeometry(QRect(280, 20, 91, 21));
        layoutWidget = new QWidget(TA);
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


        retranslateUi(TA);

        QMetaObject::connectSlotsByName(TA);
    } // setupUi

    void retranslateUi(QDialog *TA)
    {
        TA->setWindowTitle(QApplication::translate("TA", "Dialog", 0));
        label_filler->setText(QApplication::translate("TA", "Teacher Assistant", 0));
        label_status->setText(QApplication::translate("TA", "status", 0));
        pushButton_mark->setText(QApplication::translate("TA", "Mark", 0));
        pushButton_logout->setText(QApplication::translate("TA", "Logout", 0));
        pushButton_ChangePass->setText(QApplication::translate("TA", "Change Pass", 0));
    } // retranslateUi

};

namespace Ui {
    class TA: public Ui_TA {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TA_H
