/********************************************************************************
** Form generated from reading UI file 'systemadminview.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEMADMINVIEW_H
#define UI_SYSTEMADMINVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_systemadminview
{
public:
    QTableWidget *table_account;
    QPushButton *Data_Pass;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *addNewAccount;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *AccountID_input;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *EmployeeID_input;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *FirstName_input;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *MiddleName_input;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *LastName_input;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *UserName_input;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QPushButton *pushButton_resetPass;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *AA_checkBox;
    QCheckBox *sysadmin_checkBox;
    QCheckBox *Instructor_checkBox;
    QCheckBox *TA_checkBox;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *Administractor_checkBox;
    QCheckBox *block_checkBox;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *Modify_Comfirm;
    QPushButton *Delete;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *pushButton_logout;
    QPushButton *Load_table;
    QPushButton *pushButton_ChangePass;

    void setupUi(QDialog *systemadminview)
    {
        if (systemadminview->objectName().isEmpty())
            systemadminview->setObjectName(QStringLiteral("systemadminview"));
        systemadminview->resize(1284, 614);
        table_account = new QTableWidget(systemadminview);
        if (table_account->columnCount() < 8)
            table_account->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table_account->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table_account->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table_account->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table_account->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table_account->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        table_account->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        table_account->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        table_account->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        table_account->setObjectName(QStringLiteral("table_account"));
        table_account->setGeometry(QRect(10, 40, 701, 451));
        Data_Pass = new QPushButton(systemadminview);
        Data_Pass->setObjectName(QStringLiteral("Data_Pass"));
        Data_Pass->setGeometry(QRect(720, 260, 81, 23));
        layoutWidget = new QWidget(systemadminview);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(811, 31, 451, 501));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        addNewAccount = new QPushButton(layoutWidget);
        addNewAccount->setObjectName(QStringLiteral("addNewAccount"));

        horizontalLayout_11->addWidget(addNewAccount);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_11->addWidget(label_8);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        AccountID_input = new QLineEdit(layoutWidget);
        AccountID_input->setObjectName(QStringLiteral("AccountID_input"));
        AccountID_input->setFrame(true);
        AccountID_input->setDragEnabled(true);

        horizontalLayout_2->addWidget(AccountID_input);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        EmployeeID_input = new QLineEdit(layoutWidget);
        EmployeeID_input->setObjectName(QStringLiteral("EmployeeID_input"));
        EmployeeID_input->setFrame(true);
        EmployeeID_input->setDragEnabled(true);

        horizontalLayout->addWidget(EmployeeID_input);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        FirstName_input = new QLineEdit(layoutWidget);
        FirstName_input->setObjectName(QStringLiteral("FirstName_input"));
        FirstName_input->setFrame(true);
        FirstName_input->setDragEnabled(true);

        horizontalLayout_3->addWidget(FirstName_input);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        MiddleName_input = new QLineEdit(layoutWidget);
        MiddleName_input->setObjectName(QStringLiteral("MiddleName_input"));
        MiddleName_input->setFrame(true);
        MiddleName_input->setDragEnabled(true);

        horizontalLayout_4->addWidget(MiddleName_input);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        LastName_input = new QLineEdit(layoutWidget);
        LastName_input->setObjectName(QStringLiteral("LastName_input"));
        LastName_input->setFrame(true);
        LastName_input->setDragEnabled(true);

        horizontalLayout_5->addWidget(LastName_input);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        UserName_input = new QLineEdit(layoutWidget);
        UserName_input->setObjectName(QStringLiteral("UserName_input"));
        UserName_input->setEnabled(false);
        UserName_input->setFrame(true);
        UserName_input->setDragEnabled(true);

        horizontalLayout_6->addWidget(UserName_input);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_7->addWidget(label_7);

        pushButton_resetPass = new QPushButton(layoutWidget);
        pushButton_resetPass->setObjectName(QStringLiteral("pushButton_resetPass"));

        horizontalLayout_7->addWidget(pushButton_resetPass);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        AA_checkBox = new QCheckBox(layoutWidget);
        AA_checkBox->setObjectName(QStringLiteral("AA_checkBox"));

        horizontalLayout_8->addWidget(AA_checkBox);

        sysadmin_checkBox = new QCheckBox(layoutWidget);
        sysadmin_checkBox->setObjectName(QStringLiteral("sysadmin_checkBox"));

        horizontalLayout_8->addWidget(sysadmin_checkBox);

        Instructor_checkBox = new QCheckBox(layoutWidget);
        Instructor_checkBox->setObjectName(QStringLiteral("Instructor_checkBox"));

        horizontalLayout_8->addWidget(Instructor_checkBox);

        TA_checkBox = new QCheckBox(layoutWidget);
        TA_checkBox->setObjectName(QStringLiteral("TA_checkBox"));

        horizontalLayout_8->addWidget(TA_checkBox);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        Administractor_checkBox = new QCheckBox(layoutWidget);
        Administractor_checkBox->setObjectName(QStringLiteral("Administractor_checkBox"));

        horizontalLayout_9->addWidget(Administractor_checkBox);

        block_checkBox = new QCheckBox(layoutWidget);
        block_checkBox->setObjectName(QStringLiteral("block_checkBox"));

        horizontalLayout_9->addWidget(block_checkBox);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        Modify_Comfirm = new QPushButton(layoutWidget);
        Modify_Comfirm->setObjectName(QStringLiteral("Modify_Comfirm"));

        horizontalLayout_10->addWidget(Modify_Comfirm);

        Delete = new QPushButton(layoutWidget);
        Delete->setObjectName(QStringLiteral("Delete"));

        horizontalLayout_10->addWidget(Delete);


        verticalLayout->addLayout(horizontalLayout_10);

        widget = new QWidget(systemadminview);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 239, 25));
        horizontalLayout_12 = new QHBoxLayout(widget);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        pushButton_logout = new QPushButton(widget);
        pushButton_logout->setObjectName(QStringLiteral("pushButton_logout"));

        horizontalLayout_12->addWidget(pushButton_logout);

        Load_table = new QPushButton(widget);
        Load_table->setObjectName(QStringLiteral("Load_table"));

        horizontalLayout_12->addWidget(Load_table);

        pushButton_ChangePass = new QPushButton(widget);
        pushButton_ChangePass->setObjectName(QStringLiteral("pushButton_ChangePass"));

        horizontalLayout_12->addWidget(pushButton_ChangePass);


        retranslateUi(systemadminview);

        QMetaObject::connectSlotsByName(systemadminview);
    } // setupUi

    void retranslateUi(QDialog *systemadminview)
    {
        systemadminview->setWindowTitle(QApplication::translate("systemadminview", "Dialog", 0));
        QTableWidgetItem *___qtablewidgetitem = table_account->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("systemadminview", "Account ID", 0));
        QTableWidgetItem *___qtablewidgetitem1 = table_account->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("systemadminview", "Employee ID", 0));
        QTableWidgetItem *___qtablewidgetitem2 = table_account->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("systemadminview", "First Name", 0));
        QTableWidgetItem *___qtablewidgetitem3 = table_account->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("systemadminview", "Middle Name", 0));
        QTableWidgetItem *___qtablewidgetitem4 = table_account->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("systemadminview", "Last Name", 0));
        QTableWidgetItem *___qtablewidgetitem5 = table_account->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("systemadminview", "Username", 0));
        QTableWidgetItem *___qtablewidgetitem6 = table_account->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("systemadminview", "Lock Status", 0));
        QTableWidgetItem *___qtablewidgetitem7 = table_account->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("systemadminview", "Assistant Admin", 0));
        Data_Pass->setText(QApplication::translate("systemadminview", "Pass Data ->", 0));
        addNewAccount->setText(QApplication::translate("systemadminview", "+", 0));
        label_8->setText(QApplication::translate("systemadminview", "Add new user account", 0));
        label_2->setText(QApplication::translate("systemadminview", "Account ID", 0));
        label->setText(QApplication::translate("systemadminview", "Employee ID", 0));
        label_3->setText(QApplication::translate("systemadminview", "First Name", 0));
        label_4->setText(QApplication::translate("systemadminview", "Middle Name", 0));
        label_5->setText(QApplication::translate("systemadminview", "Last Name", 0));
        label_6->setText(QApplication::translate("systemadminview", "User Name", 0));
        label_7->setText(QApplication::translate("systemadminview", "Password", 0));
        pushButton_resetPass->setText(QApplication::translate("systemadminview", "Reset Password", 0));
        AA_checkBox->setText(QApplication::translate("systemadminview", "Assistent Administrator", 0));
        sysadmin_checkBox->setText(QApplication::translate("systemadminview", "System Administrator", 0));
        Instructor_checkBox->setText(QApplication::translate("systemadminview", "Instructor", 0));
        TA_checkBox->setText(QApplication::translate("systemadminview", "TA", 0));
        Administractor_checkBox->setText(QApplication::translate("systemadminview", "Administractor", 0));
        block_checkBox->setText(QApplication::translate("systemadminview", "Block", 0));
        Modify_Comfirm->setText(QApplication::translate("systemadminview", "Modify", 0));
        Delete->setText(QApplication::translate("systemadminview", "Delete", 0));
        pushButton_logout->setText(QApplication::translate("systemadminview", "Logout", 0));
        Load_table->setText(QApplication::translate("systemadminview", "Load", 0));
        pushButton_ChangePass->setText(QApplication::translate("systemadminview", "Change Pass", 0));
    } // retranslateUi

};

namespace Ui {
    class systemadminview: public Ui_systemadminview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEMADMINVIEW_H
