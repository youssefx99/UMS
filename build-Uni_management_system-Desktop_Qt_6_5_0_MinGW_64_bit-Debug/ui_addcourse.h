/********************************************************************************
** Form generated from reading UI file 'addcourse.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCOURSE_H
#define UI_ADDCOURSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_AddCourse
{
public:
    QRadioButton *Croe;
    QLineEdit *Cname;
    QLineEdit *Ccode;
    QLineEdit *CmaxStuds;
    QLineEdit *Chours;
    QLineEdit *CpreReqs;
    QLineEdit *Cinst;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *AddCourseButton;
    QLabel *label_8;
    QLineEdit *LevelTXT;

    void setupUi(QDialog *AddCourse)
    {
        if (AddCourse->objectName().isEmpty())
            AddCourse->setObjectName("AddCourse");
        AddCourse->resize(632, 382);
        Croe = new QRadioButton(AddCourse);
        Croe->setObjectName("Croe");
        Croe->setGeometry(QRect(370, 40, 91, 22));
        Cname = new QLineEdit(AddCourse);
        Cname->setObjectName("Cname");
        Cname->setGeometry(QRect(190, 40, 113, 24));
        Ccode = new QLineEdit(AddCourse);
        Ccode->setObjectName("Ccode");
        Ccode->setGeometry(QRect(190, 80, 113, 24));
        CmaxStuds = new QLineEdit(AddCourse);
        CmaxStuds->setObjectName("CmaxStuds");
        CmaxStuds->setGeometry(QRect(192, 120, 113, 24));
        Chours = new QLineEdit(AddCourse);
        Chours->setObjectName("Chours");
        Chours->setGeometry(QRect(192, 170, 113, 24));
        CpreReqs = new QLineEdit(AddCourse);
        CpreReqs->setObjectName("CpreReqs");
        CpreReqs->setGeometry(QRect(182, 290, 271, 24));
        Cinst = new QLineEdit(AddCourse);
        Cinst->setObjectName("Cinst");
        Cinst->setGeometry(QRect(192, 200, 113, 24));
        label = new QLabel(AddCourse);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 50, 49, 16));
        label_2 = new QLabel(AddCourse);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 90, 31, 16));
        label_4 = new QLabel(AddCourse);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(52, 130, 71, 20));
        label_5 = new QLabel(AddCourse);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(72, 170, 49, 16));
        label_6 = new QLabel(AddCourse);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(50, 290, 71, 20));
        label_7 = new QLabel(AddCourse);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(60, 210, 61, 20));
        AddCourseButton = new QPushButton(AddCourse);
        AddCourseButton->setObjectName("AddCourseButton");
        AddCourseButton->setGeometry(QRect(210, 350, 80, 24));
        label_8 = new QLabel(AddCourse);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(70, 250, 49, 16));
        LevelTXT = new QLineEdit(AddCourse);
        LevelTXT->setObjectName("LevelTXT");
        LevelTXT->setGeometry(QRect(190, 250, 113, 24));

        retranslateUi(AddCourse);

        QMetaObject::connectSlotsByName(AddCourse);
    } // setupUi

    void retranslateUi(QDialog *AddCourse)
    {
        AddCourse->setWindowTitle(QCoreApplication::translate("AddCourse", "Dialog", nullptr));
        Croe->setText(QCoreApplication::translate("AddCourse", "Required", nullptr));
        label->setText(QCoreApplication::translate("AddCourse", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("AddCourse", "Code", nullptr));
        label_4->setText(QCoreApplication::translate("AddCourse", "Max Students", nullptr));
        label_5->setText(QCoreApplication::translate("AddCourse", "Hours", nullptr));
        label_6->setText(QCoreApplication::translate("AddCourse", "Pre Requisits", nullptr));
        label_7->setText(QCoreApplication::translate("AddCourse", "Instructor", nullptr));
        AddCourseButton->setText(QCoreApplication::translate("AddCourse", "Add Course", nullptr));
        label_8->setText(QCoreApplication::translate("AddCourse", "Level", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddCourse: public Ui_AddCourse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCOURSE_H
