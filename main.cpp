#include "mychat.h"
#include <QApplication>
#include <QObject>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myChat w;
    //w.show();

    return a.exec();
}
