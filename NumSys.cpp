/*
Number Systems - Base 10 ,Binary, Octal, Hexadecimal

Base 10 :- 925 = 9 x 10**2 + 2 x 10**1 + 5 x 10**0

Binary (Base 2) :- Rep by 0b, 10010 = 1 x 2**4 + 0 x 2**3 + 0 x 2**2 + 1 x 2**1 + 0 x 2**0

Hexadecimal :- Rep by 0x,  Eg:- 0x 6E30F13F, Splits by 4 digits

Octal :- Rep by 0, Splits by 3 digits, Eg:- 0 156472
*/

#include <iostream>

int main()
{
  int n1 = 15;
  int n2 = 017;
  int n3 = 0x0F;
  int n4 = 0b00001111;

  std::cout << n1 << std::endl;
  std::cout << n2 << std::endl;
  std::cout << n3 << std::endl;
  std::cout << n4 << std::endl;

  return 0;
}
