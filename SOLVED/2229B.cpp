#include<iostream>
#include<algorithm>
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
        long long int brr[n];
        for(long long int i=0;i<n;i++)
        cin>>arr[i];
        for(long long int j=0;j<n;j++)
        cin>>brr[j];
        long long int amax=0;
        long long int sum=0;
        for(long long int i=0;i<n;i++)
        {
            sum+=max(arr[i],brr[i]);
            amax=max(amax,min(arr[i],brr[i]));
        }
        sum+=amax;
        cout<<sum<<endl;
    }
}