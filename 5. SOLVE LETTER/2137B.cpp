#include<iostream>
#include<vector>
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
        for(int i=0;i<n;i+=2)
        {
            if(arr[i]<3)
            {
                arr[i]=3-arr[i];
            }
            else if(arr[i]!=3)
            {
                arr[i]=arr[i]+3;
            }
        }
        vector<int> available(n+1 );
        for(int i=0;i<=n;i++)
        {
            available[i]=i;
        }
        for(int i=0;i<n;i+=2)
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}