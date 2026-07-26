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
        sort(arr,arr+n,greater<int>());
        bool possible=true;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]==arr[i+1])
            {
                possible=false;
                break;
            }
        }

        if(possible)
        {
            for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        }
        else
        {
            cout<<-1;
        }

        cout<<endl;
    }
}