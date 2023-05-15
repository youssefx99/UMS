/********************************************************************************
** Form generated from reading UI file 'editstudentdata.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITSTUDENTDATA_H
#define UI_EDITSTUDENTDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_editStudentData
{
public:
    QLineEdit *StudName;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *StudPass;
    QPushButton *ChangeDataBTN;

    void setupUi(QDialog *editStudentData)
    {
        if (editStudentData->objectName().isEmpty())
            editStudentData->setObjectName("editStudentData");
        editStudentData->resize(686, 485);
        StudName = new QLineEdit(editStudentData);
        StudName->setObjectName("StudName");
        StudName->setGeometry(QRect(300, 160, 113, 24));
        label = new QLabel(editStudentData);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 160, 49, 16));
        label_2 = new QLabel(editStudentData);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(190, 230, 49, 16));
        StudPass = new QLineEdit(editStudentData);
        StudPass->setObjectName("StudPass");
        StudPass->setGeometry(QRect(300, 230, 113, 24));
        ChangeDataBTN = new QPushButton(editStudentData);
        ChangeDataBTN->setObjectName("ChangeDataBTN");
        ChangeDataBTN->setGeometry(QRect(290, 340, 80, 24));

        retranslateUi(editStudentData);

        QMetaObject::connectSlotsByName(editStudentData);
    } // setupUi

    void retranslateUi(QDialog *editStudentData)
    {
        editStudentData->setWindowTitle(QCoreApplication::translate("editStudentData", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("editStudentData", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("editStudentData", "Password", nullptr));
        ChangeDataBTN->setText(QCoreApplication::translate("editStudentData", "Change Data", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editStudentData: public Ui_editStudentData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITSTUDENTDATA_H
