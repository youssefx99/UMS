/********************************************************************************
** Form generated from reading UI file 'addTransStudent.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTRANSSTUDENT_H
#define UI_ADDTRANSSTUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddNewStudent
{
public:
    QLineEdit *NameTXT;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *LevelTXT;
    QLabel *label_3;
    QLineEdit *FcoursesTXT;
    QLabel *label_4;
    QLineEdit *GPATXT;
    QPushButton *insertStudentToMapButton;
    QLabel *label_5;

    void setupUi(QDialog *AddNewStudent)
    {
        if (AddNewStudent->objectName().isEmpty())
            AddNewStudent->setObjectName("AddNewStudent");
        AddNewStudent->resize(582, 409);
        NameTXT = new QLineEdit(AddNewStudent);
        NameTXT->setObjectName("NameTXT");
        NameTXT->setGeometry(QRect(260, 70, 113, 24));
        label = new QLabel(AddNewStudent);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 70, 49, 16));
        label_2 = new QLabel(AddNewStudent);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(170, 130, 49, 16));
        LevelTXT = new QLineEdit(AddNewStudent);
        LevelTXT->setObjectName("LevelTXT");
        LevelTXT->setGeometry(QRect(260, 130, 113, 24));
        label_3 = new QLabel(AddNewStudent);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(48, 290, 91, 20));
        FcoursesTXT = new QLineEdit(AddNewStudent);
        FcoursesTXT->setObjectName("FcoursesTXT");
        FcoursesTXT->setGeometry(QRect(180, 290, 321, 31));
        label_4 = new QLabel(AddNewStudent);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(170, 200, 49, 16));
        GPATXT = new QLineEdit(AddNewStudent);
        GPATXT->setObjectName("GPATXT");
        GPATXT->setGeometry(QRect(260, 200, 113, 24));
        insertStudentToMapButton = new QPushButton(AddNewStudent);
        insertStudentToMapButton->setObjectName("insertStudentToMapButton");
        insertStudentToMapButton->setGeometry(QRect(260, 340, 80, 24));
        label_5 = new QLabel(AddNewStudent);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(250, 260, 181, 16));

        retranslateUi(AddNewStudent);

        QMetaObject::connectSlotsByName(AddNewStudent);
    } // setupUi

    void retranslateUi(QDialog *AddNewStudent)
    {
        AddNewStudent->setWindowTitle(QCoreApplication::translate("AddNewStudent", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddNewStudent", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("AddNewStudent", "Level", nullptr));
        label_3->setText(QCoreApplication::translate("AddNewStudent", "finished courses", nullptr));
        label_4->setText(QCoreApplication::translate("AddNewStudent", "GPA", nullptr));
        insertStudentToMapButton->setText(QCoreApplication::translate("AddNewStudent", "Add Student", nullptr));
        label_5->setText(QCoreApplication::translate("AddNewStudent", "Enter comma separated courses", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddNewStudent: public Ui_AddNewStudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTRANSSTUDENT_H
