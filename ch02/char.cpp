#include <iostream>

int main()
{
  char ch(97);
  std::cout << ch << std::endl;
  char l(66);
  std::cout << "l as a char" << std::endl;
  std::cout << l << std::endl;
  std::cout << "l as an int" << std::endl;
  std::cout << int(l) << std::endl;

  std::cout << "enter a char: ";
  char c;
  std::cin >> c;
  std::cout << c << " has the ASCII code " << int(c) << std::endl; 

  std::cout << "first line\nsecond lint\n\tthrid line tabbed" << std::endl;

  char single = 'l';
  std::cout << single << std::endl;

  return 0;
}
