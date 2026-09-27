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
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        bool ans=true;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==i || arr[i]==i+1 || arr[i]==i+2)
            {
                continue;
            }
            else
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