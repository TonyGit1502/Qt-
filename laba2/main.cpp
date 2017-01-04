#include "itogo.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    itogo i;
    i.show();

    return a.exec();
}
