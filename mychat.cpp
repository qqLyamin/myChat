#include "mychat.h"
#include "ui_mychat.h"

myChat::myChat(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::myChat)
{
    ui->setupUi(this);
    si_su = new signin_signup();
    si_su->setAttribute(Qt::WA_DeleteOnClose);
    client = new Client();
    connect(si_su, &signin_signup::connect_to_server, client, &Client::ConnectToServer);
    connect(si_su, &signin_signup::confirm_entrance, this, &myChat::confirm_entrance);
    connect(this, &myChat::confirm_entrance, client, &Client::confirm_entrance);

    si_su->show();
}

myChat::~myChat()
{
    delete ui;
}
