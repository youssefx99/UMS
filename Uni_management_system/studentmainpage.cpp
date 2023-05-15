#include "studentmainpage.h"
#include "ui_studentmainpage.h"
#include "registercourse.h"
#include "mainwindow.h"
#include "editstudentdata.h"
#include "viewregistercourses.h"
#include "viewcourses.h"
#include "viewcoursedetails.h"
#include "viewcoursesgrades.h"

StudentMainPage::StudentMainPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StudentMainPage)
{
    ui->setupUi(this);
}

StudentMainPage::~StudentMainPage()
{
    delete ui;
}

void StudentMainPage::on_ViewCourses_clicked()
{
    ViewCourses VC;
    VC.setModal(true);
    VC.exec();
}


void StudentMainPage::on_RegCourse_clicked()
{
    registercourse rc;
    rc.setModal(true);
    rc.exec();
}


void StudentMainPage::on_LogOutBTN_clicked()
{
    this->close();
    MainWindow MW;
    MW.show();
}


void StudentMainPage::on_EditDataBTN_clicked()
{
    editStudentData EDS;
    EDS.setModal(true);
    EDS.exec();
}


void StudentMainPage::on_ViewRegCourses_clicked()
{
    viewRegisterCourses VRC;
    VRC.setModal(true);
    VRC.exec();
}


void StudentMainPage::on_VeiwCourseDet_clicked()
{
    viewCourseDetails VCD;
    VCD.setModal(true);
    VCD.exec();
}


void StudentMainPage::on_viewcoursesgrades_clicked()
{
    viewcoursesgrades VCG;
    VCG.setModal(true);
    VCG.exec();
}

