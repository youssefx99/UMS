#include "courseedit.h"
#include "ui_courseedit.h"
#include "Gvariables.h"
#include "Courses.h"
#include <string>
#include <sstream>
using namespace std;


CourseEdit::CourseEdit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CourseEdit)
{
    ui->setupUi(this);

    int Size = CoursesData.size();
    QString* courseNames = new QString[Size];
    auto iter = CoursesData.begin();
    QString* ptr = courseNames;
    while(iter!= CoursesData.end()){
        *ptr = QString::fromStdString(iter->first);
        ptr++;
        ++iter;
    }
    ptr = courseNames;
    while(Size--)
        ui->CoursesNamesCB->addItem(*ptr++);
    delete [] courseNames;

}

CourseEdit::~CourseEdit()
{
    delete ui;
}


void CourseEdit::on_EditCourseButton_clicked()
{
    string name = toUtf8(ui->CoursesNamesCB->currentText());
    int code = stoi(toUtf8(ui->Ccode->text()));
    bool req = ui->Creq->isChecked();
    int maxStuds = stoi(toUtf8(ui->CmaxStuds->text()));
    short hours = stoi(toUtf8(ui->Chours->text()));
    string instName = toUtf8(ui->Cinst->text());
    string tempPreReqs = toUtf8(ui->CPR->text());

    int Clevel = stoi(toUtf8(ui->CLevelTXT->text()));

    int numOfCourses = count(tempPreReqs, ",") + 1;
    string* tempPreReqs2 = split(tempPreReqs, ",", numOfCourses);
    vector<string> preReqs = strArrToVector(tempPreReqs2, numOfCourses);

    Course *unit = new Course(name, code, req, maxStuds,preReqs, hours, instName, Clevel);
    CoursesData[name] = *unit;

    QMessageBox msgBox;
    msgBox.setWindowTitle("Message");
    msgBox.setInformativeText("Course Edited");
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.exec();

}


void CourseEdit::on_CoursesNamesCB_currentTextChanged(const QString &arg1)  // calculus1
{

    Course current = CoursesData.at(toUtf8(arg1));

    ui->Ccode->setText(strToQstr(to_string(current.code)));
    ui->Chours->setText(strToQstr(to_string(current.hours)));
    ui->Cinst->setText(strToQstr(current.instructor));
    ui->CmaxStuds->setText(strToQstr(to_string(current.max_students)));
    ui->Creq->setChecked(current.required);
    ui->CLevelTXT->setText(strToQstr(to_string(current.level)));
    vector<string> preReqsTemp = current.pre_req;
    stringstream ss;

    for(string &s: preReqsTemp)
        ss << s << ",";
    string str = ss.str();
    str = str.substr(0, str.length()-1);
    ui->CPR->setText(strToQstr(str));
    ss.str("");
}

