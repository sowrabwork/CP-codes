#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int arr[n];
        for(long long int i=0;i<n;i++)
        cin>>arr[i];
        long long int reserve=0;
        bool possible=true;
        for(long long int i=0;i<n;i++)
        {
            arr[i]+=reserve;
            if(arr[i]>=i+1)
            {
                reserve=arr[i]-i-1;
            }
            else
            {
                possible=false;
                break;
            }
        }

        if(possible)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}