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
        int x=arr[0];
        int y=arr[1];
        for(int i=2;i<n;i++)
        {
            if(arr[i]!=arr[i-2]%arr[i-1])
            {
                possible=false;
                break;
            }
        }
        if(possible)
        {
            cout<<arr[0]<<" "<<arr[1]<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}