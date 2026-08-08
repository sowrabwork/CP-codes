#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        if(n==2)
        {
            cout<<-1<<endl;
        }
        else if(n==1)
        {
            cout<<1<<" ";
        }
        else
        {
            cout<<1<<" "<<2<<" ";
            long long int num=3;
            for(long long int i=0;i<n-2;i++)
            {
                cout<<num<<" ";
                num*=2;
            }
            cout<<endl;
        }
    }
}