#include<iostream>
using namespace std;
  
class Point{

 public:
 
  Point()
  :x(0), y(0) {}

Point(int x,int y)
  : x(x),y(y)
  {}
  
  int x,y;
  
  Point operator+(Point &P){
	  
  Point X;
  
  X.x = this->x + P.x;
  X.y = this->y + P.y;
  
  return X;
  }
  
  Point operator-(Point &P){
	  
  Point Y;
   Y.x = this->x - P.x;
  Y.y = this->y - P.y;
  
  return Y;
}

bool operator ==(Point &P){
	
return ((this->x == P.x ) && (this->y == P.y));
}


Point operator*(const int s){
	
	Point X;
	
  X.x = (this->x)*s;
  X.y = (this->y)*s;
  
  return X;
 }
 };


int main( int, char** argv )
{
 
 Point A,B,C,D,E;

 
 A.x=5;
 A.y=10;
 B.x=14;
 B.y=80;
 
 
 C= A + B;
 D= A - B;
 
 E=A*3;
 
 if (A == B){
	 cout<<"A is equal to B";
 }
 
 cout<<C.x<< "," <<C.y<<endl;
 cout<<D.x<< "," <<D.y<<endl;
 cout<<E.x<<","<<E.y<<endl;
 };
 
  
