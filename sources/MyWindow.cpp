#include "MyWindow.h"
#include "MyRenderer.h"
#include <QCloseEvent>
#include <QDebug>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QWheelEvent>

MyWindow::MyWindow(QWindow* parent)
    : QVulkanWindow(parent)
{
    qDebug() << "create MyWindow";
}

QVulkanWindowRenderer* MyWindow::createRenderer()
{
    m_renderer = new MyRenderer(this);
    return m_renderer;
}

void MyWindow::resizeEvent(QResizeEvent* event)
{
    qDebug() << event->type();
    return QVulkanWindow::resizeEvent(event);
}

void MyWindow::paintEvent(QPaintEvent* event)
{

    qDebug() << event->type();
    return QVulkanWindow::paintEvent(event);
}

void MyWindow::closeEvent(QCloseEvent* event)
{
    qDebug() << event->type();
    return QVulkanWindow::closeEvent(event);
}

void MyWindow::keyPressEvent(QKeyEvent* event)
{
    qDebug() << event->type();
    return QVulkanWindow::keyPressEvent(event);
}

void MyWindow::keyReleaseEvent(QKeyEvent* event)
{
    qDebug() << event->type();
    return QVulkanWindow::keyReleaseEvent(event);
}

void MyWindow::mousePressEvent(QMouseEvent* event)
{
    qDebug() << event->type();
    return QVulkanWindow::mousePressEvent(event);
}

void MyWindow::mouseReleaseEvent(QMouseEvent* event)
{
    qDebug() << event->type();
    return QVulkanWindow::mouseReleaseEvent(event);
}

void MyWindow::mouseDoubleClickEvent(QMouseEvent* event)
{
    qDebug() << event->type();
    return QVulkanWindow::mouseDoubleClickEvent(event);
}

void MyWindow::mouseMoveEvent(QMouseEvent* event)
{
    qDebug() << event->type();
    return QVulkanWindow::mouseMoveEvent(event);
}

void MyWindow::wheelEvent(QWheelEvent* event)
{
    qDebug() << event->type();
    return QVulkanWindow::wheelEvent(event);
}
