#include <iostream>
#include <iomanip>

int main() 
{
  double a = 4e5;
  std::cout << a << std::endl;
  double b = 3.234e300;
  std::cout << std::setprecision(400);
  std::cout << b * 2 << std::endl;

//  std::cout << Inf << std::endl;
//  std::cout << NaN << std::endl:  

  return 0;
}
