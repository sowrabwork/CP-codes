#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int arr[n];
        for(long long int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(long long int i=n-2;i>=0;i--)
        {
            if(arr[i+1]>0)
            {
                arr[i]+=arr[i+1];
            }
        }
        long long int count=0;
        for(long long int i=0;i<n;i++)
        {
            if(arr[i]>0)
            count++;
        }
        cout<<count<<endl;

    }
}