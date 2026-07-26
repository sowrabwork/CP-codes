#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s,x;
        cin>>n>>s>>x;
        int arr[n];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        if((s-sum)%x==0 && s-sum>=0)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
    }
}