#ifndef MYCHAT_H
#define MYCHAT_H

#include <QMainWindow>
#include <QDebug>

#include <QSqlError>
#include <QSqlRecord>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlTableModel>

#include "signin_signup.h"
#include "../Server/client.h"

namespace Ui {
class myChat;
}

class myChat : public QMainWindow
{
    Q_OBJECT
    signin_signup * si_su;
    Client * client;

public:
    explicit myChat(QWidget *parent = nullptr);
    ~myChat();
signals:
    bool confirm_entrance(const QString &, const QString &);

private:
    Ui::myChat *ui;
};

#endif // MYCHAT_H
