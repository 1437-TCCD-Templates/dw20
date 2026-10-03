#include "dw.h"
#include <gtest/gtest.h>

TEST(Point, AddsTwoPoints) {
  Point a(1, 2);
  Point b(3, 4);
  Point c = a + b;
  EXPECT_EQ(c.get_x(), 4);
  EXPECT_EQ(c.get_y(), 6);
}

TEST(Point, AddingNegativeCoordinates) {
  Point a(-1, -1);
  Point b(1, 1);
  Point c = a + b;
  EXPECT_EQ(c.get_x(), 0);
  EXPECT_EQ(c.get_y(), 0);
}
