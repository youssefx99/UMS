#include "viewcoursesofastudent.h"
#include "ui_viewcoursesofastudent.h"
#include "viewcourses.h"
#include "ui_viewcourses.h"
#include <set>
#include "Gvariables.h"
#include <algorithm>
#include <QString>
#include <string>

viewcoursesofastudent::viewcoursesofastudent(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewcoursesofastudent)
{
    ui->setupUi(this);
    int Size = StudentData.size();
    QString* studentNames = new QString[Size];
    auto iter = StudentData.begin();
    QString* ptr = studentNames;
    while(iter!= StudentData.end()){
        *ptr = QString::fromStdString(iter->second.name);
        ptr++;
        ++iter;
    }
    ptr = studentNames;
    while(Size--)
        ui->students_cmb->addItem(*ptr++);
    delete [] studentNames;
}

viewcoursesofastudent::~viewcoursesofastudent()
{
    delete ui;
}

void viewcoursesofastudent::on_viewCourses_btn_clicked()
{
    ui->inProgress_lv->clear();
    ui->finished_lv->clear();

    for(auto iter = StudentData.begin(); iter!=StudentData.end(); iter++){
        vector<string> inProgressCourses = iter->second.InProgressCourses;
        if(strToQstr(iter->second.name) == ui->students_cmb->currentText()){
            for (int i = 0; i < inProgressCourses.size(); ++i) {
                ui->inProgress_lv->addItem(strToQstr(iter->second.InProgressCourses[i]));
            }
            break;
        }
    }
    for(auto iter = StudentData.begin(); iter!=StudentData.end(); iter++){
        vector<string> finishedCourses = iter->second.FinishedCourses;
        if(strToQstr(iter->second.name) == ui->students_cmb->currentText()){
            for (int i = 0; i < finishedCourses.size(); ++i) {
                ui->finished_lv->addItem(strToQstr(iter->second.FinishedCourses[i]));
            }
            break;
        }
    }
}

