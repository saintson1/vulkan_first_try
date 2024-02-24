#ifndef _SHADER_HPP_
#define _SHADER_HPP_

#include <string>
#include <filesystem>

namespace vulkan_ft
{
  class shader
  {
  public:
    shader(const std::string &file_path, const std::string &name);

  private:
    std::string &name_;

    char * file_read (const std::string &file_path, const std::string &file_name);

  }; //End of 'shader' class
} // End of 'vulkan_ft' namespace

#endif _SHADER_HPP_
//End of 'shader.hpp' file