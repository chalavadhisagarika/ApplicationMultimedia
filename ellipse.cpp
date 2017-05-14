#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include "opencv2/stitching.hpp"
#include <iostream>

using namespace std;
using namespace cv;

int main( int argc, const char** argv )
{
	int alpha_slider = 0;
	
        Mat img(500, 500, CV_8UC3, Scalar(111,111,111));
        namedWindow("Original", WINDOW_AUTOSIZE);

	createTrackbar("Brightness", "Original", &alpha_slider, 100);
	
	while (true)
     {
	  Mat dst;
          int iBrightness  = iSliderValue1 - 50;
          double dContrast = iSliderValue2 / 50.0;

        ellipse( dst, Point( 200, 200 ), Size( 100.0, 160.0 ), 45, 0, 360, Scalar( 255, 255,255 ), 1, 8 ,dContrast, iBrightness);
        imshow("Original", img);
        waitKey(0);
     }
        destroyWindow("img");

        return 0;
}

