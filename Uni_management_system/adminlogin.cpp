
#include "adminlogin.h"
#include "ui_adminlogin.h"
#include "adminmainpage.h"
#include "mainwindow.h"
#include<QMessageBox>
AdminLogIn::AdminLogIn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminLogIn)
{
    ui->setupUi(this);
}

AdminLogIn::~AdminLogIn()
{
    delete ui;
}


void AdminLogIn::on_LoginButton_clicked()
{
    QString EnteredUsername = ui->Username->text();
    QString EnteredPassword = ui->Password->text();

    if(EnteredUsername.toUpper() =="ADMIN" && EnteredPassword == "Password"){
        this->close();
        AdminMainPage AMP;
        AMP.setModal(true);
        AMP.exec();
    }
    else{
        QMessageBox msgBox;
        msgBox.setText("Name");
        msgBox.setInformativeText("Invalid Input");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.exec();
    }
}


void AdminLogIn::on_ForceLIbutton_clicked()
{
    this->close();
    AdminMainPage AMP;
    AMP.setModal(true);
    AMP.exec();
}

