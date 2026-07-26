#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int t;
    
    cin>>t;
    while(t--)
    {
        
        long long int n;
        cin>>n;
        long long int arr[n*n];
        for(long long int i=0;i<n*n;i++)
        cin>>arr[i];
        sort(arr,arr+n*n);
        long long int freq=1,maxfreq=0;
        for(long long int i=1;i<n*n;i++)
        {
            if(arr[i]==arr[i-1])
            {
                freq++;
            }
            else
            {
                maxfreq=max(maxfreq,freq);
                freq=1;
            }
        }


        maxfreq=max(maxfreq,freq);
        if(maxfreq<=(n-1)*n)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }

    }
}