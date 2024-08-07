#include <iostream>
#include <vector>

#include "Statistics/DescriptiveStatistics.hpp"

int main() {
  std::cout << "Hello Cpp" << std::endl;

  std::cout << "Given the vector: " << std::endl;

  std::vector<double> vec = {1.0, 2.0, 3.0, 4.0, 5.0};

  std::for_each(vec.cbegin(), vec.cend(),
                [](const int x) { std::cout << x << " "; });
  std::cout << std::endl;

  const double mean = statistics::computeMean(vec);

  std::cout << "The mean is: " << mean << std::endl;

  return 0;
}