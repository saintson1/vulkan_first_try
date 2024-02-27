#ifndef _WINDOW_HPP_
#define _WINDOW_HPP_

#include <string>

#ifndef _VLK_GLFW_HPP_
#define _VLK_GLFW_HPP_
#include <GLFW/glfw3.h>

namespace vulkan_ft
{
  namespace canvas
  {
    class window
    {
    public:
      int width, height;
      const std::string name;

      GLFWwindow *glWindow;

      window( const std::string _name = "Vulkan Sample Window", int _width = 300, int _height = 100 );
      ~window();
    }; // End of 'window' class
  } // End of 'canvas' namespace
} //  End of 'vulkan_ft' namespace

#endif // _VLK_GLFW_HPP_
#endif // _WINDOW_HPP_
// End of 'vlk_window.hpp' file