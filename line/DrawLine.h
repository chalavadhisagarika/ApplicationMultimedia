#ifndef WINDOW_DRAWLINE_H
#define WINDOW_DRAWLINE_H

#include <opencv2/imgproc.hpp>
#include <opencv2/core.hpp>
using namespace cv;

class DrawLine {
 public:
  DrawLine(const Mat& img)
      : img_(img)
  {}

  void set_color(Scalar c);
  void add_point(Point p);

 private:
  void update();

  Mat img_;
  Scalar color_;
  std::vector<Point> points_;
};

#endif //WINDOW_DRAWLINE_H
