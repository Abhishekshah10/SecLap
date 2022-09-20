/*
Typically occupies 4 or more bytes in memory
Stores whole numbers

Unsigned int - can store positive integers
Signed int - can store both positive and negative integers

unsigned int range -- 0 to 4,294,967,295
signed int range -- -2,147,468,648 to 2,147,468,647

Float -- size 4 and precision 7
Double -- size 8 and precision 15
Long Double -- size 12 and precision greater than double

IEE754 Floating Point Numbers Memory Representation
0.0/0.0 is Nan while n(floating point)/0.0 is +/- infinity
e8 would mean 10**8 where e-5 would mean 10**-5

bool --- true{1},false{0}

std::boolalpha forces the output to print true/false
*/

#include <iostream>
#include <iomanip>
int main()
{

  std::cout << sizeof(int) << std::endl;
  std::cout << sizeof(float) << std::endl;
  std::cout << sizeof(double) << std::endl;
  std::cout << sizeof(long double) << std::endl;
  std::cout << sizeof(bool) << std::endl;

  std::cout << std::setprecision(20); // Control the precision from output
  // 2 bytes
  short short_var{-32768};
  short int short_int{455};
  signed short signed_short{122};
  signed short int signed_short_int{-456};
  unsigned short int unisgned_short_int{456};
  // 4 bytes
  int int_var{55};
  signed signed_var{66};
  signed int signed_int{77};
  unsigned int unisgned_int{77};
  // 4 or 8 bytes
  long long_var{88};
  long int long_int{33};
  signed long signed_long{44};
  signed long int signed_long_int{44};
  unsigned long int unsigned_long_int{44};
  // 8 bytes
  long long long_long{888};
  long long int long_long_int{898};
  signed long long signed_long_long{788};
  signed long long int signed_long_long_int{1288};
  unsigned long long int unsigned_long_long_int{1288};

  float num1{1.25368f};
  double num2{1.023657891};
  long double num3{1.968730415L};
}
