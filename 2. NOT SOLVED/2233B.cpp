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
        for(int i=1;i<=n;i++)
        {
            cout<<i<<" ";
        }
        for(int i=1;i<=n;i++)
        {
            cout<<i<<" "<<i<<" ";
        }
        int l=1;
        int r=n;
        while(l<=r)
        {
            if(l==r)
            {
                cout<<l<<" ";
            }
            else
            {

            }
            cout<<l<<" "<<r<<" ";
            l++;
            r--;
        }
        cout<<endl;
    }
}