#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n][n];
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        cin>>arr[i][j];
        int ans[n*2]={0};
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        ans[i+j+1]=arr[i][j];
        int sum=0;
        for(int i=0;i<2*n;i++)
        sum+=ans[i];
        ans[0]=2*n*(2*n+1)/2-sum;
        for(int i=0;i<2*n;i++)
        cout<<ans[i]<<" ";
        cout<<endl;
    }
}