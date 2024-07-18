#include "MyWindow.h"
#include "MyRenderer.h"
#include <QDebug>

MyWindow::MyWindow(QWindow* parent)
    : QVulkanWindow(parent)
{
    qDebug() << "create MyWindow";
}

QVulkanWindowRenderer* MyWindow::createRenderer()
{
    return new MyRenderer(this);
}
