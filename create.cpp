#include "create.h"
#include "ui_create.h"

Create_chat::Create_chat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Create_chat)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose);//память чистится после закрытия
}

Create_chat::~Create_chat()
{
    delete ui;
}
