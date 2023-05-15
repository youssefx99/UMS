#pragma once
#include "adminmainpage.h"
#include "ui_adminmainpage.h"
#include "addTransStudent.h"
#include "removestudent.h"
#include "addcourse.h"
#include "removecourse.h"
#include "courseedit.h"
#include "add_new_student.h"
#include "mainwindow.h"
#include "viewstudentsinacourse.h"
#include "viewcoursesofastudent.h"
#include "addgradesforstudent.h"

AdminMainPage::AdminMainPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminMainPage)
{
    ui->setupUi(this);
}

AdminMainPage::~AdminMainPage()
{
    delete ui;
}

void AdminMainPage::on_AddStudentButton_clicked()
{

    AddNewStudent ANS;
    ANS.setModal(true);
    ANS.exec();
}


void AdminMainPage::on_RemoveStudentButton_clicked()
{
    RemoveStudent RS;
    RS.setModal(true);
    RS.exec();
}


void AdminMainPage::on_AddCoursebtn_clicked()
{
    AddCourse AC;
    AC.setModal(true);
    AC.exec();
}




void AdminMainPage::on_RemoveCourseBTN_clicked()
{
    RemoveCourse RC;
    RC.setModal(true);
    RC.exec();
}


void AdminMainPage::on_EditCourseBTN_clicked()
{
    CourseEdit CE;
    CE.setModal(true);
    CE.exec();
}


void AdminMainPage::on_AddStudentButton_2_clicked()
{
    Add_New_Student ANS;
    ANS.setModal(true);
    ANS.exec();
}


void AdminMainPage::on_LogOutBTN_clicked()
{
    MainWindow MW;
    this->close();
    MW.show();
}


void AdminMainPage::on_viewCoursesOfAStudent_btn_clicked()
{
    viewstudentsinacourse viewstud;
    viewstud.setModal(true);
    viewstud.exec();

}


void AdminMainPage::on_pushButton_clicked()
{
    viewcoursesofastudent viewCoursesOfAStudent;
    viewCoursesOfAStudent.setModal(true);
    viewCoursesOfAStudent.exec();
}


void AdminMainPage::on_Add_Grade_btn_clicked()
{
    AddGradesForStudent addgrade;
    addgrade.setModal(true);
    addgrade.exec();
}

