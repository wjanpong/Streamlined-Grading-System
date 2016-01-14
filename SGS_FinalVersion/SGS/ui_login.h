/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralWidget;
    QLabel *label_status;
    QPushButton *pushButton_Login;
    QLabel *label_loginCount;
    QLabel *label_timeout;
    QLabel *label_username_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_username;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(557, 347);
        centralWidget = new QWidget(Login);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_status = new QLabel(centralWidget);
        label_status->setObjectName(QStringLiteral("label_status"));
        label_status->setGeometry(QRect(50, 260, 181, 21));
        pushButton_Login = new QPushButton(centralWidget);
        pushButton_Login->setObjectName(QStringLiteral("pushButton_Login"));
        pushButton_Login->setGeometry(QRect(414, 252, 101, 41));
        label_loginCount = new QLabel(centralWidget);
        label_loginCount->setObjectName(QStringLiteral("label_loginCount"));
        label_loginCount->setGeometry(QRect(149, 199, 291, 21));
        label_timeout = new QLabel(centralWidget);
        label_timeout->setObjectName(QStringLiteral("label_timeout"));
        label_timeout->setGeometry(QRect(175, 99, 151, 21));
        label_username_2 = new QLabel(centralWidget);
        label_username_2->setObjectName(QStringLiteral("label_username_2"));
        label_username_2->setGeometry(QRect(90, 50, 391, 51));
        QFont font;
        font.setPointSize(20);
        label_username_2->setFont(font);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(150, 130, 220, 50));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_username = new QLabel(layoutWidget);
        label_username->setObjectName(QStringLiteral("label_username"));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label_username->setFont(font1);

        verticalLayout_2->addWidget(label_username);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font1);

        verticalLayout_2->addWidget(label);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEdit_username = new QLineEdit(layoutWidget);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));

        verticalLayout->addWidget(lineEdit_username);

        lineEdit_password = new QLineEdit(layoutWidget);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineEdit_password);


        horizontalLayout->addLayout(verticalLayout);

        Login->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Login);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 557, 21));
        Login->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Login);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Login->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Login);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Login->setStatusBar(statusBar);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Login", 0));
        label_status->setText(QApplication::translate("Login", ".....", 0));
        pushButton_Login->setText(QApplication::translate("Login", "Login", 0));
        label_loginCount->setText(QString());
        label_timeout->setText(QString());
        label_username_2->setText(QApplication::translate("Login", "SGS --Team DataBosses V3rsion", 0));
        label_username->setText(QApplication::translate("Login", "Username", 0));
        label->setText(QApplication::translate("Login", "Password", 0));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
