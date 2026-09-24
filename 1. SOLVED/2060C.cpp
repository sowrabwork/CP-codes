#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        sort(arr,arr+n);
        int i=0,j=n-1,ans=0;
        while(i<j)
        {
            if(arr[i]+arr[j]==k)
            {
                ans++;
                i++;
                j--;
            }
            else if(arr[i]+arr[j]<k)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        cout<<ans<<endl;
    }
}