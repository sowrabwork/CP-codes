#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        char c;
        string str;
        cin>>n>>c>>str;
        int l=0,r=n-1;
        int ans=0;
        while(l<=r)
        {
            if(str[l]!=str[r])
            {
                ans++;
                if(str[l]!=c && str[r]!=c)
                ans++;
            }
            l++;
            r--;
        }
        cout<<ans<<endl;
    }
}