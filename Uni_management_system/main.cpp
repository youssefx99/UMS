#include "mainwindow.h"
#include<fstream>
#include <QApplication>
#include<string>
#include<Gvariables.h>
#include<Student.h>
#include<map>
#include<QMessageBox>
using namespace std;



int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    load_data();
    w.show();
    bool success = a.exec();
    save_data();
    return success;
}

