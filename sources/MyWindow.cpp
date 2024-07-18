#include "MyWindow.h"
#include <QDebug>

MyWindow::MyWindow(QWindow* parent)
    : QVulkanWindow(parent)
{
    qDebug() << "create MyWindow";
}
