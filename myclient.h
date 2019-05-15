#ifndef MYCLIENT_H
#define MYCLIENT_H

#include <QWidget>
#include <QString>
#include <QTcpSocket>
#include <QByteArray>

namespace Ui {
class MyClient;
}

class MyClient : public QWidget
{
    Q_OBJECT

public:
    explicit MyClient(QWidget *parent = nullptr);
    ~MyClient();

private:
    Ui::MyClient *ui;
};

#endif // MYCLIENT_H
