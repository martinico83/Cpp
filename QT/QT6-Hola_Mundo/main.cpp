#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qInfo() << "Hola Mundo";

    return a.exec();
}
