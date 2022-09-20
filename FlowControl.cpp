// if-else and switch case statements
// res = (condition) ? opt1 : opt2;  Ternary Condition
#include <iostream>

const int Pen{10};
const int Marker{20};
const int Eraser{30};
const int Rectangle{40};
const int Circle{50};
const int Ellipse{60};

int main()
{
  int max{};
  int a{25};
  int b{35};

  max = (a > b) ? a : b;
  std::cout << max << std::endl;

  int n1 = 11;
  int n2 = 16;

  if (n1 > n2)
  {
    std::cout << "Number 1 is greater" << std::endl;
  }
  else if (n1 == n2)
  {
    std::cout << "Both Numbers are equal" << std::endl;
  }
  else
  {
    std::cout << "Number 2 is greater" << std::endl;
  }

  int tool{Eraser};

  switch (tool)
  {
  case Pen:
  {
    std::cout << "Active tool is Pen" << std::endl;
  }
  break;

  case Marker:
  {
    std::cout << "Active tool is Marker" << std::endl;
  }
  break;

  case Eraser:
  case Rectangle:
  case Circle:
  {
    std::cout << "Drawing Shapes" << std::endl;
  }
  break;

  case Ellipse:
  {
    std::cout << "Active tool is Ellipse" << std::endl;
  }
  break;

  default:
  {
    std::cout << "No match found" << std::endl;
  }
  break;
  }

  std::cout << "Moving on" << std::endl;
}