#include<iostream>

using namespace std;
class point
{
private:
     int x,y;
public:
     point(int a, int b)
     {
     x=a;
     y=b;
     }
point sub(point &px)
     {
     point temp(0,0);
     temp.x=x-px.x;
     temp.y=y-px.y;
     return (temp);
     }
     void display()
     {
     cout<<"SUB of x coordinates is:"<<x<<endl;
     cout<<"SUB of y coordinates is:"<<y<<endl;
     }
};
int main()
{

point p1(4,5),p2(6,7),p3(0,0);
p3=p1.sub(p2);
p3.display();
cout<<"Thank you"<<endl;
return 0;
}
