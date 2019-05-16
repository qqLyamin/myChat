#ifndef CREATE_H
#define CREATE_H

#include <QDialog>

namespace Ui {
class Create_chat;
}

class Create_chat : public QDialog
{
    Q_OBJECT

public:
    explicit Create_chat(QWidget *parent = nullptr);
    ~Create_chat();

private:
    Ui::Create_chat *ui;
};

#endif // CREATE_H
