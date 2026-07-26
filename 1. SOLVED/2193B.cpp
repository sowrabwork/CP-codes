#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        int curmax=n;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=curmax)
            {
                int curmaxidx=find(arr+i,arr+n,curmax)-arr;
                reverse(arr+i,arr+curmaxidx+1);
                break;
            }
            curmax--;
        }
        for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}