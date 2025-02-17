#include "src/mainwindow.h"

#include <QApplication>
#include "test/test.h"

int main(int argc, char *argv[])
{
#ifdef QT_DEBUG
    qDebug() << "Running test on Debug";
    test();
#endif
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
