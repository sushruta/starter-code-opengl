#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <string>

class WindowParams
{
  public:
    unsigned int width{800};
    unsigned int height{600};
    std::string name{"glfw opengl window"};
};

class WindowApplication
{
  public:
    WindowApplication(WindowParams& wp);
    void initializeGlad();
    GLFWwindow* getGLFWwindow();
    GLFWwindow* window{nullptr};
};
