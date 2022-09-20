/*
Precedence -- which operation to do first
Associativity -- which direction or which order
Prefix means it will add/subtract immediately whereas Postfix means it will print the same value the first time; it is called a second time to show the incremented/decremented value.
&& is AND operator, || is OR operator, ! is NOT operator

Output Formatting:- ios and iomanip
std:endl -- ending a line
std:flush -- causes immediate sending of data to the device connected to the stream
std:setw() -- sets width of elements in a line (iomanip)
std:right -- right justified the data
std:internal -- internal justified the data - sign is left justified while data is right justified
std:setfill() -- fill character in between data (iomanip)
std:boolalpha and std:noboolalpha -- control bool output format, true or false / 1 or 0
std:showpos and std:noshowpos -- show or hide the positive sign for positive numbers
std:dec and std:oct and std:hex -- decimal, octal & hexadecimal representation of numbers
std:showbase and std:noshowbase -- show the base for integral types
std:uppercase and std:nouppercase -- showcase in uppercase
std:scientific and std:fixed -- scientific is default representation of double numbers whereas fixed is fixed representation
std:cout.unsetf(std:ios:scientific | std:ios:fixed) returns to default representation
std:setprecision() -- set the precision of double numbers (iomanip)
std:showpoint and std:noshowpoint -- Show trailing zeros if necessary

#include<limits> -- std:numeric_limits<T>:min() or max() or lowest() where T is the type of integer

#include<cmath> -- Mathematical Operations Library which will include exponential, trigonometric and mathematical functions in-built within the library

Integral types less than 4 bytes in size do not support arithmetic operations

*/

