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
        string str="aeiou";
        string ans;
        int count=n%5;
        for(int j=0;j<5;j++)
        {
            for(int i=0;i<n/5;i++)
            {
                ans+=str[j];
            }
            if(count>0)
            {
                ans+=str[j];
                count--;
            }
        }
  
        cout<<ans<<endl;
    }
}