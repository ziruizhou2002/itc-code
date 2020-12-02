#include <iostream>
#include<cmath>
using namespace std;
class imaginary
{
private:
    float a,b;
public:
    imaginary(float aa=0,float bb=0)
    {
        a=aa;
        b=bb;
    }
    //~imaginary();
    friend void add(imaginary &i1,imaginary &i2);
    friend void sub(imaginary &i1,imaginary &i2);
};
void add(imaginary &i1,imaginary &i2)
{
    float x=i1.a+i2.a;
    float y=i1.b+i2.b;
    cout<<x<<"+"<<y<<"i"<<endl;
}
void sub(imaginary &i1,imaginary &i2)
{
    int x=i1.a-i2.a;
    int y=i1.b-i2.b;
    if(y>0){cout<<x<<"+"<<y<<"i";}
    else{cout<<x<<"-"<<fabs(y)<<"i";}
}
int main()
{
    float x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    imaginary imag1(x1,y1),imag2(x2,y2);
    add(imag1,imag2);
    sub(imag1,imag2);
    return 0;
}
