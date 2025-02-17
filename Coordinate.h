// Copyright 2025 Landond Davidson

#ifndef COORDINATE_H_
#define COORDINATE_H_

#include <string>

namespace Coordinate {

class Coordinate {
 public:
  // Return a string representation of coord object
  virtual std::string ToString() = 0;
};  // class Coordinate

}  // namespace Coordinate

#endif //COORDINATE_H_
