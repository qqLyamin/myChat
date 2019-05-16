#include "signin_signup.h"
#include "ui_signin_signup.h"

signin_signup::signin_signup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signin_signup)
{
    ui->setupUi(this);
    connect(ui->RegistrationButton, &QPushButton::clicked, this, &signin_signup::registration_button);
    connect(ui->SignInFirstButton, &QPushButton::clicked, this, &signin_signup::signin_button);
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

void signin_signup::registration_button()
{
    reg_form = new registration_form();
    reg_form->setAttribute(Qt::WA_DeleteOnClose);//память чистится после закрытия
    reg_form->setModal(true);//чтобы не могли много раз назать Registration
    reg_form->show();
}

void signin_signup::signin_button()
{
    cre_con = new create_connect();
    cre_con->show();
    close();
}
