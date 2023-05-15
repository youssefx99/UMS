#ifndef VIEWCOURSESGRADES_H
#define VIEWCOURSESGRADES_H

#include <QDialog>

namespace Ui {
class viewcoursesgrades;
}

class viewcoursesgrades : public QDialog
{
    Q_OBJECT

public:
    explicit viewcoursesgrades(QWidget *parent = nullptr);
    ~viewcoursesgrades();

private slots:
    void on_std_combo_currentTextChanged(const QString &arg1);

private:
    Ui::viewcoursesgrades *ui;
};

#endif // VIEWCOURSESGRADES_H
