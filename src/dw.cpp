#include "dw.h"

Point::Point(int x, int y) { x_ = x y_ = y; }

Point Point::operator+(Point other) const {
  Point result(x_ + other.x_, y_ + other.y_) return result;
}

int Point::get_x() const { return x_; }

int Point::get_y() { return y_; }
