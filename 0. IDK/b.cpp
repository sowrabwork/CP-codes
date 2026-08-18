#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n];
        int brr[m];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        for(int j=0;j<m;j++)
        cin>>brr[j];
        int sum1=0;
        for(int i=0;i<n;i++)
        {
            if(i==n-1)
            {
                sum1+=arr[i];
            }
            else
            {
                sum1+=(arr[i]-arr[i+1]+1);
            }
        }
        int sum2=0;
        for(int i=0;i<m;i++)
        {
            if(i==m-1)
            {
                sum2+=brr[i];
            }
            else
            {
                sum2+=(brr[i]-brr[i+1]+1);
            }
        }
        if(sum1>=sum2)
        cout<<1<<endl;
        else
        cout<<2<<endl;
    }
}