#include "mychat.h"
#include "ui_mychat.h"

myChat::myChat(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::myChat)
{
    ui->setupUi(this);
    si_su = new signin_signup();
    si_su->setAttribute(Qt::WA_DeleteOnClose);
    si_su->show();
}

myChat::~myChat()
{
    delete ui;
}
