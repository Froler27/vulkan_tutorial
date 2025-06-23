# Vulkan教程
参考网站为 [Vulkan Tutorial](https://vulkan-tutorial.com/en)

首先下载安装[VulkanSDK](https://vulkan.lunarg.com/sdk/home)
我安装的组件如下
![img.png](img.png)

安装好后添加环境变量`VulkanSDK`，值为你的安装目录`C:\VulkanSDK\1.4.313.2`，
再在`Path`中添加`%VulkanSDK%\Bin`

项目使用[Clion](https://www.jetbrains.com/clion/)进行开发，编译环境是vs2019，都是用的免费版本

## 项目结构说明

- 3rdparty
  - glfw
  - glm
  - ...
- sources
  - 00_base_code
  - 01_ ...

3rdparty为依赖的三方库  
sources下的文件夹为每一节的示例项目

# 环境构建
默认已经安装好VulkanSDK、Clion与vs2019社区版，且设置好了上面说的环境变量

将项目克隆下来，然后运行下面命令
下载三方库
``` shell
cd 3rdparty
# 下载最新发布的glfw版本，3.4为目前最新的版本
git clone --depth 1 --branch  3.4 https://github.com/glfw/glfw.git glfw
```
重新cmake一下，即可运行第一个示例 vulkan00