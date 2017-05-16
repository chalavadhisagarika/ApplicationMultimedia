#ifndef LINE_H_
#define Line_H_

#include <opencv2/imgproc.hpp>
#include <opencv2/core.hpp>

using namespace cv;

class Line{

public :
Line (const Point&p0,const Point&p1)
    : p0_(p0),p1_(p1)
{}


   
    void set_color(Scalar color);
 void draw(Mat &img);
    

    private:
    Point p0_,p1_;

}; 
#endif // LINE_H
