#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include "opencv2/stitching.hpp"

using namespace std;
using namespace cv;

int main( int argc, const char** argv )
{

        Mat img(500, 500, CV_8UC3, Scalar(255,255,255));
        namedWindow("Original", WINDOW_AUTOSIZE);
        
        Point p0(100,20);
        Point p1(100,100);
        circle(img,(p0,p1), 63, (0,0,255), -1);
        imshow("Original", img);
        waitKey(0);
        destroyWindow("img");

        return 0;
}
