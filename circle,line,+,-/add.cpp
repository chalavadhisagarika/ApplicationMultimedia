#include<iostream>

using namespace std;

class point
{
private:
     int x,y;
     friend void sum(point px,point py);
public:
     point()
     {
     cout<<"Enter the coordinates of the point: ";
     cin>>x>>y;
     } 
};

void sum(point px,point py)
{
int l,m;
l=px.x+py.x;
m=px.y+py.y;
cout<<"Sum of the coordinates of (X0,Y0) is :";
cout<<l<<" & "<<m<<" respectively.";
}

int main()
{

point p1,p2;
sum(p1,p2);

return 0;
} 
