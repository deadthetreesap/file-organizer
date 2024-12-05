#include <iostream>
#include <filesystem>
#include <fstream>

namespace fs = std:: filesystem;

int main() {
  //create new directory
  fs::create_directory("new_directory");

  //create a new file 
  std::ofstream file("new_file.txt");

  //delete a file 
  fs::remove("new_file.txt");
  // delete a directory
  fs::remove_all("new_directory");
  //rename a file
  fs::rename("old_file.txt", "new_file.txt");
  // rename a directory
  fs::rename("old_directory", "new_directory");
  // display the contents of a directory
  for (const auto& entry : fs::directory_iterator(".")) {
    std::cout << entry.path().filename() << std::endl;
  }
  
  return 0;

}

