/********************************************************************************
** Form generated from reading UI file 'rolesel.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROLESEL_H
#define UI_ROLESEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_roleSel
{
public:
    QLabel *label_status;
    QPushButton *pushButton_Logout;
    QTableWidget *tableWidget_roles;
    QPushButton *pushButton_loadRoles;

    void setupUi(QDialog *roleSel)
    {
        if (roleSel->objectName().isEmpty())
            roleSel->setObjectName(QStringLiteral("roleSel"));
        roleSel->resize(438, 334);
        label_status = new QLabel(roleSel);
        label_status->setObjectName(QStringLiteral("label_status"));
        label_status->setGeometry(QRect(30, 300, 151, 16));
        pushButton_Logout = new QPushButton(roleSel);
        pushButton_Logout->setObjectName(QStringLiteral("pushButton_Logout"));
        pushButton_Logout->setGeometry(QRect(10, 10, 81, 21));
        tableWidget_roles = new QTableWidget(roleSel);
        if (tableWidget_roles->columnCount() < 1)
            tableWidget_roles->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_roles->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidget_roles->setObjectName(QStringLiteral("tableWidget_roles"));
        tableWidget_roles->setGeometry(QRect(50, 120, 311, 161));
        pushButton_loadRoles = new QPushButton(roleSel);
        pushButton_loadRoles->setObjectName(QStringLiteral("pushButton_loadRoles"));
        pushButton_loadRoles->setGeometry(QRect(50, 90, 75, 23));
        label_status->raise();
        tableWidget_roles->raise();
        pushButton_loadRoles->raise();
        pushButton_Logout->raise();

        retranslateUi(roleSel);

        QMetaObject::connectSlotsByName(roleSel);
    } // setupUi

    void retranslateUi(QDialog *roleSel)
    {
        roleSel->setWindowTitle(QApplication::translate("roleSel", "Dialog", 0));
        label_status->setText(QApplication::translate("roleSel", "...", 0));
        pushButton_Logout->setText(QApplication::translate("roleSel", "Logout", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_roles->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("roleSel", "Roles", 0));
        pushButton_loadRoles->setText(QApplication::translate("roleSel", "Load Roles", 0));
    } // retranslateUi

};

namespace Ui {
    class roleSel: public Ui_roleSel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROLESEL_H
