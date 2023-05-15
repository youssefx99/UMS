/********************************************************************************
** Form generated from reading UI file 'registercourse.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERCOURSE_H
#define UI_REGISTERCOURSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RegisterCourse
{
public:
    QListWidget *Available;
    QListWidget *Selected;
    QPushButton *Add;
    QPushButton *Remove;
    QPushButton *submit;

    void setupUi(QDialog *RegisterCourse)
    {
        if (RegisterCourse->objectName().isEmpty())
            RegisterCourse->setObjectName("RegisterCourse");
        RegisterCourse->resize(567, 366);
        Available = new QListWidget(RegisterCourse);
        Available->setObjectName("Available");
        Available->setGeometry(QRect(50, 70, 181, 192));
        Selected = new QListWidget(RegisterCourse);
        Selected->setObjectName("Selected");
        Selected->setGeometry(QRect(350, 70, 181, 192));
        Add = new QPushButton(RegisterCourse);
        Add->setObjectName("Add");
        Add->setGeometry(QRect(250, 130, 80, 24));
        Remove = new QPushButton(RegisterCourse);
        Remove->setObjectName("Remove");
        Remove->setGeometry(QRect(250, 190, 81, 24));
        submit = new QPushButton(RegisterCourse);
        submit->setObjectName("submit");
        submit->setGeometry(QRect(240, 320, 80, 24));

        retranslateUi(RegisterCourse);

        QMetaObject::connectSlotsByName(RegisterCourse);
    } // setupUi

    void retranslateUi(QDialog *RegisterCourse)
    {
        RegisterCourse->setWindowTitle(QCoreApplication::translate("RegisterCourse", "Dialog", nullptr));
        Add->setText(QCoreApplication::translate("RegisterCourse", "Add ->", nullptr));
        Remove->setText(QCoreApplication::translate("RegisterCourse", "<- Remove", nullptr));
        submit->setText(QCoreApplication::translate("RegisterCourse", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterCourse: public Ui_RegisterCourse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERCOURSE_H
