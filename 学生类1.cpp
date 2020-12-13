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

};
//int Student::sum=0;
int Student::aver=0;
int Student::total=0;
int main()
{
    int m=5;
    int temp;
    Student *ptr=new Student[m];
    for(int i=0;i<m;i++)
    {
        ptr[i].nameinitial();
        cin>>temp;
        ptr[i].scoreinitial(temp);
    }
    Student::Average(m);
    cout<<Student::total<<endl;
    cout<<Student::aver;
    delete []ptr;
    return 0;
}
