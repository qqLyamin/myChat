#ifndef MYCHAT_H
#define MYCHAT_H

#include <QMainWindow>

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
    ~myChat();

private:
    Ui::myChat *ui;
    QSqlDatabase allclients_db;
};

#endif // MYCHAT_H
