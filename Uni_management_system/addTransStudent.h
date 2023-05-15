#ifndef ADDTRANSSTUDENT_H
#define ADDTRANSSTUDENT_H

#include <QDialog>

namespace Ui {
class AddNewStudent;
}

class AddNewStudent : public QDialog
{
    Q_OBJECT

public:
    explicit AddNewStudent(QWidget *parent = nullptr);
    ~AddNewStudent();

private slots:
    void on_insertStudentToMapButton_clicked();

private:
    Ui::AddNewStudent *ui;
};

#endif // ADDTRANSSTUDENT_H
