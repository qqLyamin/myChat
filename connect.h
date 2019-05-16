#ifndef CONNECT_H
#define CONNECT_H

#include <QDialog>

namespace Ui {
class connect2_chat;
}

class connect2_chat : public QDialog
{
    Q_OBJECT

public:
    explicit connect2_chat(QWidget *parent = nullptr);
    ~connect2_chat();

private:
    Ui::connect2_chat *ui;
};

#endif // CONNECT_H
