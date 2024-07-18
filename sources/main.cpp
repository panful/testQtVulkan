#include <QDebug>
#include <QGuiApplication>
#include <QVulkanInstance>
#include <QVulkanWindow>
#include <QWidget>

int main(int argc, char** argv)
{
    QGuiApplication app(argc, argv);

    QVulkanInstance instance {};
    if (!instance.create())
    {
        qDebug() << "failed to create vulkan instance: " << instance.errorCode();
    }

    QVulkanWindow window {};
    window.setVulkanInstance(&instance);
    window.resize(800, 600);
    window.show();

    qDebug() << "test qt vulkan\n";

    return app.exec();
}
