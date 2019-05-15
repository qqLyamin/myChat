#ifndef CREATE_CONNECT_H
#define CREATE_CONNECT_H

#include <QDialog>

namespace Ui {
class create_connect;
}

class create_connect : public QDialog
{
    Q_OBJECT

public:
    explicit create_connect(QWidget *parent = nullptr);
    ~create_connect();

private:
    Ui::create_connect *ui;
};

#endif // CREATE_CONNECT_H
