/********************************************************************************
** Form generated from reading UI file 'adminlogin.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINLOGIN_H
#define UI_ADMINLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AdminLogIn
{
public:
    QLineEdit *Username;
    QPushButton *LoginButton;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *Password;
    QPushButton *ForceLIbutton;

    void setupUi(QDialog *AdminLogIn)
    {
        if (AdminLogIn->objectName().isEmpty())
            AdminLogIn->setObjectName("AdminLogIn");
        AdminLogIn->resize(590, 413);
        Username = new QLineEdit(AdminLogIn);
        Username->setObjectName("Username");
        Username->setGeometry(QRect(220, 90, 113, 24));
        LoginButton = new QPushButton(AdminLogIn);
        LoginButton->setObjectName("LoginButton");
        LoginButton->setGeometry(QRect(230, 240, 80, 24));
        label = new QLabel(AdminLogIn);
        label->setObjectName("label");
        label->setGeometry(QRect(78, 90, 81, 20));
        label_2 = new QLabel(AdminLogIn);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(78, 150, 81, 20));
        Password = new QLineEdit(AdminLogIn);
        Password->setObjectName("Password");
        Password->setGeometry(QRect(220, 150, 113, 24));
        Password->setInputMask(QString::fromUtf8(""));
        Password->setEchoMode(QLineEdit::Password);
        ForceLIbutton = new QPushButton(AdminLogIn);
        ForceLIbutton->setObjectName("ForceLIbutton");
        ForceLIbutton->setGeometry(QRect(230, 280, 80, 24));

        retranslateUi(AdminLogIn);

        QMetaObject::connectSlotsByName(AdminLogIn);
    } // setupUi

    void retranslateUi(QDialog *AdminLogIn)
    {
        AdminLogIn->setWindowTitle(QCoreApplication::translate("AdminLogIn", "Dialog", nullptr));
        LoginButton->setText(QCoreApplication::translate("AdminLogIn", "Login", nullptr));
        label->setText(QCoreApplication::translate("AdminLogIn", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("AdminLogIn", "Password", nullptr));
        ForceLIbutton->setText(QCoreApplication::translate("AdminLogIn", "Force Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminLogIn: public Ui_AdminLogIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINLOGIN_H
