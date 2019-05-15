#include "create_connect.h"
#include "ui_create_connect.h"

create_connect::create_connect(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::create_connect)
{
    ui->setupUi(this);
}

create_connect::~create_connect()
{
    delete ui;
}
