// Copyright 2025 Landon Davidson
// landond@uw.edu

#ifndef CARTESIAN_H_
#define CARTESIAN_H_

#include "Coordinate.h"
#include <string>

namespace Cartesian {

class Cartesian : Coordinate::Coordinate {
 public:
  // Default and two arg constructors
  Cartesian() : x_(0), y_(0) {}
  Cartesian(double x, double y) : x_(x), y_(y) {}

  // Return string representation of cartesian coord
  std::string ToString() override {return "(" + std::to_string(x_) + "," + std::to_string(y_) + ")";}
  // Return the distance between this and another cartesian
  double Distance(const Cartesian &cart) const;

 private:
  double x_;
  double y_;
};  // class Cartesian

}  // namespace Cartesian

#endif  // CARTESIAN_H_
