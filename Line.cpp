#include "Line.hpp"
void Line::set_color(Scalar c) { 		//adding color and make an update
  color_ = c;
}

void Line::draw(Mat &img, float t) {
Point2f P;
P.x=p0_.x+(p1_.x-p0_.x)*(t/100.0);
P.y=p0_.y+(p1_.y-p0_.y)*(t/100.0);
line(img,p0_,P,Scalar(255,0,0, CV_AA));
}
