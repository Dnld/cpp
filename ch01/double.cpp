#include <iostream>

int doubleInt(int a)
{
  return a * 2;
}

int getInput()
{
  std::cout << "please enter a number: ";
  int a;
  std::cin >> a;
  return a;
}

int main() 
{
  std::cout << doubleInt(getInput()) << std::endl;
  return 0;
}
