#include "addgradesforstudent.h"
#include "ui_addgradesforstudent.h"
#include "viewcourses.h"
#include "ui_viewcourses.h"
#include <set>
#include "Student.h"
#include "Gvariables.h"
#include <algorithm>
#include <QString>
#include <string>

AddGradesForStudent::AddGradesForStudent(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddGradesForStudent)
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
        ui->Student_Name->addItem(*ptr++);
    delete [] studentNames;

}

AddGradesForStudent::~AddGradesForStudent()
{
    delete ui;
}

void AddGradesForStudent::on_select_course_clicked()
{
    ui->Course_Name->clear();
    for(auto iter = StudentData.begin(); iter!=StudentData.end(); iter++){
        vector<string> Inprogress = iter->second.InProgressCourses;
        if(strToQstr(iter->second.name) == ui->Student_Name->currentText()){
            for (int i = 0; i < Inprogress.size(); ++i) {
                ui->Course_Name->addItem(strToQstr(iter->second.InProgressCourses[i]));
            }
            break;
        }
    }

    for(auto iter = StudentData.begin(); iter!=StudentData.end(); iter++){
        if(strToQstr(iter->second.name) == ui->Student_Name->currentText()){
            ui->Student_Id->setText(strToQstr(to_string(iter->second.ID)));
            break;
        }
    }

}


void AddGradesForStudent::on_Add_Grade_clicked()
{
    Student* stud;
    int stud_id=stoi(toUtf8(ui->Student_Id->text()));

    stud=&StudentData[stud_id];

    QString Grade=ui->grade->text();
    string currentCourse=toUtf8(ui->Course_Name->currentText());
    //stud->CoursesGrades[currentCourse]=stod(toUtf8(Grade));
    stud->add_Grades_For_course(currentCourse,stod(toUtf8(Grade)));
    stud->FinishedCourses.push_back(currentCourse);
    for(auto iter =stud->InProgressCourses.begin();iter!=stud->InProgressCourses.end();iter++){
        if(*iter==currentCourse){
            stud->InProgressCourses.erase(iter);
            break;
        }
    }
    //----------------------------------------------------
    float cgpa =0,up=0;
    int totalhours=0;

    for(string course : stud->FinishedCourses)
    {
        Course the_course = CoursesData[course];

        up += (stud->CoursesGrades[course]*the_course.hours);
        totalhours+= the_course.hours;
    }
    cgpa = up/totalhours;
    stud->Set_Gpa(cgpa);


    ui->Course_Name->removeItem(ui->Course_Name->currentIndex());

    debugMsBox("Add Grade");



}

