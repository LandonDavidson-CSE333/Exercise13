//
// Created by landond on 2/17/25.
//

#include "Cartesian.h"

#include <valarray>

namespace Cartesian {
  double Cartesian::Distance(const Cartesian &cart) const {
    // Find the distance between each component
    double x_dist = cart.x_ - x_;
    double y_dist = cart.y_ - y_;

    // Square the components
    x_dist *= x_dist;
    y_dist *= y_dist;

    // Return distance using pythagorean theorem
    return std::sqrt(x_dist + y_dist);
  }

}  // Cartesian