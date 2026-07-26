#include<iostream>
using namespace std;
bool iseven(int n)
{
    if(n%2==0)
    return true;
    return false;
}
bool isodd(int n)
{
    if(n%2==1)
    return true;
    return false;
}

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
        for(int i=0;i<n-1;i++)
        {
            bool condition=(iseven(arr[i])&&iseven(arr[i+1])) || (isodd(arr[i])&&isodd(arr[i+1]));
            if(condition)
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