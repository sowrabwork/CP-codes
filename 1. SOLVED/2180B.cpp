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
        string arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        string ans;
        for(int i=0;i<n;i++)
        {
            if(arr[i]+ans<=ans+arr[i])
            {
                ans=arr[i]+ans;
            }          
            else
            {
                ans+=arr[i];
            }
        }
        cout<<ans<<endl;
    }
}