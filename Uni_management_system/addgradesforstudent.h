#ifndef ADDGRADESFORSTUDENT_H
#define ADDGRADESFORSTUDENT_H

#include <QDialog>

namespace Ui {
class AddGradesForStudent;
}

class AddGradesForStudent : public QDialog
{
    Q_OBJECT

public:
    explicit AddGradesForStudent(QWidget *parent = nullptr);
    ~AddGradesForStudent();

private slots:
    void on_select_course_clicked();

    void on_Add_Grade_clicked();

private:
    Ui::AddGradesForStudent *ui;
};

#endif // ADDGRADESFORSTUDENT_H
