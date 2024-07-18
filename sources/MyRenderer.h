#pragma once

#include <QVulkanWindow>

class MyRenderer : public QVulkanWindowRenderer
{
public:
    MyRenderer(QVulkanWindow* window);

    void startNextFrame() override;

private:
    QVulkanWindow* m_window {nullptr};
};
