#include<iostream>
using namespace std;
bool isprime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
int main()
{
    int t;
    cin>>t ;
    while(t--)
    {
        int n;
        cin>>n;
        if(isprime(n+1))
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
    }
}