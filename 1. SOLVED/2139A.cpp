#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int ans;
        if(n==m)
        ans=0;
        else if(n%m==0 || m%n==0)
        ans=1;
        else 
        ans=2;
        cout<<ans<<endl;
    }
}