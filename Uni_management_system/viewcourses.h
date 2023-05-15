#ifndef VIEWCOURSES_H
#define VIEWCOURSES_H

#include <QDialog>

namespace Ui {
class ViewCourses;
}

class ViewCourses : public QDialog
{
    Q_OBJECT

public:
    explicit ViewCourses(QWidget *parent = nullptr);
    ~ViewCourses();

private slots:
    void on_coursesView_currentTextChanged(const QString &currentText);

    void on_filterBox_currentTextChanged(const QString &arg1);

    void on_filterSpecific_currentTextChanged(const QString &arg1);

private:
    Ui::ViewCourses *ui;
};

#endif // VIEWCOURSES_H
