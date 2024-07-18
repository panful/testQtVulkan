#pragma once

#include <QVulkanWindow>
#include <vector>

class MyRenderer : public QVulkanWindowRenderer
{
public:
    MyRenderer(QVulkanWindow* window);

    void initResources() override;
    void releaseResources() override;

    void startNextFrame() override;

private:
    VkShaderModule CreateShaderModule(const std::vector<char>& code) const;

private:
    QVulkanWindow* m_window {nullptr};
    QVulkanDeviceFunctions* m_devFuncs {nullptr};

    VkDevice m_device {VK_NULL_HANDLE};
    VkPipelineLayout m_pipelineLayout {VK_NULL_HANDLE};
    VkPipeline m_pipeline {VK_NULL_HANDLE};
};
