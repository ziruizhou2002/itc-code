#include <iostream>
#include<string.h>
using namespace std;
class Student
{
private:
    string name;
    int score;
public:
    static int total,aver;
    Student(int x=0)
    {
        score=x;
    }
    ~Student(){}
    void scoreinitial(int xx)
    {
        score=xx;
        total+=xx;
    }
    void nameinitial()
    {
        cin>>name;
    }
    static void Average(int sum)
    {
        aver=total/sum;
    }
    friend char cmp(const Student &s1,const Student &s2);
    int getscore() const{return score;}
};
int Student::aver=0;
int Student::total=0;
char cmp(const Student &s1,const Student &s2)
{
    if(s1.getscore()>s2.getscore()){return '>';}
    if(s1.getscore()<s2.getscore()){return '<';}
    if(s1.getscore()==s2.getscore()){return '=';}
}
int main()
{
    int m=2;
    int temp;
    Student *ptr=new Student[m];
    for(int i=0;i<m;i++)
    {
        ptr[i].nameinitial();
        cin>>temp;
        ptr[i].scoreinitial(temp);
    }
    Student::Average(m);
    //cout<<Student::total<<endl;
    //cout<<Student::aver;
    cout<<cmp(ptr[0],ptr[1]);

    delete []ptr;
    return 0;
}
