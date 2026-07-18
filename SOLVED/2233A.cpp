#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double n,x,y,z;
        cin>>n>>x>>y>>z;
        double time1=n/(x+y);
        time1=ceil(time1);
        double time2=(n+10*y*z)/(10*y+x);
        time2=ceil(time2);
        cout<<min(time1,time2)<<endl;
    }
}