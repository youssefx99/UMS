/********************************************************************************
** Form generated from reading UI file 'removestudent.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVESTUDENT_H
#define UI_REMOVESTUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RemoveStudent
{
public:
    QLineEdit *remID;
    QLabel *label;
    QPushButton *SRemoveButton;

    void setupUi(QDialog *RemoveStudent)
    {
        if (RemoveStudent->objectName().isEmpty())
            RemoveStudent->setObjectName("RemoveStudent");
        RemoveStudent->resize(572, 335);
        remID = new QLineEdit(RemoveStudent);
        remID->setObjectName("remID");
        remID->setGeometry(QRect(220, 80, 113, 24));
        label = new QLabel(RemoveStudent);
        label->setObjectName("label");
        label->setGeometry(QRect(88, 80, 71, 20));
        SRemoveButton = new QPushButton(RemoveStudent);
        SRemoveButton->setObjectName("SRemoveButton");
        SRemoveButton->setGeometry(QRect(390, 80, 111, 24));

        retranslateUi(RemoveStudent);

        QMetaObject::connectSlotsByName(RemoveStudent);
    } // setupUi

    void retranslateUi(QDialog *RemoveStudent)
    {
        RemoveStudent->setWindowTitle(QCoreApplication::translate("RemoveStudent", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("RemoveStudent", "Student ID", nullptr));
        SRemoveButton->setText(QCoreApplication::translate("RemoveStudent", "Remove Student", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RemoveStudent: public Ui_RemoveStudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVESTUDENT_H
