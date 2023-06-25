// Example program
#include <iostream>
#include <string>

int main()
{
  std::string name;
  std::cout << "What is your name? ";
  getline (std::cin, name);
  std::cout << "Hello, " << name << "!\n";
  std::cout << "What do you want do do, " << name << "?\n";
  std::cout << "Option: ";
  getline (std::cin, name);
  std::cout << "No! That Is Stupid! >:( ";
  std::cout << "Option: ";
  getline (std::cin, name);
  std::cout << "Okay, okay. You forced me. Lets go. :( ";
}
