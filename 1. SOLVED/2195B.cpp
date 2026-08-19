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
        int brr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        copy(arr,arr+n,brr);
        sort(brr,brr+n);
        bool ans=true;
        for(int i=1;i<=n/2;i++)
        {
           for(int j=i;j<=n;j*=2)
           {
            if(j>n)
            break;
            if(i==arr[j-1])
            {
                swap(arr[i-1],arr[j-1]);
                break;
            }
           }
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=brr[i])
            {
                ans=false;
                break;
            }
        }
       
        if(ans)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
    }
}