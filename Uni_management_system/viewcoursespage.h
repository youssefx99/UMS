#ifndef VIEWCOURSESPAGE_H
#define VIEWCOURSESPAGE_H

#include <QDialog>

namespace Ui {
class ViewCoursesPage;
}

class ViewCoursesPage : public QDialog
{
    Q_OBJECT

public:
    explicit ViewCoursesPage(QWidget *parent = nullptr);
    ~ViewCoursesPage();

private:
    Ui::ViewCoursesPage *ui;
};

#endif // VIEWCOURSESPAGE_H
