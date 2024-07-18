#include <QDebug>
#include <QGuiApplication>
#include <QWidget>

int main(int argc, char** argv)
{
    QGuiApplication app(argc, argv);

    qDebug() << "test qt vulkan\n";

    return app.exec();
}
