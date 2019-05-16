#include "registration_form.h"
#include "ui_registration_form.h"

registration_form::registration_form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registration_form)
{
    ui->setupUi(this);
    connect(ui->ExitRegistrationButton, &QPushButton::clicked, this, &registration_form::close_window);
}

registration_form::~registration_form()
{
    delete ui;
}

void registration_form::close_window()
{
    close();
}
