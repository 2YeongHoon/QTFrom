#include "QTForm.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTForm w;
    w.show();
    return a.exec();
}
