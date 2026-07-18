#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        int maxcount=0;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='#')
            {
                count++;
                maxcount=max(maxcount,count);
            }
            else
            {
                maxcount=max(maxcount,count);
                count=0;
            }
        }
        int ans=ceil(maxcount/2.0);
        cout<<ans<<endl;
    }
}