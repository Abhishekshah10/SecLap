#include <iostream>

int add_nums(int first, int second)
{
  int result = first + second;
  return result;
}

int main()
{
  int first_num = 6;
  int second_num = 8;
  int res = first_num + second_num;

  std::cout << res << std::endl;

  std::cout << add_nums(16, 31) << std::endl;
  return 0;
}