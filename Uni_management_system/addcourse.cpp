#include "addcourse.h"
#include "ui_addcourse.h"
#include "Gvariables.h"
#include "Courses.h"
#include "qmessagebox.h"
using namespace std;
AddCourse::AddCourse(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddCourse)
{
    ui->setupUi(this);
}

AddCourse::~AddCourse()
{
    delete ui;
}

void AddCourse::on_AddCourseButton_clicked()
{
    string name = toUtf8(ui->Cname->text());
    int code = stoi(toUtf8(ui->Ccode->text()));

    for(auto iter = CoursesData.begin(); iter != CoursesData.end(); iter++){
        if(iter->second.code == code){
            QMessageBox msgBox;
            msgBox.setText("Error");
            msgBox.setInformativeText("A course with the same code already exists");
            msgBox.setStandardButtons(QMessageBox::Ok);
            msgBox.exec();
            return;
        }
    }

    bool req = ui->Croe->isChecked();
    int maxStuds = stoi(toUtf8(ui->CmaxStuds->text()));
    short hours = stoi(toUtf8(ui->Chours->text()));
    string instName = toUtf8(ui->Cinst->text());
    string tempPreReqs = toUtf8(ui->CpreReqs->text());
    int numOfCourses = count(tempPreReqs, ",") + 1;
    string* tempPreReqs2 = split(tempPreReqs, ",", numOfCourses);
    int level = stoi(toUtf8(ui->LevelTXT->text()));

    vector<string> preReqs = strArrToVector(tempPreReqs2, numOfCourses);
    Course *unit = new Course(name, code, req, maxStuds,preReqs, hours, instName, level);
    CoursesData[name] = *unit;

    QMessageBox msgBox;
    msgBox.setWindowTitle("Message");
    msgBox.setInformativeText("Course Added");
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.exec();
}


