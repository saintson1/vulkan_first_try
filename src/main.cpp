#include "app/application.hpp"
#include "render/resource/resourse_def.hpp"
#include "math/math_def.hpp"

int main( int argc, char *argv[] )
{
  do
  {
    vulkan_ft::application::GetInstancePtr("pupupu", 100, 100);
  } while (getchar() != 'q');

  return 0;
} // End of MAIN function
//End of 'main.cpp' file