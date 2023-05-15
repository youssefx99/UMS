#ifndef STUDENTLOGIN_H
#define STUDENTLOGIN_H

#include <QDialog>

namespace Ui {
class StudentLogIn;
}

class StudentLogIn : public QDialog
{
    Q_OBJECT

public:
    explicit StudentLogIn(QWidget *parent = nullptr);
    ~StudentLogIn();

private slots:
    void on_LoginButton_clicked();

    void on_ForceLIbutton_clicked();

private:
    Ui::StudentLogIn *ui;
};

#endif // STUDENTLOGIN_H
