#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int arr[n];
        for(long long int i=0;i<n;i++)
        cin>>arr[i];
        long long int lptr=0,rptr=n-1;
        
        for(long long int i=0;i<n;i++)
        {
            if(arr[i]%6==0)
            {
                swap(arr[lptr],arr[i]);
                lptr++;
            }   
        }
        long long int product=1;
        for(long long int i=lptr;i<n;i++)
        {
            product*=arr[i];
            if(product%6==0)
            {
                swap(arr[i-1],arr[lptr]);
                swap(arr[i],arr[rptr]);
                lptr++;
                rptr--;
            }
        }

        for(long long int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }

        cout<<endl;

    }
}