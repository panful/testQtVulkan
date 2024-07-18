#include "MyWindow.h"
#include <QDebug>
#include <QGuiApplication>
#include <QVulkanInstance>

int main(int argc, char** argv)
{
    QGuiApplication app(argc, argv);

    QVulkanInstance instance {};
    if (!instance.create())
    {
        qDebug() << "failed to create vulkan instance: " << instance.errorCode();
    }

    MyWindow window {};
    window.setVulkanInstance(&instance);
    window.resize(800, 600);
    window.show();

    return app.exec();
}
