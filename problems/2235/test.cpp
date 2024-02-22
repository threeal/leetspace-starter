#include <iostream>
#include "solution.cpp"

int main() {
  std::cout << "Testing example 1...\n";
  auto output = Solution{}.sum(12, 5);
  if (output != 17) {
    std::cerr << "Wrong output: Expected 17, got " << output << "\n";
    return 1;
  }

  std::cout << "Testing example 2...\n";
  output = Solution{}.sum(-10, 4);
  if (output != -6) {
    std::cerr << "Wrong output: Expected -6, got " << output << "\n";
    return 1;
  }
}
