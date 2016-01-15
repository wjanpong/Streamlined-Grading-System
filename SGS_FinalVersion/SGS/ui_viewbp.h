/********************************************************************************
** Form generated from reading UI file 'viewbp.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWBP_H
#define UI_VIEWBP_H

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

class Ui_ViewBP
{
public:
    QTableWidget *show_BP;
    QPushButton *pushButton_displayBP;
    QLabel *label_activityId;
    QPushButton *pushButton_create;
    QPushButton *pushButton_Modify;
    QPushButton *pushButton_Delete;

    void setupUi(QDialog *ViewBP)
    {
        if (ViewBP->objectName().isEmpty())
            ViewBP->setObjectName(QStringLiteral("ViewBP"));
        ViewBP->resize(805, 283);
        show_BP = new QTableWidget(ViewBP);
        if (show_BP->columnCount() < 5)
            show_BP->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        show_BP->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        show_BP->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        show_BP->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        show_BP->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        show_BP->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        show_BP->setObjectName(QStringLiteral("show_BP"));
        show_BP->setGeometry(QRect(30, 80, 571, 192));
        show_BP->setSelectionMode(QAbstractItemView::SingleSelection);
        show_BP->setSelectionBehavior(QAbstractItemView::SelectRows);
        pushButton_displayBP = new QPushButton(ViewBP);
        pushButton_displayBP->setObjectName(QStringLiteral("pushButton_displayBP"));
        pushButton_displayBP->setGeometry(QRect(40, 50, 75, 23));
        label_activityId = new QLabel(ViewBP);
        label_activityId->setObjectName(QStringLiteral("label_activityId"));
        label_activityId->setGeometry(QRect(130, 53, 61, 16));
        pushButton_create = new QPushButton(ViewBP);
        pushButton_create->setObjectName(QStringLiteral("pushButton_create"));
        pushButton_create->setGeometry(QRect(610, 80, 75, 23));
        pushButton_Modify = new QPushButton(ViewBP);
        pushButton_Modify->setObjectName(QStringLiteral("pushButton_Modify"));
        pushButton_Modify->setGeometry(QRect(610, 120, 75, 23));
        pushButton_Delete = new QPushButton(ViewBP);
        pushButton_Delete->setObjectName(QStringLiteral("pushButton_Delete"));
        pushButton_Delete->setGeometry(QRect(610, 160, 75, 23));

        retranslateUi(ViewBP);

        QMetaObject::connectSlotsByName(ViewBP);
    } // setupUi

    void retranslateUi(QDialog *ViewBP)
    {
        ViewBP->setWindowTitle(QApplication::translate("ViewBP", "Dialog", 0));
        QTableWidgetItem *___qtablewidgetitem = show_BP->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ViewBP", "type", 0));
        QTableWidgetItem *___qtablewidgetitem1 = show_BP->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ViewBP", "bonusPenaltyID", 0));
        QTableWidgetItem *___qtablewidgetitem2 = show_BP->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ViewBP", "bonusPenaltyTypeID", 0));
        QTableWidgetItem *___qtablewidgetitem3 = show_BP->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ViewBP", "hour_time", 0));
        QTableWidgetItem *___qtablewidgetitem4 = show_BP->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("ViewBP", "amount", 0));
        pushButton_displayBP->setText(QApplication::translate("ViewBP", "Display", 0));
        label_activityId->setText(QApplication::translate("ViewBP", "ActivityID", 0));
        pushButton_create->setText(QApplication::translate("ViewBP", "Create", 0));
        pushButton_Modify->setText(QApplication::translate("ViewBP", "Modify", 0));
        pushButton_Delete->setText(QApplication::translate("ViewBP", "Delete", 0));
    } // retranslateUi

};

namespace Ui {
    class ViewBP: public Ui_ViewBP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWBP_H
