// Copyright 2025 Landon Davidson
// landond@uw.edu

#include <iostream>
#include <cmath>

#include "Polar.h"
#include "Cartesian.h"

int main(int argc, char** argv) {
  std::cout << "---Cartesian---\n";
  // Create two cartesian points then test Distance and ToString
  const Cartesian::Cartesian cart1(10, 6);
  const Cartesian::Cartesian cart2(6, 3);
  std::cout << "Distance between (10, 6) and (6, 3) = " << cart1.Distance(cart2) << "\n";
  std::cout << "cart1: " << cart1.ToString() << "\n";

  std::cout << "\n--Polar--\n";
  // Create two polar points then test Distance and ToString
  const Polar::Polar pol1(10, 0);
  const Polar::Polar pol2(10, M_PI);
  std::cout << "Distance between (10, 0) and (10, pi) = " << pol1.Distance(pol2) << "\n";
  std::cout << "pol2: " << pol2.ToString() << "\n";
}
