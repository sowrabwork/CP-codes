#include<iostream>
#include<algorithm>
using namespace std;
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
        int i,j;
        for(i=0;i<n;i++)
        {
            if(arr[i]==-1 || arr[i]==1)
            {
                arr[i]=1;
                break;
            }   
        }
        for(j=n-1;j>=0;j--)
        {
            if(arr[j]==-1 || arr[j]==1)
            {
                arr[j]=1;
                break;
            }   
        }
        for(int k=i+1;k<j;k++)
        {
            if(arr[k]==-1)
            arr[k]=0;
        }

        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";  
        }
        cout<<endl;
    }
}