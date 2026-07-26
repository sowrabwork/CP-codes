#include<iostream>
using namespace std;

int counter1(int n)
{
    int i;
    for(i=1;n>0;i++)
    {
        n-=(2*i-1);
    }
    if(n<0)
    {
        i--;
    }
    i--;
    return i;
}
int counter2(int n)
{
    int i;
    for(i=1;n>0;i++)
    {
        n-=2*i;
    }
    if(n<0)
    {
        i--;
    }
    i--;
    return i;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int mn=min(n,m);
        int mx=max(n,m);
        int countMn1=counter1(mn);
        int countMn2=counter2(mn);
        if(countMn1>countMn2)
        {
            cout<<min(countMn1,counter2(mx))<<endl;
        }
        else if(countMn1<countMn2)
        {
            cout<<countMn2+counter1(mx)<<endl;
        }
        else
        {
            cout<<countMn2+max(counter1(mx),counter2(mx))<<endl;
        }
    }
}