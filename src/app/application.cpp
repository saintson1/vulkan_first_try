#include "application.hpp"
#include "../canvas/canvas_def.hpp"

using namespace vulkan_ft;

application::application( const std::string name, const int width, const int height ) : app_name_(name), width_(width), height_(height)
{
  canvas_ = new canvas::window(name, width, height);
}

application::~application()
{
  delete canvas_;
}

application * application::GetInstancePtr( const std::string name, const int width, const int height )
{
  static application *instance_ptr;

  if (instance_ptr == nullptr)
    return instance_ptr = new application(name, width, height);
  else
    return instance_ptr;
}

application & application::GetInstanceRef( const std::string name, const int width, const int height )
{
  return *(application::GetInstancePtr(name, width, height));
}

// End of 'vlk_application.cpp' file