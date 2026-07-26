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
        bool ans=false;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        for(int i=0;i<n;i++)
        {
            if(arr[i]==100)
            {
                ans =true;
                break;
            }
        }
        if(ans)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
    }
}