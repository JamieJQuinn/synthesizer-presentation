#include <iostream>

int main() {
  unsigned char ch;
  while(std::cin >> ch)
  {
    std::cout << int(ch) << std::endl;
  }

  return 0;
}
