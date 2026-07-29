#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int arr[4];
        for(int i=0;i<4;i++)
        cin>>arr[i];
        bool ans=true;
        for(int i=1;i<4;i++)
        {
            if(arr[i]!=arr[i-1])
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