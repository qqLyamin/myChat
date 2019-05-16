#ifndef REGISTRATION_FORM_H
#define REGISTRATION_FORM_H

#include <QDialog>

namespace Ui {
class registration_form;
}

class registration_form : public QDialog
{
    Q_OBJECT

public:
    explicit registration_form(QWidget *parent = nullptr);
    ~registration_form();
public slots:
    void close_window();

private:
    Ui::registration_form *ui;
};

#endif // REGISTRATION_FORM_H
