#pragma once

#include <QVulkanWindow>

class MyWindow : public QVulkanWindow
{
public:
    explicit MyWindow(QWindow* parent = nullptr);

    QVulkanWindowRenderer* createRenderer() override;

protected:
    void resizeEvent(QResizeEvent* event) override;
    void paintEvent(QPaintEvent* event) override;
    void closeEvent(QCloseEvent* event) override;
    void keyPressEvent(QKeyEvent* event) override;
    void keyReleaseEvent(QKeyEvent* event) override;
    void mousePressEvent(QMouseEvent* event) override;
    void mouseReleaseEvent(QMouseEvent* event) override;
    void mouseDoubleClickEvent(QMouseEvent* event) override;
    void mouseMoveEvent(QMouseEvent* event) override;
    void wheelEvent(QWheelEvent* event) override;

private:
    QVulkanWindowRenderer* m_renderer {nullptr};
};
