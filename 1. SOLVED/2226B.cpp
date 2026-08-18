#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
    return a;
    return gcd(b,a%b);
}

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
        int count=0;
        for(int i=1;i<n;i++)
        {
            if(gcd(arr[i],arr[i-1])==abs(arr[i]-arr[i-1]))
            count++;
        }
        cout<<count<<endl;
    }
}