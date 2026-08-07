#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t ;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        int brr[n];
        copy(arr,arr+n,brr);
        for(int i=n-1;i>=2;i--)
        {
            if(arr[i]==arr[i-1] && arr[i-1]!=arr[(i-2+n)%n])
            {
                swap(arr[i-1],arr[i-2]);
                break;
            }
        }
        int count1=1;
        for(int i=1;i<n;i++)
        {
            if(arr[i]!=arr[i-1])
            {
                count1++;
            }
        }
        for(int i=0;i<n-2;i++)
        {
            if(brr[i]==brr[i+1] && brr[i+1]!=brr[(i+2)%n])
            {
                swap(brr[i+2],brr[i+1]);
                break;
            }
        }
        int count2=1;
        for(int i=1;i<n;i++)
        {
            if(brr[i]!=brr[i-1])
            {
                count2++;
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<brr[i]<<" ";
        }
        cout<<endl;
        cout<<max(count1,count2)<<endl;
    }
}