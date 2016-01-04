#include <iostream>

void printer()
{
  std::cout << "inside printer" << std::endl;
}

int returnFive() 
{
  return 5;
}

int getVal()
{
  int a;
  std::cout << "please enter a value: ";
  std::cin >> a;
  return a; 
}

int main()
{
  printer();
  std::cout << "here is the number five: " << returnFive() << std::endl;
  int a = getVal();
  std::cout << "the user entered " << a << std::endl;
  return 0;
}
