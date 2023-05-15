#include "add_new_student.h"
#include "ui_add_new_student.h"
#include "Gvariables.h"
#include <QMessageBox>
Add_New_Student::Add_New_Student(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add_New_Student)
{
    ui->setupUi(this);
}

Add_New_Student::~Add_New_Student()
{
    delete ui;
}

void Add_New_Student::on_AddStudBTN_clicked()
{
    string name = toUtf8(ui->StudName->text());

    int ID;
    if(wasted_IDs.size() != 0){
        ID = wasted_IDs.front();
        wasted_IDs.pop();
    }
    else{
        ID = StudentData.size() + ID_generator;
    }

    Student *unit = new Student(ID, name);
    StudentData[ID] = *unit;
    QMessageBox msgBox;
    msgBox.setWindowTitle("Message");
    msgBox.setInformativeText("Student Added");
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.exec();
}

