#include <iostream>
#include<cassert>
using namespace std;
class student
{
private:
    string name;
    string id;
    int grade;
public:
    student(string nname="***",string iid="000",int ggrade=0)
    {
       name=nname;
       id=iid;
       grade=ggrade;
    }
    void setvalues(string nname,string iid,int ggrade)
    {
        name=nname;
        id=iid;
        grade=ggrade;
    }
    void output()
    {
        cout<<"Name:"<<name<<" id:"<<id<<" grade:"<<grade<<endl;
    }
};
class ArrayOfStudents
{
private:
    student *ptr;
    int size;
public:
    ArrayOfStudents(int size):size(size)
    {
        ptr=new student[size];
    }
    ~ArrayOfStudents()
    {
        cout<<"Deleting..."<<endl;
        delete[]ptr;
    }
    student &element(int index)
    {
        assert(index>=0&&index<size);
        return ptr[index];
    }
};
int main()
{
    int count;
    cin>>count;
    ArrayOfStudents stus(count);
    stus.element(0).output();
    stus.element(1).output();
    stus.element(0).setvalues("ZhangSan", "001", 85);
    stus.element(1).setvalues("Lisi", "002", 90);
    stus.element(0).output();
    stus.element(1).output();
    return 0;
}
