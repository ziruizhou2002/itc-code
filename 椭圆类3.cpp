#include <iostream>
#include <cmath>
#define const double pi 3.1415
using namespace std;
class Point
{
private:
    int x,y;
public:
    Point(int xx=0,int yy=0)
    {
        x=xx;
        y=yy;
    }
    Point(Point &p)
    {
        x=p.x;
        y=p.y;
    }
    ~Point()
    {
        cout<<"Point xigou "<<x<<" "<<y<<endl;
    }
    int GetX(){return x;}
    int GetY(){return y;}

};
class Ellipse
{
private:
    Point a,b;
public:
    int GetX1(){return a.GetX();}
    int GetY1(){return a.GetY();}
    int GetX2(){return b.GetX();}
    int GetY2(){return b.GetY();}
    void show()//(int x1,int x2,int y1,int y2)
    {
          cout<<a.GetX()<<" "<<a.GetY()<<" "<<b.GetX()<<" "<<b.GetY()<<endl;
    }
    ~Ellipse()
    {
        cout<<"Ellipse xigou"<<" ";
        cout<<b.GetX()<<" "<<b.GetY()<<endl;
    }
    Ellipse(int x1,int y1,int x2,int y2):a(x1,y1),b(x2,y2)
    {
         cout<<"gouzao 1 "<<a.GetX()<<" "<<a.GetY()<<" "<<b.GetX()<<" "<<b.GetY()<<endl;
    }
    Ellipse(Point &p1,Point &p2):a(p1),b(p2)
    {
        cout<<"gouzao 2 "<<a.GetX()<<" "<<a.GetY()<<" "<<b.GetX()<<" "<<b.GetY()<<endl;
    }
    double area()//(int x1,int x2,int y1,int y2)
    {
         return fabs(3.1415*((b.GetX()-a.GetX())/2)*((a.GetY()-b.GetY())/2));
    }

};

int main()
{
    int x1,x2,y1,y2,x3,y3,x4,y4;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    Ellipse e1(x1,y1,x2,y2);
    Point xp1(x3,y3);
    Point xp2(x4,y4);
    Ellipse e2(xp1,xp2);
    e1.show();
    e2.show();
    double s1=e1.area();//(x1,x2,y1,y2);
    double s2=e2.area();//(x1,x2,y1,y2);
    cout<<s1<<endl;
    cout<<s2<<endl;
    return 0;
}

