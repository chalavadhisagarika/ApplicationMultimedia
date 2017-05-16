#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include "opencv2/stitching.hpp"

using namespace std;
using namespace cv;

int main( int argc, const char** argv )
{

        Mat img(500, 500, CV_8UC3, Scalar(255,255,255));
        namedWindow("Original", WINDOW_AUTOSIZE);
        
        Point p0(250,250);
        circle(img,p0,100,Scalar( 255, 0, 0 ),1,8,0);
        imshow("Original", img);
        
        waitKey(0);
        destroyWindow("img");

        return 0;
}


