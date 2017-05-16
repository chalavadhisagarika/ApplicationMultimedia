#include "DrawLine.h"

void DrawLine::set_color(Scalar c) {
  color_ = c;
  update();
}

void DrawLine::add_point(Point p) {
  points_.push_back(p);
  update();
}

//exercise:
//  1°create a open-polygone instead of line (create a new class)
//  2°instead of redrawing all the points, just draw only the new elements
//  3°create a base abstract draw class for line and polygons
void DrawLine::update() {

  int pairs = points_.size();
  if (pairs % 2) --pairs;
  if (pairs == 0) return;

  auto it = points_.begin();

  while(pairs) {
    Point begin = *it;
    --pairs;
    ++it;
    Point end = *it;
    --pairs;
    ++it;

    line(img_, begin, end, color_);
  }
}