#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>
int main()
{

  int value{5};

  std::cout << "======Postfix increment and decrement======" << std::endl;
  // Reset value to 5
  value = 5;

  std::cout << "The value is (incrementing) : " << value++ << std::endl; // 5
  std::cout << "The value is : " << value << std::endl;                  // 6

  std::cout << std::endl;

  // Decrement with postfix

  // Reset value to 5
  value = 5;

  std::cout << "The value is (decrementing) : " << value-- << std::endl; // 5
  std::cout << "The value is : " << value << std::endl;                  // 4

  //===================================================================

  std::cout << "======Prefix increment and decrement======" << std::endl;

  // Reset value to 5
  value = 5;

  ++value;
  std::cout << "The value is (prefix++) : " << value << std::endl; // 6

  // Reset value to 5
  value = 5;
  std::cout << "The value is (prefix++ in place) : " << ++value << std::endl; // 6

  std::cout << std::endl;

  // Prefix : Decrementing

  // Reset value to 5;
  value = 5;
  --value;
  std::cout << "The value is (prefix--) : " << value << std::endl; // 4

  // Reset value to 5;
  value = 5;
  std::cout << "The value is (prefix-- in place) : " << --value << std::endl; // 4

  // std::endl : places a new line character on the output stream.
  //        This is identical to placing '\n' on the output stream.

  std::cout << "Hello";
  std::cout << "World";

  std::cout << std::endl;

  std::cout << "-------------" << std::endl;

  std::cout << "Hello" << std::endl;
  std::cout << "World" << std::endl;

  std::cout << std::endl;

  std::cout << "Hello\n";
  std::cout << "World\n";

  //===================================================================
  std::cout << std::endl;

  // std::flush : flushes the output buffer to its final destination.
  std::cout << "This is a nice message...." << std::endl
            << std::flush;
  // After this std::flush, we're sure that at this line, the message has been sent
  // to the stream. This may be important in some applications.

  //===================================================================
  std::cout << std::endl;

  // std::setw() : Adjusts the field with for the item about to be printed.
  // The setw() manipulator only affects the next value to be printed.

  std::cout << "Unformatted table : " << std::endl;
  std::cout << "Daniel"
            << " "
            << "Gray"
            << " 25" << std::endl;
  std::cout << "Stanley"
            << " "
            << "Woods"
            << " 33" << std::endl;
  std::cout << "Jordan"
            << " "
            << "Parker"
            << " 45" << std::endl;
  std::cout << "Joe"
            << " "
            << "Ball"
            << " 21" << std::endl;
  std::cout << "Josh"
            << " "
            << "Carr"
            << " 27" << std::endl;
  std::cout << "Izaiah"
            << " "
            << "Robinson"
            << " 29" << std::endl;

  std::cout << std::endl;
  std::cout << "Formatted table : " << std::endl;

  std::cout << std::setw(10) << "Lastname" << std::setw(10) << "Firstname" << std::setw(5) << "Age" << std::endl;
  std::cout << std::setw(10) << "Daniel" << std::setw(10) << "Gray" << std::setw(5) << "25" << std::endl;
  std::cout << std::setw(10) << "Stanley" << std::setw(10) << "Woods" << std::setw(5) << "33" << std::endl;
  std::cout << std::setw(10) << "Jordan" << std::setw(10) << "Parker" << std::setw(5) << "45" << std::endl;
  std::cout << std::setw(10) << "Joe" << std::setw(10) << "Ball" << std::setw(5) << "21" << std::endl;
  std::cout << std::setw(10) << "Josh" << std::setw(10) << "Carr" << std::setw(5) << "27" << std::endl;
  std::cout << std::setw(10) << "Izaiah" << std::setw(10) << "Robinson" << std::setw(5) << "29" << std::endl;

  std::cout << std::endl;
  std::cout << "Formatted table with variables: " << std::endl;

  int col_width{14};

  std::cout << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Firstname" << std::setw(col_width / 2) << "Age" << std::endl;
  std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width / 2) << "25" << std::endl;
  std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Woods" << std::setw(col_width / 2) << "33" << std::endl;
  std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Parker" << std::setw(col_width / 2) << "45" << std::endl;
  std::cout << std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width / 2) << "21" << std::endl;
  std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width / 2) << "27" << std::endl;
  std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width / 2) << "29" << std::endl;

  //===================================================================
  std::cout << std::endl;

  // Justify : Values can be justified in their fields. There are three manipulators
  //           for adjusting the justification: left, right, and internal.

  // right justified
  std::cout << std::endl;
  std::cout << "Right justified table(default) :  " << std::endl;

  col_width = 20;

  std::cout << std::right;
  std::cout << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Firstname" << std::setw(col_width / 2) << "Age" << std::endl;
  std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width / 2) << "25" << std::endl;
  std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Woods" << std::setw(col_width / 2) << "33" << std::endl;
  std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Parker" << std::setw(col_width / 2) << "45" << std::endl;
  std::cout << std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width / 2) << "21" << std::endl;
  std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width / 2) << "27" << std::endl;
  std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width / 2) << "29" << std::endl;

  // Left justified
  std::cout << std::endl;
  std::cout << "Left justified table :  " << std::endl;

  col_width = 20;

  std::cout << std::left;
  std::cout << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Firstname" << std::setw(col_width / 2) << "Age" << std::endl;
  std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width / 2) << "25" << std::endl;
  std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Woods" << std::setw(col_width / 2) << "33" << std::endl;
  std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Parker" << std::setw(col_width / 2) << "45" << std::endl;
  std::cout << std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width / 2) << "21" << std::endl;
  std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width / 2) << "27" << std::endl;
  std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width / 2) << "29" << std::endl;

  // Internal justified : sign is left justified , data is right justified
  std::cout << std::endl;
  std::cout << "Internal justified : " << std::endl;
  std::cout << std::right;
  std::cout << std::setw(10) << -123.45 << std::endl;
  std::cout << std::internal;
  std::cout << std::setw(10) << -123.45 << std::endl;

  //===================================================================
  std::cout << std::endl;

  // setfill

  std::cout << std::endl;
  std::cout << "Table with fill characters :  " << std::endl;

  col_width = 20;

  std::cout << std::left;
  std::cout << std::setfill('*'); // The fill character
  std::cout << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Firstname" << std::setw(col_width / 2) << "Age" << std::endl;
  std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width / 2) << "25" << std::endl;
  std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Woods" << std::setw(col_width / 2) << "33" << std::endl;
  std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Parker" << std::setw(col_width / 2) << "45" << std::endl;
  std::cout << std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width / 2) << "21" << std::endl;
  std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width / 2) << "27" << std::endl;
  std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width / 2) << "29" << std::endl;

  //===================================================================
  std::cout << std::endl;

  // boolalpha and noboolapha : control bool output format : 1/0 or true/false

  bool condition{true};
  bool other_condition{false};

  std::cout << "condition : " << condition << std::endl;
  std::cout << "other_condition : " << other_condition << std::endl;

  std::cout << std::endl;
  std::cout << std::boolalpha;
  std::cout << "condition : " << condition << std::endl;
  std::cout << "other_condition : " << other_condition << std::endl;

  std::cout << std::endl;
  std::cout << std::noboolalpha;
  std::cout << "condition : " << condition << std::endl;
  std::cout << "other_condition : " << other_condition << std::endl;

  //===================================================================
  std::cout << std::endl;

  // showpos and noshowpos : show or hide the +  sign for positive numbers

  int pos_num{34};
  int neg_num{-45};

  std::cout << "pos_num : " << pos_num << std::endl;
  std::cout << "neg_num : " << neg_num << std::endl;

  std::cout << std::endl;
  std::cout << std::showpos;
  std::cout << "pos_num : " << pos_num << std::endl;
  std::cout << "neg_num : " << neg_num << std::endl;

  std::cout << std::endl;
  std::cout << std::noshowpos;
  std::cout << "pos_num : " << pos_num << std::endl;
  std::cout << "neg_num : " << neg_num << std::endl;

  //===================================================================
  std::cout << std::endl;

  // different number systems : std::dec, std::hex, std::oct

  int pos_int{717171};
  int neg_int{-47347};
  double double_var{498.32};

  std::cout << std::endl;
  std::cout << "default base format : " << std::endl;
  std::cout << "pos_int : " << pos_int << std::endl;
  std::cout << "neg_int : " << neg_int << std::endl;
  std::cout << "double_var : " << double_var << std::endl;

  std::cout << std::endl;
  std::cout << "pos_int in different bases : " << std::endl;
  std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
  std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
  std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;

  std::cout << std::endl;
  std::cout << "neg_int in different bases : " << std::endl;
  std::cout << "neg_int (dec) : " << std::dec << neg_int << std::endl;
  std::cout << "neg_int (hex) : " << std::hex << neg_int << std::endl;
  std::cout << "neg_int (oct) : " << std::oct << neg_int << std::endl;

  std::cout << std::endl;
  std::cout << "double_var in different bases : " << std::endl;
  std::cout << "double_var (dec) : " << std::dec << double_var << std::endl;
  std::cout << "double_var (hex) : " << std::hex << double_var << std::endl;
  std::cout << "double_var (oct) : " << std::oct << double_var << std::endl;

  //===================================================================
  std::cout << std::endl;

  // uppercase and nouppercase

  pos_int = 717171;

  std::cout << "pos_int (nouppercase : default) : " << std::endl;
  std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
  std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
  std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;

  std::cout << std::endl;
  std::cout << "pos_int (uppercase) : " << std::endl;
  std::cout << std::uppercase;
  std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
  std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
  std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;

  //===================================================================
  std::cout << std::endl;

  // fixed and scientific : for floating point values

  double a{3.1415926535897932384626433832795};
  double b{2006.0};
  double c{1.34e-10};

  std::cout << std::endl;
  std::cout << "double values (default : use scientific where necessary) : " << std::endl;
  std::cout << "a : " << a << std::endl;
  std::cout << "b : " << b << std::endl;
  std::cout << "c : " << c << std::endl;

  std::cout << std::endl;
  std::cout << "double values (fixed) : " << std::endl;
  std::cout << std::fixed;
  std::cout << "a : " << a << std::endl;
  std::cout << "b : " << b << std::endl;
  std::cout << "c : " << c << std::endl;

  std::cout << std::endl;
  std::cout << "double values (scientific) : " << std::endl;
  std::cout << std::scientific;
  std::cout << "a : " << a << std::endl;
  std::cout << "b : " << b << std::endl;
  std::cout << "c : " << c << std::endl;

  std::cout << std::endl;
  std::cout << "double values (back to defaults) : " << std::endl;
  std::cout.unsetf(std::ios::scientific | std::ios::fixed); // Hack
  std::cout << "a : " << a << std::endl;
  std::cout << "b : " << b << std::endl;
  std::cout << "c : " << c << std::endl;

  //===================================================================
  std::cout << std::endl;

  // setprecision() : the number of digits printed out for a floating point. Default is 6

  a = 3.1415926535897932384626433832795;

  std::cout << std::endl;
  std::cout << "a (default precision(6)) : " << a << std::endl;
  std::cout << std::setprecision(10);
  std::cout << "a (precision(10)) : " << a << std::endl;
  std::cout << std::setprecision(20);
  std::cout << "a (precision(20)) : " << a << std::endl;

  // If the precision is bigger than supported by the type, you'll just print garbage.

  //===================================================================
  std::cout << std::endl;

  // showpoint and noshowpoint : show trailing zeros if necessary
  // Force output of the decimal point

  double d{34.1};
  double e{101.99};
  double f{12.0};
  int g{45};

  std::cout << std::endl;
  std::cout << "noshowpoint (default) : " << std::endl;
  std::cout << "d : " << d << std::endl;
  std::cout << "e : " << e << std::endl;
  std::cout << "f : " << f << std::endl; // 12
  std::cout << "g : " << g << std::endl;

  std::cout << std::endl;
  std::cout << "showpoint: " << std::endl;
  std::cout << std::showpoint;
  std::cout << "d : " << d << std::endl;
  std::cout << "e : " << e << std::endl;
  std::cout << "f : " << f << std::endl; // 12.0
  std::cout << "g : " << g << std::endl;

  std::cout << "The range for short is from " << std::numeric_limits<short>::min() << " to "
            << std::numeric_limits<short>::max() << std::endl;

  std::cout << "The range for unsigned short is from " << std::numeric_limits<unsigned short>::min() << " to "
            << std::numeric_limits<unsigned short>::max() << std::endl;

  std::cout << "The range for int is from " << std::numeric_limits<int>::min() << " to "
            << std::numeric_limits<int>::max() << std::endl;

  std::cout << "The range for unsigned int is from " << std::numeric_limits<unsigned int>::min() << " to "
            << std::numeric_limits<unsigned int>::max() << std::endl;

  std::cout << "The range for long is from " << std::numeric_limits<long>::min() << " to "
            << std::numeric_limits<long>::max() << std::endl;

  std::cout << "The range for float is from " << std::numeric_limits<float>::min() << " to "
            << std::numeric_limits<float>::max() << std::endl;

  std::cout << "The range(with lowest) for float is from " << std::numeric_limits<float>::lowest() << " to "
            << std::numeric_limits<float>::max() << std::endl;

  std::cout << "The range(with lowest) for double is from " << std::numeric_limits<double>::lowest() << " to "
            << std::numeric_limits<double>::max() << std::endl;

  std::cout << "The range(with lowest) for long double is from " << std::numeric_limits<long double>::lowest() << " to "
            << std::numeric_limits<long double>::max() << std::endl;

  // Other facilities
  // More info : https://en.cppreference.com/w/cpp/types/numeric_limits
  std::cout << "int is signed : " << std::numeric_limits<int>::is_signed << std::endl;
  std::cout << "int digits : " << std::numeric_limits<int>::digits << std::endl;

  double weight{7.7};

  // floor
  std::cout << "Weight rounded to floor is : " << std::floor(weight) << std::endl;

  // ceil
  std::cout << "Weight rounded to ceil is : " << std::ceil(weight) << std::endl;

  // abs
  double savings{-5000};

  std::cout << "Abs of weight is : " << std::abs(weight) << std::endl;
  std::cout << "Abs of savings is : " << std::abs(savings) << std::endl;

  // exp : f(x) = e ^ x , where e = 2.71828 . Test the result here against a calculator
  double exponential = std::exp(10);
  std::cout << "The exponential of 10 is : " << exponential << std::endl;

  // pow
  std::cout << "3 ^ 4 is : " << std::pow(3, 4) << std::endl;
  std::cout << "9^3 is : " << std::pow(9, 3) << std::endl;

  // log : reverse function of pow. if 2^3 = 8 , log 8 in base 2 = 3.  Log is like asking
  //  to which exponent should we elevate 2 to get eight ? Log, by default computes the log
  //  in base e. There also is another function which uses base 10 called log10

  // Try the reverse operation of  e^4 = 54.59 , it will be log 54.59 in base e = ?
  std::cout << "Log ; to get 54.59, you would elevate e to the power of : "
            << std::log(54.59) << std::endl;

  // log10 , 10 ^ 4 = 10000  , to get 10k , you'd need to elevate 10 to the power of ? , this is log in base 10
  std::cout << "To get 10000, you'd need to elevate 10 to the power of : "
            << std::log10(10000) << std::endl; // 4

  // sqrt
  std::cout << "The square root of 81 is : " << std::sqrt(81) << std::endl;

  // round. Halfway points are rounded away from 0. 2,5 is rounded to 5 for example
  std::cout << "3.654 rounded to : " << std::round(3.654) << std::endl;
  std::cout << "2.5 is rounded to : " << std::round(2.5) << std::endl;
  std::cout << "2.4 is rounded to : " << std::round(2.4) << std::endl;

  return 0;
}