/********************************************************************************
** Form generated from reading UI file 'adminmainpage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMAINPAGE_H
#define UI_ADMINMAINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminMainPage
{
public:
    QPushButton *LogOutBTN;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *AddCoursebtn;
    QPushButton *EditCourseBTN;
    QPushButton *RemoveCourseBTN;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *AddStudentButton_2;
    QPushButton *AddStudentButton;
    QPushButton *RemoveStudentButton;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *viewCoursesOfAStudent_btn;
    QPushButton *Add_Grade_btn;
    QPushButton *pushButton;

    void setupUi(QDialog *AdminMainPage)
    {
        if (AdminMainPage->objectName().isEmpty())
            AdminMainPage->setObjectName("AdminMainPage");
        AdminMainPage->resize(665, 418);
        LogOutBTN = new QPushButton(AdminMainPage);
        LogOutBTN->setObjectName("LogOutBTN");
        LogOutBTN->setGeometry(QRect(260, 300, 75, 24));
        layoutWidget = new QWidget(AdminMainPage);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 70, 181, 215));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        AddCoursebtn = new QPushButton(layoutWidget);
        AddCoursebtn->setObjectName("AddCoursebtn");

        verticalLayout_2->addWidget(AddCoursebtn);

        EditCourseBTN = new QPushButton(layoutWidget);
        EditCourseBTN->setObjectName("EditCourseBTN");

        verticalLayout_2->addWidget(EditCourseBTN);

        RemoveCourseBTN = new QPushButton(layoutWidget);
        RemoveCourseBTN->setObjectName("RemoveCourseBTN");

        verticalLayout_2->addWidget(RemoveCourseBTN);


        horizontalLayout->addLayout(verticalLayout_2);

        widget = new QWidget(AdminMainPage);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(230, 70, 191, 211));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        AddStudentButton_2 = new QPushButton(widget);
        AddStudentButton_2->setObjectName("AddStudentButton_2");

        verticalLayout->addWidget(AddStudentButton_2);

        AddStudentButton = new QPushButton(widget);
        AddStudentButton->setObjectName("AddStudentButton");

        verticalLayout->addWidget(AddStudentButton);

        RemoveStudentButton = new QPushButton(widget);
        RemoveStudentButton->setObjectName("RemoveStudentButton");

        verticalLayout->addWidget(RemoveStudentButton);

        layoutWidget_2 = new QWidget(AdminMainPage);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(450, 70, 207, 211));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        viewCoursesOfAStudent_btn = new QPushButton(layoutWidget_2);
        viewCoursesOfAStudent_btn->setObjectName("viewCoursesOfAStudent_btn");

        verticalLayout_3->addWidget(viewCoursesOfAStudent_btn);

        Add_Grade_btn = new QPushButton(layoutWidget_2);
        Add_Grade_btn->setObjectName("Add_Grade_btn");

        verticalLayout_3->addWidget(Add_Grade_btn);

        pushButton = new QPushButton(layoutWidget_2);
        pushButton->setObjectName("pushButton");

        verticalLayout_3->addWidget(pushButton);


        retranslateUi(AdminMainPage);

        QMetaObject::connectSlotsByName(AdminMainPage);
    } // setupUi

    void retranslateUi(QDialog *AdminMainPage)
    {
        AdminMainPage->setWindowTitle(QCoreApplication::translate("AdminMainPage", "Dialog", nullptr));
        LogOutBTN->setText(QCoreApplication::translate("AdminMainPage", "Log Out", nullptr));
        AddCoursebtn->setText(QCoreApplication::translate("AdminMainPage", "Add Course", nullptr));
        EditCourseBTN->setText(QCoreApplication::translate("AdminMainPage", "Edit Course", nullptr));
        RemoveCourseBTN->setText(QCoreApplication::translate("AdminMainPage", "Remove Course", nullptr));
        AddStudentButton_2->setText(QCoreApplication::translate("AdminMainPage", "Add New Student", nullptr));
        AddStudentButton->setText(QCoreApplication::translate("AdminMainPage", "Add Transfer Student", nullptr));
        RemoveStudentButton->setText(QCoreApplication::translate("AdminMainPage", "Remove Student", nullptr));
        viewCoursesOfAStudent_btn->setText(QCoreApplication::translate("AdminMainPage", "View All Courses Of a Student", nullptr));
        Add_Grade_btn->setText(QCoreApplication::translate("AdminMainPage", "Add_Grades_Student", nullptr));
        pushButton->setText(QCoreApplication::translate("AdminMainPage", "View Students in a Course", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminMainPage: public Ui_AdminMainPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMAINPAGE_H
