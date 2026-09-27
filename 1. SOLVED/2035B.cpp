#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l;
        cin>>l;
        string ans;
        if(l==1 || l==3)
        {
            ans="-1";
        }
        else if(l==2)
        {
            ans="66";
        }
        else if(l%2==0)
        {
            for(int i=0;i<l-2;i++)
            ans+="3";
            ans+="66";
        }
        else
        {
            for(int i=0;i<l-5;i++)
            ans+="3";
            ans+="36366";
        }
        cout<<ans<<endl;

    }
}