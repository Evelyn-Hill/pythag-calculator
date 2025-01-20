#include <cmath>
#include <iostream>
#include <math.h>
#include <string>

float solveForAB(float a, float c);
float solveForC(float a, float b);

int main(void) {

  float a, b, c;

  bool solvingForC = false;

  std::string ans;

  std::cout << "Are you solving for C? y/n" << std::endl;
  std::cin >> ans;

  if (ans.compare("y") == 0) {

    std::cout << "Enter 'a' value." << std::endl;
    std::cin >> a;

    std::cout << "Enter 'b' value." << std::endl;
    std::cin >> b;

    std::cout << "Result: " << solveForC(a, b) << std::endl;

    return 0;

  } else if (ans.compare("n") == 0) {
    std::cout << "Enter 'a' value." << std::endl;
    std::cin >> a;

    std::cout << "Enter 'c' value." << std::endl;
    std::cin >> c;

    std::cout << "Result: " << solveForAB(a, c) << std::endl;
    return 0;
  } else {
    std::cout << "ERROR: INVALID RESPONSE" << std::endl;
    return 1;
  }
}

float solveForAB(float a, float c) {
  // a2 + b2 = c2;

  float a2, b2, c2;

  a2 = a * a;
  c2 = c * c;

  c2 -= a2;

  return std::sqrt(c2);
}

float solveForC(float a, float b) {

  // a2 + b2 = c2

  float a2, b2, c2;

  a2 = a * a;
  b2 = b * b;

  c2 = a2 + b2;

  return std::sqrt(c2);
}
