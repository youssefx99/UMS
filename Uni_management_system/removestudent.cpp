#include "removestudent.h"
#include "ui_removestudent.h"
#include "Gvariables.h"
#include<algorithm>
#include<QMessageBox>
RemoveStudent::RemoveStudent(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RemoveStudent)
{
    ui->setupUi(this);
}

RemoveStudent::~RemoveStudent()
{
    delete ui;
}

void RemoveStudent::on_SRemoveButton_clicked()
{
    int ID = stoi(toUtf8(ui->remID->text()));
    auto iter = StudentData.find(ID);
    if(iter != StudentData.end()){
        StudentData.erase(iter);
        wasted_IDs.push(ID);
        QMessageBox msgBox;
        msgBox.setWindowTitle("Message");
        msgBox.setInformativeText("Student Deleted");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.exec();
    }
    else{
        QMessageBox msgBox;
            msgBox.setText("Error");
            msgBox.setInformativeText("Student not found");
            msgBox.setStandardButtons(QMessageBox::Ok);
            msgBox.exec();
    }



}

