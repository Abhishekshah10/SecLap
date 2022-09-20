#include <iostream>
#include <string>
int main()
{
  int age1{22};
  std::cout << "Age : " << age1 << std::endl;

  std::cerr << "Error Message" << std::endl;
  std::clog << "Log Message" << std::endl;

  int age2;
  std::string name;
  std::cout << "Enter Age & Name " << std::endl;
  std::cin >> age2;
  // std::cin >> name;
  // std::cin >> age2 >> name;
  // std::cout << "Hello " << name << " Your Age is " << age2 << std::endl;

  std::string full_name;
  std::getline(std::cin, full_name);
  std::cout << "Hello" << full_name << " You are " << age2 << " years old!" << std::endl;

  return 0;
}