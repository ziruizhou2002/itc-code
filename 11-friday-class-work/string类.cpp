#include <iostream>
#include<string.h>
using namespace std;
class String
{
public:
    String(const char *str=NULL);
    String(const String &r);
    ~String();
private:
    char *mydata;
};
String::String(const char *str)
{
    if(str==NULL)
    {
        cout<<"gouzao"<<endl;
        mydata=NULL;
    }
    else
    {
        cout<<"gouzao hello"<<endl;
        int sizestr=strlen(str);
        mydata=new char(sizestr+1);
        strcpy(mydata,str);
    }
}
String::String(const String &r)
{
    cout<<"kaobei gouzao hello"<<endl;
    int len=strlen(r.mydata);
    mydata=new char(len+1);
    strcpy(mydata,r.mydata);
}
String::~String()
{
    if(mydata==NULL)
    {
        cout<<"xigou"<<endl;
    }
    if(mydata!=NULL)
    {
        cout<<"xigou hello"<<endl;
    }
    delete [] mydata;
}
int main()
{
    String s1,s2("hello");
    String s3(s2);
    return 0;
}
