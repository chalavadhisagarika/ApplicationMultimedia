#include <iostream>
#include <string>
#include <opencv2/imgproc.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include "Line.hpp"


//instead of specifying seperately which library contain this function. we use namespace.
using namespace std;
using namespace cv;
int pos=0;
struct data_input {
  Mat* img;
  Line *line;
};

// call back for mouse input
static void onChange(int pos, void* userInput);
/*void drawline(int, void*){
float tf=t*0.0;
P.x=p0.x+(P1.x-P0.x)*tf;
P.y=p0.y+(P1.y-P0.y)*tf;


}*/

//exercise: add a second input image and show it in the WINDOW_AUTOSIZE


int main( int argc, const char** argv )
{
Mat img(Size(300,300),CV_8UC3,Scalar(255,255,255));
namedWindow("img", WINDOW_NORMAL);
 int x,y,x1,y1;
cout<<"enter the value of x for point p0 ";
cin>>x;
cout<<"enter the value of y for point p0 ";
cin>>y;
cout<<"enter the value of x1 for point p1 ";
cin>>x1;
cout<<"enter the value of y1 for point p1 ";
cin>>y1;
 
Point p0(x,y);
Point p1(x1,y1);
Line line(p0,p1);
line.set_color(Scalar(0,0,0)); 		//set color

data_input data; 				// create structure object
  data.img = &img; 				//pass classes
  data.line = &line;
//int t=0;
//createTrackbar("track", "img", &t, 100, drawline);
createTrackbar("track", "img", &pos, 100, onChange, &data);
//onChange(pos, &data);

//line.draw(img);



//line(img, p0, p1,Scalar(255,255,0), 5);
imshow("img", img);
//line(img,p0,p1,Scalar(0,255,0));
waitKey(0);
destroyWindow("img");
}
// Trackbar call back function
static void onChange(int pos, void* userInput)
{
  if(pos <= 0)
    return;
  data_input* data = (data_input*)userInput;
  // casting the userInput to the current image
  Mat *img = data->img;
  Line *line = data->line;

  //line->draw(&img,(float)pos); 		//object class
 // cout<<pos<<endl;
  Mat new_img= img->clone();
  line->draw(new_img,(float)pos); 		//object class
  //re-draw the image
  imshow("img", new_img);
}

