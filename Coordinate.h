// Copyright 2025 Landon Davidson
// landond@uw.edu

#ifndef COORDINATE_H_
#define COORDINATE_H_

#include <string>

namespace Coordinate {

class Coordinate {
 public:
  // Virtual default destructor
  virtual ~Coordinate() = default;
  // Return a string representation of coord object
  virtual std::string ToString() const = 0;
};  // class Coordinate

}  // namespace Coordinate

#endif  // COORDINATE_H_
