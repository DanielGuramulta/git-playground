#include <iostream>
#include <stdexcept>
#include <thread>

// add a single line comment
// add another comment
int main() {
  throw std::runtime_error("problem");
  std::cout << "Hello world!" << std::endl;
  return 0;
}
