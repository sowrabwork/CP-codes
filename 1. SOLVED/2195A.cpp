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
        int product=1;
        bool ans=false;
        for(int i=0;i<n;i++)
        {
            product*=arr[i];
            if(product%67==0)
            {
                ans=true;
                break;
            }
        }
        if(ans)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
    }
}