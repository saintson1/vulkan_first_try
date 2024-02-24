#include "app/application.hpp"
#include "render/resource/resourse_def.hpp"

int main( int argc, char *argv[] )
{
  const std::string proj_path = "E:/visual_studio/First-Vulkan-Try/";
  vulkan_ft::application::GetInstancePtr("pupupu", 100, 100);

  vulkan_ft::shader( proj_path + "resource/shader/", "first_triangle");

  return 0;
} // End of MAIN function
//End of 'main.cpp' file