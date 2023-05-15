/********************************************************************************
** Form generated from reading UI file 'addgradesforstudent.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDGRADESFORSTUDENT_H
#define UI_ADDGRADESFORSTUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddGradesForStudent
{
public:
    QComboBox *Student_Name;
    QLineEdit *grade;
    QComboBox *Course_Name;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *Add_Grade;
    QPushButton *select_course;
    QLineEdit *Student_Id;
    QLabel *label_4;

    void setupUi(QDialog *AddGradesForStudent)
    {
        if (AddGradesForStudent->objectName().isEmpty())
            AddGradesForStudent->setObjectName("AddGradesForStudent");
        AddGradesForStudent->resize(639, 493);
        Student_Name = new QComboBox(AddGradesForStudent);
        Student_Name->setObjectName("Student_Name");
        Student_Name->setGeometry(QRect(70, 60, 191, 28));
        grade = new QLineEdit(AddGradesForStudent);
        grade->setObjectName("grade");
        grade->setGeometry(QRect(210, 290, 151, 28));
        Course_Name = new QComboBox(AddGradesForStudent);
        Course_Name->setObjectName("Course_Name");
        Course_Name->setGeometry(QRect(90, 170, 191, 28));
        label = new QLabel(AddGradesForStudent);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 30, 111, 20));
        label_2 = new QLabel(AddGradesForStudent);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(140, 140, 111, 20));
        label_3 = new QLabel(AddGradesForStudent);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(250, 260, 81, 20));
        Add_Grade = new QPushButton(AddGradesForStudent);
        Add_Grade->setObjectName("Add_Grade");
        Add_Grade->setGeometry(QRect(240, 380, 111, 29));
        select_course = new QPushButton(AddGradesForStudent);
        select_course->setObjectName("select_course");
        select_course->setGeometry(QRect(350, 60, 101, 29));
        Student_Id = new QLineEdit(AddGradesForStudent);
        Student_Id->setObjectName("Student_Id");
        Student_Id->setGeometry(QRect(380, 170, 151, 28));
        label_4 = new QLabel(AddGradesForStudent);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(420, 140, 81, 20));

        retranslateUi(AddGradesForStudent);

        QMetaObject::connectSlotsByName(AddGradesForStudent);
    } // setupUi

    void retranslateUi(QDialog *AddGradesForStudent)
    {
        AddGradesForStudent->setWindowTitle(QCoreApplication::translate("AddGradesForStudent", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddGradesForStudent", "Student_Name", nullptr));
        label_2->setText(QCoreApplication::translate("AddGradesForStudent", "Select course", nullptr));
        label_3->setText(QCoreApplication::translate("AddGradesForStudent", "Add Grade", nullptr));
        Add_Grade->setText(QCoreApplication::translate("AddGradesForStudent", "Add", nullptr));
        select_course->setText(QCoreApplication::translate("AddGradesForStudent", "select", nullptr));
        label_4->setText(QCoreApplication::translate("AddGradesForStudent", "Student_ID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddGradesForStudent: public Ui_AddGradesForStudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDGRADESFORSTUDENT_H
