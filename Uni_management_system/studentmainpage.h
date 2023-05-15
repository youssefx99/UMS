#ifndef STUDENTMAINPAGE_H
#define STUDENTMAINPAGE_H

#include <QDialog>

namespace Ui {
class StudentMainPage;
}

class StudentMainPage : public QDialog
{
    Q_OBJECT

public:
    explicit StudentMainPage(QWidget *parent = nullptr);
    ~StudentMainPage();

private slots:
    void on_ViewCourses_clicked();

    void on_RegCourse_clicked();

    void on_LogOutBTN_clicked();

    void on_EditDataBTN_clicked();

    void on_ViewRegCourses_clicked();

    void on_VeiwCourseDet_clicked();

    void on_viewcoursesgrades_clicked();

private:
    Ui::StudentMainPage *ui;
};

#endif // STUDENTMAINPAGE_H
