#include "signin_signup.h"
#include "ui_signin_signup.h"

signin_signup::signin_signup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signin_signup)
{
    ui->setupUi(this);

}

signin_signup::~signin_signup()
{
    delete ui;
}

void signin_signup::set_name_pw(QString str)
{
    if (sender() == ui->client_name)
    {
        name = str;
        qDebug() << "name = " << name;
    }
    else {
        password = str;
        qDebug() << "password = " << password;
    }
    qDebug() << str << "\t";
}
