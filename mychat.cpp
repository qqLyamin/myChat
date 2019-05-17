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

    allclients_db = QSqlDatabase::addDatabase("QMYSQL");
    allclients_db.setHostName("localhost");
    allclients_db.setDatabaseName("allclients");
    allclients_db.setUserName("root");
    allclients_db.setPassword("2708tjlfe");

    if (!allclients_db.open())
    {
        qDebug() << "db openning error " << allclients_db.lastError().text();
    }
}

myChat::~myChat()
{
    delete ui;
}
