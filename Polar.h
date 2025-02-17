//
// Created by landond on 2/17/25.
//

#ifndef POLAR_H
#define POLAR_H

#include <string>

#include "Coordinate.h"

namespace Polar {

class Polar : Coordinate::Coordinate {
 public:
  // Default and two arg constructor
  Polar() : radius_(0), angle_(0) {}
  Polar(double radius, double angle) : radius_(radius), angle_(angle) {}

  // Represent Polar as a string
  std::string ToString() const override {
    std::string obj_type = "Polar ";
    return obj_type + "(" + std::to_string(radius_) + "," + std::to_string(angle_) + ")";
  }

  // Return the distance between this and another polar object
  double Distance(const Polar& polar) const;

 private:
  double radius_;
  double angle_;
};

} // Polar

#endif //POLAR_H
