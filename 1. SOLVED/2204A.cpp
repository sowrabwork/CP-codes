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
        string arr;
        cin>>arr;
        int count=1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]=='R')
            count++;
            else
            break;
        }

        cout<<count<<endl;
    }
}