#include <iostream>

int main() 
{
  unsigned short a = 65535;
  std::cout << "a is " << a << std::endl;
  a++;
  std::cout << "a is " << a << std::endl;
  a--;
  std::cout << "a is " << a << std::endl;

  std::cout << "testing division" << std::endl;
  int x = 11;
  std::cout << x / 3 << std::endl;
  std::cout << x % 3 << std::endl;

  return 0; 
}
