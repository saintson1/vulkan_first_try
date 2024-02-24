#include <vector>
#include <stdexcept>
#include <string>
#include <fstream>

#include <iostream>

#include "shader.hpp"

using namespace vulkan_ft;

shader::shader(const std::string &file_path, const std::string &name) : name_(const_cast<std::string &>(name))
{
  try
  {
    std::vector<std::string> shader_file =
      { shader::file_read(file_path + name + '/', name + ".vert.spv"), shader::file_read(file_path + name + '/', name + ".frag.spv") };
    std::cout << shader_file[0].size() << shader_file[1].size();
  } catch (std::exception &exc)
  {
    std::cout << exc.what();
  }

} // End of 'shader' function

char * shader::file_read (const std::string &file_path, const std::string &file_name)
{
  std::fstream file{file_path + file_name, std::ios::in | std::ios::binary | std::ios::ate };

  if (!file.is_open())
  {
    file.close();
    file.exceptions(std::ios::badbit | std::ios::failbit | std::ios::eofbit);
  }

  size_t FileSize = static_cast<size_t>(file.tellg());

  char * Buffer = new char[FileSize];

  file.seekg(0);
  file.read(Buffer, FileSize);

  file.close();

  return Buffer;
} // End of 'file_read' function

//End of 'shader.cpp' file