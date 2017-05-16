#ifndef LINE_H
#define LINE_H

#include <opencv2/imgproc.hpp>
#include <opencv2/core.hpp>
using namespace cv;

class Line {
 public:
 Line(const Point &p0, const Point &p1) 			// create constructor and pass an image. Any part of code can call it.
      : p0_(p0),p1_(p1)
  {}

  void set_color(Scalar c);			// choose color of line
  void draw(Mat &img,float t);			//add point

 private:		 			// only this class can access it because it is private
  Point p0_,p1_	;			// variable of class
  Scalar color_;
  
};

#endif 						//WINDOW_DRAWLINE_H

