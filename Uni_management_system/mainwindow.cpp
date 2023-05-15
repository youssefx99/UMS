
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<fstream>
#include<string>

#include"adminlogin.h"
#include"studentlogin.h"
using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
}


MainWindow::~MainWindow()
{

    delete ui;

}


void MainWindow::on_pushButton_clicked()
{

}


void MainWindow::on_Admin_Button_clicked()
{

    this->close();
    AdminLogIn adminLI;
    adminLI.setModal(1);
    adminLI.exec();
    this->show();
}


void MainWindow::on_Student_button_clicked()
{
    this->close();
    StudentLogIn studentLI;
    studentLI.setModal(true);
    studentLI.exec();
    this->show();
}

