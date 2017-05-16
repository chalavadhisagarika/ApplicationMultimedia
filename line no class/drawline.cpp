#include <iostream>
#include <opencv2/imgproc.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include "line.hpp"

using namespace std;
using namespace cv;

int main( int, char** argv)
{


    Mat img=Mat(500,500,CV_8UC3,Scalar(255,255,255));
    namedWindow("img",WINDOW_NORMAL);

    Point p0(10,100);
    Point p1(200,400);
    Scalar color(0,1,1);
    line(img,p0,p1,color);
    imshow("img", img);
    waitKey(0);
    destroyWindow("img");
    return(0);




}
