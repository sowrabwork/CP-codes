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
        string arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        for(int i=0;i<n-1;i++)
        {
            int mindex=i;int maxmindex;
            bool execute=false;
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]<arr[i] && arr[j]<arr[mindex] && ((stoi(arr[i])%2!=stoi(arr[j])%2) || execute))
                { 
                    mindex=j;
                    if(!execute)
                    {
                        maxmindex=j;
                    }
                    execute=true;
                }
            }
            if(execute && (stoi(arr[i])%2!=stoi(arr[mindex])%2))
            swap(arr[i],arr[mindex]);
            else if(execute && (stoi(arr[i])%2==stoi(arr[mindex])%2))
            {
                swap(arr[i],arr[mindex]);
                swap(arr[maxmindex],arr[mindex]);
            }
        }
        for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}