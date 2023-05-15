#ifndef ADMINMAINPAGE_H
#define ADMINMAINPAGE_H

#include <QDialog>

namespace Ui {
class AdminMainPage;
}

class AdminMainPage : public QDialog
{
    Q_OBJECT

public:
    explicit AdminMainPage(QWidget *parent = nullptr);
    ~AdminMainPage();

private slots:
    void on_AddStudentButton_clicked();

    void on_RemoveStudentButton_clicked();

    void on_AddCoursebtn_clicked();

    void on_RemoveCourseBTN_clicked();

    void on_EditCourseBTN_clicked();

    void on_AddStudentButton_2_clicked();

    void on_LogOutBTN_clicked();

    void on_viewCoursesOfAStudent_btn_clicked();

    void on_pushButton_clicked();

    void on_Add_Grade_btn_clicked();

private:
    Ui::AdminMainPage *ui;
};

#endif // ADMINMAINPAGE_H
