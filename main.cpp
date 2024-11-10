#include "DentalApp.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DentalApp w;
    w.show();
    return a.exec();
}
