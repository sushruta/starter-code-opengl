#include <window.h>

#include <string>
#include <memory>
#include <stdexcept>

WindowApplication::WindowApplication(WindowParams& wp)
{
  glfwInit();
  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
  glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
#ifdef __APPLE__
  glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
#endif

  window = glfwCreateWindow(wp.width, wp.height, wp.name.c_str(), nullptr, nullptr);
  if (window == nullptr)
  {
    glfwTerminate();
    throw std::runtime_error("failed to create GLFW window");
  }
}

void WindowApplication::initializeGlad()
{
  if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
  {
    throw std::runtime_error("failed to initialize GLAD");
  }
}

GLFWwindow* WindowApplication::getGLFWwindow()
{
  return window;
}
