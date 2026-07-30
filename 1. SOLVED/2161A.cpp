#include<iostream>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,x,d,n;
        cin>>r>>x>>d>>n;
        string arr;
        cin>>arr;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]=='1')
            {
                r-=min(d,r);
                count++;
            }
            else if(arr[i]=='2' && r<x)
            {
                count++;
                r-=min(d,r);
            }
        }

        cout<<count<<endl;
    }
}