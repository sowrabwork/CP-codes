#include<iostream>
#include<climits>
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
        int ans=0;
        for(int j=0;j<n;j++)
        {
            int col=j,row=0;
            int maxele=INT_MIN;
            while(col<n && row<n)
            {
                if(arr[row][col]<0)
                maxele=max(maxele,-1*arr[row][col]);
                col++;
                row++;
            }
            if(maxele!=INT_MIN)
            ans+=maxele;
        }
        for(int j=1;j<n;j++)
        {
            int col=0,row=j;
            int maxele=INT_MIN;
            while(col<n && row<n)
            {
                if(arr[row][col]<0)
                maxele=max(maxele,-1*arr[row][col]);
                col++;
                row++;
            }
            if(maxele!=INT_MIN)
            ans+=maxele;
        }
        cout<<ans<<endl;
    }
}