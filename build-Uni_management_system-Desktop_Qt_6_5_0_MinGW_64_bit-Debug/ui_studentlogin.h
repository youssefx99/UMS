/********************************************************************************
** Form generated from reading UI file 'studentlogin.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTLOGIN_H
#define UI_STUDENTLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentLogIn
{
public:
    QLineEdit *EmailTXT;
    QLineEdit *PasswordTXT;
    QPushButton *LoginButton;
    QLabel *label;
    QLabel *label_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *Identifier;
    QPushButton *ForceLIbutton;
    QLabel *label_3;

    void setupUi(QDialog *StudentLogIn)
    {
        if (StudentLogIn->objectName().isEmpty())
            StudentLogIn->setObjectName("StudentLogIn");
        StudentLogIn->resize(598, 444);
        EmailTXT = new QLineEdit(StudentLogIn);
        EmailTXT->setObjectName("EmailTXT");
        EmailTXT->setGeometry(QRect(260, 70, 113, 24));
        PasswordTXT = new QLineEdit(StudentLogIn);
        PasswordTXT->setObjectName("PasswordTXT");
        PasswordTXT->setGeometry(QRect(260, 180, 113, 24));
        PasswordTXT->setEchoMode(QLineEdit::Password);
        LoginButton = new QPushButton(StudentLogIn);
        LoginButton->setObjectName("LoginButton");
        LoginButton->setGeometry(QRect(270, 280, 80, 24));
        label = new QLabel(StudentLogIn);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 70, 49, 16));
        label_2 = new QLabel(StudentLogIn);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 180, 49, 16));
        layoutWidget = new QWidget(StudentLogIn);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 340, 161, 78));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Identifier = new QLineEdit(layoutWidget);
        Identifier->setObjectName("Identifier");

        verticalLayout->addWidget(Identifier);

        ForceLIbutton = new QPushButton(layoutWidget);
        ForceLIbutton->setObjectName("ForceLIbutton");

        verticalLayout->addWidget(ForceLIbutton);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);


        retranslateUi(StudentLogIn);

        QMetaObject::connectSlotsByName(StudentLogIn);
    } // setupUi

    void retranslateUi(QDialog *StudentLogIn)
    {
        StudentLogIn->setWindowTitle(QCoreApplication::translate("StudentLogIn", "Dialog", nullptr));
        LoginButton->setText(QCoreApplication::translate("StudentLogIn", "Log-In", nullptr));
        label->setText(QCoreApplication::translate("StudentLogIn", "E-Mail", nullptr));
        label_2->setText(QCoreApplication::translate("StudentLogIn", "Password", nullptr));
        ForceLIbutton->setText(QCoreApplication::translate("StudentLogIn", "Force Log in", nullptr));
        label_3->setText(QCoreApplication::translate("StudentLogIn", "Enter last 2 digits of student id", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentLogIn: public Ui_StudentLogIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTLOGIN_H
