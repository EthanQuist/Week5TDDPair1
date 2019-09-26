// Copyright 2019 Copyright Ryan Bates and Pruthvikumar Sanghavi

#include <lib.hpp>


int main() {
  PIDController controller(2, 2, 2);
  double result;
  result = controller.compute(-10, -11);
  std::cout << "Result is " << result << std::endl;
  return 0;
}



