#include <iostream>
#include <opencv2/imgproc.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include "line.hpp"

using namespace std;
using namespace cv;

void line :: draw(MAT&img){
     line(img,p0_,p1_,Scalar(255,87,51));
}
