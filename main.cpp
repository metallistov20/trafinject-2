#include "iface.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    iface w;
    w.show();
    a.setQuitOnLastWindowClosed(true);
    return a.exec();
}
