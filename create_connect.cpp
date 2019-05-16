#include "create_connect.h"
#include "ui_create_connect.h"

create_connect::create_connect(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::create_connect)
{
    ui->setupUi(this);
    connect(ui->HostChatButton_2, &QPushButton::clicked, this, &create_connect::Host_button_haspressed);
    connect(ui->GuestInChatButton_2, &QPushButton::clicked, this, &create_connect::Guest_button_haspressed);
}

create_connect::~create_connect()
{
    delete ui;
}

void create_connect::Host_button_haspressed()
{
    create_chat = new Create_chat();
    create_chat->setModal(true);
    create_chat->show();
}

void create_connect::Guest_button_haspressed()
{
    connect_chat = new connect2_chat();
    connect_chat->setModal(true);
    connect_chat->show();
}
