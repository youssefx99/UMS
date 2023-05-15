#ifndef ADMINLOGIN_H
#define ADMINLOGIN_H

#include <QDialog>

namespace Ui {
class AdminLogIn;
}

class AdminLogIn : public QDialog
{
    Q_OBJECT

public:
    explicit AdminLogIn(QWidget *parent = nullptr);
    ~AdminLogIn();

private slots:
    void on_LoginButton_clicked();

    void on_ForceLIbutton_clicked();

private:
    Ui::AdminLogIn *ui;
};

#endif // ADMINLOGIN_H
