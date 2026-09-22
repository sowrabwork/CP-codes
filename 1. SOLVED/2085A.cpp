#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        bool ans=false;
        for(int i=0;i<n-1;i++)
        {
            if(str[i]!=str[i+1])
            {
                ans=true;
                break;
            }
        }
        string reverseStr=str;
        reverse(reverseStr.begin(),reverseStr.end());
        if(ans && k==0)
        {
            if(str<reverseStr)
            {
                ans=true;
            }
            else
            {
                ans=false;
            }
        }
        if(ans)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
    }
}