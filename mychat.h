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

namespace Ui {
class myChat;
}

class myChat : public QMainWindow
{
    Q_OBJECT
    signin_signup * si_su;

public:
    explicit myChat(QWidget *parent = nullptr);
    void add_newclient(const QString &, const QString &, const QString &) const;
    bool confirm_entrance(const QString &, const QString &);
    ~myChat();

private:
    Ui::myChat *ui;
    QSqlDatabase allclients_db;
};

#endif // MYCHAT_H
