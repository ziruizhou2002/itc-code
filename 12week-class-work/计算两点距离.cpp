#include <iostream>
#include<cmath>
using namespace std;
class point
{
private:
    float x,y;
public:
    point(float xx=0,float yy=0)
    {
        x=xx;
        y=yy;
    }
    ~point(){}
    friend float Distance(point &p1,point &p2);
};
float Distance(point &p1,point &p2)
{
    double x=p1.x-p2.x;
    double y=p1.y-p2.y;
    return static_cast<float>(sqrt(x*x+y*y));
}
int main()
{
    float p1_x,p1_y,p2_x,p2_y;
    cin>> p1_x>>p1_y>>p2_x>>p2_y;
    point p1(p1_x,p1_y),p2(p2_x,p2_y);
    cout<<Distance(p1,p2);
    return 0;
}
