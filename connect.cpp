#include "connect.h"
#include "ui_connect.h"

connect2_chat::connect2_chat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::connect2_chat)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose);//память чистится после закрытия
}

connect2_chat::~connect2_chat()
{
    delete ui;
}
