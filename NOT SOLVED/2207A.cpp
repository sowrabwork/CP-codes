#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n ;
        cin>>n;
        string arr;
        cin>>arr;
        long long int min,max;
        if(arr[0]=='1' && arr[n-1]=='1')
        {
            min=2,max=2;
        }
        else if(arr[0]=='1' || arr[n-1]=='1')
        {
            min=1,max=1;
        }
        else
        {
            min=0,max=0;
        }
        string minarr=arr;
        for(long long int i=1;i<n-1;i++)
        {
            if(minarr[i-1]=='1' && minarr[i+1]=='1')
            {
                max++;
                minarr[i]=1;
            }
            else if(minarr[i]=='1')
            {
                max++;
            }
        }
        string maxarr=arr;
        for(long long int i=1;i<n-1;i++)
        {
            if(maxarr[i-1]=='1' && maxarr[i+1]=='1')
            {
                maxarr[i]=0;
            }
            else if(maxarr[i]=='1')
            {
                min++;
            }
        }
        for(long long int i=0;i<n-4;i++)
        {
            if(arr.substr(i,5)=="11011")
            {
                min--;
            }
        }
        
        
        cout<<min<<" "<<max<<endl;
    }
}