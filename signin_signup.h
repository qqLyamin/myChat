#ifndef SIGNIN_SIGNUP_H
#define SIGNIN_SIGNUP_H

#include <QDialog>
#include <QString>
#include <QDebug>

namespace Ui {
class signin_signup;
}

class signin_signup : public QDialog
{
    Q_OBJECT
    QString name;
    QString password;

public:
    explicit signin_signup(QWidget *parent = nullptr);
    ~signin_signup();
public slots:

    void set_name_pw(QString);

private:
    Ui::signin_signup *ui;
};

#endif // SIGNIN_SIGNUP_H
