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
        int ans;
        if(n==2 || n==3)
        ans=n;
        else
        ans=n%2;
        cout<<ans<<endl;
    }
}