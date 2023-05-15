/********************************************************************************
** Form generated from reading UI file 'add_new_student.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_NEW_STUDENT_H
#define UI_ADD_NEW_STUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Add_New_Student
{
public:
    QPushButton *AddStudBTN;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *StudName;

    void setupUi(QDialog *Add_New_Student)
    {
        if (Add_New_Student->objectName().isEmpty())
            Add_New_Student->setObjectName("Add_New_Student");
        Add_New_Student->resize(400, 300);
        AddStudBTN = new QPushButton(Add_New_Student);
        AddStudBTN->setObjectName("AddStudBTN");
        AddStudBTN->setGeometry(QRect(140, 200, 81, 24));
        widget = new QWidget(Add_New_Student);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(78, 80, 217, 24));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        StudName = new QLineEdit(widget);
        StudName->setObjectName("StudName");

        horizontalLayout->addWidget(StudName);


        retranslateUi(Add_New_Student);

        QMetaObject::connectSlotsByName(Add_New_Student);
    } // setupUi

    void retranslateUi(QDialog *Add_New_Student)
    {
        Add_New_Student->setWindowTitle(QCoreApplication::translate("Add_New_Student", "Dialog", nullptr));
        AddStudBTN->setText(QCoreApplication::translate("Add_New_Student", "Add Student", nullptr));
        label->setText(QCoreApplication::translate("Add_New_Student", "Student Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add_New_Student: public Ui_Add_New_Student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_NEW_STUDENT_H
