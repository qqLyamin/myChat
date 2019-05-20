#include "mychat.h"
#include "ui_mychat.h"

myChat::myChat(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::myChat)
{
    ui->setupUi(this);
    si_su = new signin_signup();
    si_su->setAttribute(Qt::WA_DeleteOnClose);
    connect(si_su, &signin_signup::new_user, this, &myChat::add_newclient);
    connect(si_su, &signin_signup::confirm_entrance, this, &myChat::confirm_entrance);
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
    else {
        qDebug() << "Success!";
    }
}

void myChat::add_newclient(const QString & name, const QString & password, const QString & email) const
{
    QSqlQuery query;
    query.prepare("INSERT INTO clients(name, email, password)" "VALUES(?, ?, ?)");
    query.addBindValue(name);
    query.addBindValue(password);
    query.addBindValue(email);
    if (query.exec())
    {
        qDebug() << "success table";
    }
    else {
        qDebug() << query.lastError().text();
    }
}

bool myChat::confirm_entrance(const QString & name, const QString & password)
{
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM clients WHERE NAME = (?) AND PASSWORD = (?)");
    query.addBindValue(name);
    query.addBindValue(password);
    if (query.exec())
    {
        query.first();
        int a = query.value(0).toInt();
        return (bool)a;
    }
    return false;
}

myChat::~myChat()
{
    delete ui;
}
