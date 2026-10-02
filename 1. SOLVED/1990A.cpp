#include<iostream>
#include<algorithm>
using namespace std;
void checker(long long int *arr,int n)
{
    long long int mx=*max_element(arr,arr+n);
    long long int cnt=0;
    for(long long int i=0;i<n;i++)
    {
        if(arr[i]==mx)
        {
            cnt++;
            arr[i]=0;
        }
    }
    if(cnt%2)
    {
        cout<<"yes"<<endl;
        return;
    }
    else if(mx==0)
    {
        cout<<"no"<<endl;
    }
    else
    {
        checker(arr,n);
    }
    
}
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
        cin>>arr[i];
        checker(arr,n);
    }
}