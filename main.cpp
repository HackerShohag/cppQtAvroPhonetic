#include "src/mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
#ifdef QT_DEBUG
    qDebug() << "Running test on Debug";
#else
    qDebug() << "Skipped test on release";
#endif
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
