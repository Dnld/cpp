#include <iostream>

// this does not work
void printA()
{
  std::cout << a << std::endl;
}

int main() 
{
  int a = 1;
  printA();
  return 0;
}
