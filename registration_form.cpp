#include "registration_form.h"
#include "ui_registration_form.h"

registration_form::registration_form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registration_form)
{
    ui->setupUi(this);
}

registration_form::~registration_form()
{
    delete ui;
}
