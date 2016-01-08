#include <iostream>

int main() 
{
  const float gravity = 9.8; 
  int seconds = 0;
  int distance;  

  std::cout << "enter the height of the building in meters: ";
  int height;
  std::cin >> height;

  while (height > 0) {
    std::cout << "At " << seconds << " seconds, the ball is at height: " << height << std::endl;
    seconds++;
    distance = gravity * (seconds * seconds) / 2;
    height -= distance;
  }
  
  std::cout << "At " << seconds << " seconds, the ball is at height: 0" << std::endl;

  return 0;
}
