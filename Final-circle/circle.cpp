#include <opencv2/imgproc.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "opencv2/stitching.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/videoio.hpp"
#include "opencv2/highgui.hpp"
#include<iostream>

using namespace std;
using namespace cv;

static void onChange(int pos,void* userInput);


int main( int argc, const char** argv )
{

        Mat img(500, 500, CV_8UC3, Scalar(255,255,255));
		namedWindow("img", WINDOW_NORMAL);
int expandAmount=0;
		
		createTrackbar("img","img", &expandAmount,360,onChange,&img);
		
		onChange(expandAmount, &img);
        imshow("img", img);
        waitKey(0);
        destroyWindow("img");
        return 0;
}

static void onChange(int pos,void* userInput)
{

	
	Mat img=((Mat*)userInput)->clone();
	Point centre(300,300);
	int radius=100;
	Scalar color=Scalar(0,0,0);

	std::vector<Point2f> points;
	const float num_points=1.0/300.0;
	const float radiants = ((float)pos*M_PI)/180.0;

for (float t=0.0; t<= radiants; t+= num_points)
{
	Point P=centre;
	
	P.x += cos(t)*radius;
	P.y += sin(t)*radius;
	points.push_back(std::move(P));
	}

	Mat curve(points,true);
	curve.convertTo(curve,CV_32S);
	polylines(img,curve,false,color,2,CV_AA);
	
	imshow( "img", img );
	


}

