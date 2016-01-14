/********************************************************************************
** Form generated from reading UI file 'marker.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MARKER_H
#define UI_MARKER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_marker
{
public:
    QPushButton *pushButton_logout;
    QLabel *label_receiveData;
    QPushButton *pushButton_back;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_status;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_Generate;
    QComboBox *Course_comboBox;
    QLabel *label_receiveData2;
    QLabel *label_staus;
    QTableWidget *tableWidget_activites;

    void setupUi(QDialog *marker)
    {
        if (marker->objectName().isEmpty())
            marker->setObjectName(QStringLiteral("marker"));
        marker->resize(600, 482);
        pushButton_logout = new QPushButton(marker);
        pushButton_logout->setObjectName(QStringLiteral("pushButton_logout"));
        pushButton_logout->setGeometry(QRect(50, 10, 75, 23));
        label_receiveData = new QLabel(marker);
        label_receiveData->setObjectName(QStringLiteral("label_receiveData"));
        label_receiveData->setGeometry(QRect(220, 20, 211, 16));
        pushButton_back = new QPushButton(marker);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(50, 40, 75, 23));
        layoutWidget = new QWidget(marker);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(150, 10, 63, 34));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_status = new QLabel(marker);
        label_status->setObjectName(QStringLiteral("label_status"));
        label_status->setGeometry(QRect(60, 450, 141, 21));
        layoutWidget_2 = new QWidget(marker);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(140, 70, 381, 61));
        gridLayout = new QGridLayout(layoutWidget_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setPointSize(10);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        pushButton_Generate = new QPushButton(layoutWidget_2);
        pushButton_Generate->setObjectName(QStringLiteral("pushButton_Generate"));

        gridLayout->addWidget(pushButton_Generate, 1, 2, 1, 1);

        Course_comboBox = new QComboBox(layoutWidget_2);
        Course_comboBox->setObjectName(QStringLiteral("Course_comboBox"));

        gridLayout->addWidget(Course_comboBox, 1, 1, 1, 1);

        label_receiveData2 = new QLabel(layoutWidget_2);
        label_receiveData2->setObjectName(QStringLiteral("label_receiveData2"));

        gridLayout->addWidget(label_receiveData2, 0, 1, 1, 1);

        label_staus = new QLabel(marker);
        label_staus->setObjectName(QStringLiteral("label_staus"));
        label_staus->setGeometry(QRect(140, 415, 281, 21));
        QFont font1;
        font1.setItalic(true);
        label_staus->setFont(font1);
        tableWidget_activites = new QTableWidget(marker);
        if (tableWidget_activites->columnCount() < 2)
            tableWidget_activites->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_activites->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_activites->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget_activites->setObjectName(QStringLiteral("tableWidget_activites"));
        tableWidget_activites->setGeometry(QRect(140, 150, 381, 251));

        retranslateUi(marker);

        QMetaObject::connectSlotsByName(marker);
    } // setupUi

    void retranslateUi(QDialog *marker)
    {
        marker->setWindowTitle(QApplication::translate("marker", "Dialog", 0));
        pushButton_logout->setText(QApplication::translate("marker", "Logout", 0));
        label_receiveData->setText(QApplication::translate("marker", "...", 0));
        pushButton_back->setText(QApplication::translate("marker", "Back", 0));
        label->setText(QApplication::translate("marker", "Marking as: ", 0));
        label_status->setText(QApplication::translate("marker", "status", 0));
        label_2->setText(QApplication::translate("marker", "Employee ID", 0));
        label_3->setText(QApplication::translate("marker", "Course ID", 0));
        pushButton_Generate->setText(QApplication::translate("marker", "Generate Activities", 0));
        label_receiveData2->setText(QApplication::translate("marker", "...", 0));
        label_staus->setText(QApplication::translate("marker", "Current Status", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_activites->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("marker", "Name of Activity", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_activites->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("marker", "Activity Type", 0));
    } // retranslateUi

};

namespace Ui {
    class marker: public Ui_marker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MARKER_H
