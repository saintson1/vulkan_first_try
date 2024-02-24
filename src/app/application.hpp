#ifndef _APPLICATION_HPP_
#define _APPLICATION_HPP_

#include <string>

#include "../canvas/canvas_def.hpp"
namespace vulkan_ft
{
  class application
  {
    application( application & app ) = delete;
    void operator=( const application & app ) = delete;
  private:
    canvas::window *canvas_;
    const std::string app_name_;
    int width_, height_;

    application( const std::string name, const int width, const int height );
    ~application();
  public:
    static application * GetInstancePtr( const std::string name = "VulkanApp", const int width = 300, const int height = 100 );
    static application & GetInstanceRef( const std::string name = "VulkanApp", const int width = 300, const int height = 100 );
  }; // End of 'application' class
} // End of 'vulkan_ft' namespace

#endif _APPLICATION_HPP_
// End of 'vlk_application.hpp' file