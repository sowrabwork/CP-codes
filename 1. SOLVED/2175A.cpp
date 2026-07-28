#include<iostream>
#include<vector>
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
        {
            cin>>arr[i];
        }
        int count=1;
        sort(arr,arr+n);
        for(int i=1;i<n;i++)
        {
            if(arr[i]!=arr[i-1])
            count++;
        }
        for(int i=0;i<n;i++)
        {
            if(count<=arr[i])
            {
                count=arr[i];
                break;
            }
        }
        cout<<count<<endl;
    }
}