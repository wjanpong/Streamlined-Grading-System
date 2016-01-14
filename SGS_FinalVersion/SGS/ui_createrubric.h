/********************************************************************************
** Form generated from reading UI file 'createrubric.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATERUBRIC_H
#define UI_CREATERUBRIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_createRubric
{
public:
    QPushButton *pushButton_createRubric;
    QTextEdit *textEdit_descriptionRubric;
    QLabel *label;
    QLineEdit *lineEdit_maxRubricPoint;
    QLabel *label_activityId;
    QSpinBox *spinBox_RubricNum;
    QLabel *label_6;
    QLabel *label_9;
    QLineEdit *intRubicId;
    QLabel *label_15;
    QLabel *label_11;

    void setupUi(QDialog *createRubric)
    {
        if (createRubric->objectName().isEmpty())
            createRubric->setObjectName(QStringLiteral("createRubric"));
        createRubric->resize(537, 394);
        pushButton_createRubric = new QPushButton(createRubric);
        pushButton_createRubric->setObjectName(QStringLiteral("pushButton_createRubric"));
        pushButton_createRubric->setGeometry(QRect(370, 310, 101, 23));
        textEdit_descriptionRubric = new QTextEdit(createRubric);
        textEdit_descriptionRubric->setObjectName(QStringLiteral("textEdit_descriptionRubric"));
        textEdit_descriptionRubric->setGeometry(QRect(200, 170, 271, 71));
        label = new QLabel(createRubric);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 50, 61, 16));
        lineEdit_maxRubricPoint = new QLineEdit(createRubric);
        lineEdit_maxRubricPoint->setObjectName(QStringLiteral("lineEdit_maxRubricPoint"));
        lineEdit_maxRubricPoint->setGeometry(QRect(200, 260, 71, 20));
        label_activityId = new QLabel(createRubric);
        label_activityId->setObjectName(QStringLiteral("label_activityId"));
        label_activityId->setGeometry(QRect(200, 50, 47, 13));
        spinBox_RubricNum = new QSpinBox(createRubric);
        spinBox_RubricNum->setObjectName(QStringLiteral("spinBox_RubricNum"));
        spinBox_RubricNum->setGeometry(QRect(200, 130, 42, 22));
        label_6 = new QLabel(createRubric);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(60, 130, 111, 16));
        label_9 = new QLabel(createRubric);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 170, 151, 16));
        intRubicId = new QLineEdit(createRubric);
        intRubicId->setObjectName(QStringLiteral("intRubicId"));
        intRubicId->setGeometry(QRect(200, 90, 113, 20));
        label_15 = new QLabel(createRubric);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(100, 90, 61, 16));
        label_11 = new QLabel(createRubric);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(40, 260, 151, 16));

        retranslateUi(createRubric);

        QMetaObject::connectSlotsByName(createRubric);
    } // setupUi

    void retranslateUi(QDialog *createRubric)
    {
        createRubric->setWindowTitle(QApplication::translate("createRubric", "Dialog", 0));
        pushButton_createRubric->setText(QApplication::translate("createRubric", "Create", 0));
        label->setText(QApplication::translate("createRubric", "Activity Id :", 0));
        label_activityId->setText(QApplication::translate("createRubric", "TextLabel", 0));
        label_6->setText(QApplication::translate("createRubric", "*Rubric Item Number :", 0));
        label_9->setText(QApplication::translate("createRubric", "*Description list of each item :", 0));
        label_15->setText(QApplication::translate("createRubric", "*Rubric Id :", 0));
        label_11->setText(QApplication::translate("createRubric", "*Maximum points of each item :", 0));
    } // retranslateUi

};

namespace Ui {
    class createRubric: public Ui_createRubric {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATERUBRIC_H
