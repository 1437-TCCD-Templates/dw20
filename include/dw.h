#ifndef DW_H
#define DW_H

class Point {
public:
  Point(int x, int y);
  Point operator+(const Point &other) const;
  int get_x() const;
  int get_y() const;

private:
  int m_x;
  int m_y;
};

#endif
