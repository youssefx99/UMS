#include "ui_addTransStudent.h"
#include "Student.h"
#include "Gvariables.h"
#include <string>
#include "addTransStudent.h"
#include <QMessageBox>
using namespace std;

AddNewStudent::AddNewStudent(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddNewStudent)
{
    ui->setupUi(this);
}

AddNewStudent::~AddNewStudent()
{
    delete ui;
}

void AddNewStudent::on_insertStudentToMapButton_clicked()
{
    string name, Fcourses;
    int level;
    double GPA;

    name = toUtf8(ui->NameTXT->text()); // QString
    level = stoi(toUtf8(ui->LevelTXT->text()));
    GPA = stod(toUtf8(ui->GPATXT->text()));
    Fcourses = toUtf8(ui->FcoursesTXT->text()); //

    int ID;

    if(wasted_IDs.size() != 0){
        ID = wasted_IDs.front();
        wasted_IDs.pop();
    }
    else{
       ID = StudentData.size() + ID_generator;
    }

    int numOfCourses = count(Fcourses, ",") + 1;    // "oop,ds,calc"

    string* Courses = split(Fcourses, ",", numOfCourses);

    vector<string> finishedCourses = strArrToVector(Courses, numOfCourses);

    Student stud(ID, name, level, GPA, finishedCourses);
    StudentData[stud.ID] = stud;

    delete [] Courses;

    QMessageBox msgBox;
    msgBox.setWindowTitle("Message");
    msgBox.setInformativeText("Student Added");
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.exec();

}

