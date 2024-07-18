#pragma once

#include <QVulkanWindow>

class MyWindow : public QVulkanWindow
{
public:
    explicit MyWindow(QWindow* parent = nullptr);

    QVulkanWindowRenderer* createRenderer() override;
};
