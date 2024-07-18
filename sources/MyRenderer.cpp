#include "MyRenderer.h"
#include <QDebug>

MyRenderer::MyRenderer(QVulkanWindow* window)
    : m_window(window)
{
    qDebug() << "create MyRenderer";
}

void MyRenderer::startNextFrame()
{
    m_window->frameReady();
}
