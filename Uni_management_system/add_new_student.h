#ifndef ADD_NEW_STUDENT_H
#define ADD_NEW_STUDENT_H
#include <QDialog>
namespace Ui {
class Add_New_Student;
}

class Add_New_Student : public QDialog
{
    Q_OBJECT

public:
    explicit Add_New_Student(QWidget *parent = nullptr);
    ~Add_New_Student();

private slots:
    void on_AddStudBTN_clicked();

private:
    Ui::Add_New_Student *ui;
};

#endif // ADD_NEW_STUDENT_H
