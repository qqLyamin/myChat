#ifndef MYCHAT_H
#define MYCHAT_H

#include <QMainWindow>
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
};

#endif // MYCHAT_H
