#include<iostream>
using namespace std;
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        double a,b,n;
        cin>>a>>b>>n;
        if(b<=a/n || a==b)
        cout<<1<<endl;
        else
        cout<<2<<endl;
    }
}