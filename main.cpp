#include <iostream>

using namespace std;
int arr[2001]={0};
int main()
{
    int n,k,t,xl,yd,xr,yu;
    cin>>n>>k>>t>>xl>>yd>>xr>>yu;
    int tempn=n;
    int jingguo=0;
    int douliu=0;
    while(tempn--)
    {
        for(int i=1;i<=t;i++)
        {
            cin>>arr[i]>>arr[i+1000];
        }
       for(int i=1;i<=t;i++)
       {
            if(arr[i]>=xl&&arr[i]<=xr&&arr[i+1000]>=yd&&arr[i+1000]<=yu)
        {
            jingguo++;
            break;
        }
       }
       int tempk=k;
       for(int i=1;i<=t;i++)
       {
           if(arr[i]>=xl&&arr[i]<=xr&&arr[i+1000]>=yd&&arr[i+1000]<=yu)
           {
               tempk--;
               if(tempk==0)
               {
                   douliu++;
                   break;
               }
           }
           else
           {
               tempk=k;
           }
       }

    }
    cout<<jingguo<<endl;
    cout<<douliu<<endl;

    return 0;
}