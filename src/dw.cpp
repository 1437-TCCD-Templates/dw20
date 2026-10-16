#include "dw.h"

Point::Point(int x, int y) { m_x = x m_y = y; }

Point Point::operator+(Point other) const {
  Point result(m_x + other.m_x, m_y + other.m_y) return result;
}

int Point::get_x() const { return m_x; }

int Point::get_y() { return m_y; }
