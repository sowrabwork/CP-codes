#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int y,r;
        cin>>y>>r;
        int count=r+y/2;
        cout<<min(count,n)<<endl;
    }
}