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
        int count=0;
        int kcount=0;
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            if(arr[i]<k && (i==0 || arr[i]>arr[i-1]))
            count++;
            else if(arr[i]==k)
            kcount++;
        }
        cout<<max((k-count),kcount)<<endl;
    }
}