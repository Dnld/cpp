#include <iostream>

int main() 
{
  std::cout << "enter a double value: ";
  double a;
  std::cin >> a;
  std::cout << "enter another double value: ";
  double b;
  std::cin >> b;
  
  std::cout << "enter +, -, * or /: ";
  char op;
  std::cin >> op;

  if (op == '+') {
    std::cout << a + b << std::endl;
  } else if (op ==  '-') {
    std::cout << a - b << std::endl;
  } else if (op == '*') {
    std::cout << a * b << std::endl;
  } else {
    std::cout << a / b << std::endl;
  }  

  return 0;
}
