//
// Created by landond on 2/17/25.
//

#include "Polar.h"

#include <cmath>

namespace Polar {
  double Polar::Distance(const Polar &polar) const {
    // Find the distance using the formula sqrt(|x|^2 + |y|^2 - 2|x||y|cos(x.angle - y.angle)
    // Calculate |x|^2 + |y|^2
    const double mag_sum = radius_ * radius_ + polar.radius_ * polar.radius_;
    // Calculate 2|x||y|cos(x.angle - y.angle
    const double trig_sum = 2 * radius_ * polar.radius_ * std::cos(angle_ - polar.angle_);
    // Subtract trig_sum from mag_sum and return the sqrt
    return std::sqrt(mag_sum - trig_sum);
  }
} // Polar