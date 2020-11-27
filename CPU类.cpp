#include <iostream>

using namespace std;
enum CPU_rank{P1=1,P2,P3,P4};
class CPU
{
private:
    CPU_rank rank;
    int frequency;
    float voltage;
public:
    void run()
    {
        cout<<"CPU Run!"<<endl;
    }
    void stop()
    {
        cout<<"CPU Stop!"<<endl;
    }
    CPU(int newfrequency,float newvoltage,int newRank)
    {
        frequency=newfrequency;
        voltage=newvoltage;
        rank=(CPU_rank)newRank;
        cout<<"Construct CPU!"<<endl;
    }
    ~CPU(){cout<<"Destruct CPU!";}
};
int main()
{
    CPU cpu(60,220,1);
    cpu.run();
    cpu.stop();

    return 0;
}
