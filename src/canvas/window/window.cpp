#include <string>

#include "window.hpp"

using namespace vulkan_ft::canvas;

window::window( const std::string _name, int _width, int _height ) : name(_name), width(_width), height(_height)
{
  // initialization GLFW context
  glfwInit();
  glfwInitHint(GLFW_CLIENT_API, GLFW_NO_API);
  glfwInitHint(GLFW_RESIZABLE, GLFW_FALSE);

  // initialization window
  glWindow = glfwCreateWindow(_width, _height, _name.c_str(), nullptr, nullptr);

} // End of 'window::window' function

window::~window()
{
  // window deinitialization
  glfwDestroyWindow(glWindow);

  //GLFW deinitialization
  glfwTerminate();
} // End of 'window::~window' function

// End of 'vlk_window.cpp' file