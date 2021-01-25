#include <iostream>
#include <stdexcept>

int main() {
  throw std::runtime_error("problem");
  std::cout << "Hello world!" << std::endl;
  return 0;
}
