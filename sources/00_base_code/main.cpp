#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <iostream>
#include <stdexcept>
#include <cstdlib>

const uint32_t WIDTH = 800;
const uint32_t HEIGHT = 600;

class HelloTriangleApplication {
public:
    void run() {
        initWindow();
        initVulkan();
        mainLoop();
        cleanup();
    }

private:
    GLFWwindow* window;

    void initWindow() {
        glfwInit(); // 初始画glfw库

        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API); // 告诉glfw不要创建opengl上下文
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE); // 禁止改变窗口大小，后续会支持更改
        // 第四个参数可以指定在哪个显示器上打开窗口，第五个窗口只于OpenGL有关
        window = glfwCreateWindow(WIDTH, HEIGHT, "Vulkan", nullptr, nullptr);
    }

    void initVulkan() {

    }

    void mainLoop() {
        // 循环检查窗口是否关闭，例如当点击X按钮时
        while (!glfwWindowShouldClose(window)) {
            glfwPollEvents(); // 检查有没有触发什么事件（比如键盘输入、鼠标移动等）、更新窗口状态，并调用对应的回调函数
        }
    }

    void cleanup() {
        glfwDestroyWindow(window); // 销毁窗口

        glfwTerminate(); // 终止GLFW
    }
};

int main() {
    HelloTriangleApplication app;

    try {
        app.run();
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}