#include<iostream>
#include<string>
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
        int count=0;
        bool onePresent=false;
        int onePower=0;
        for(int i=0;i<n;i++)
        {
            if(onePower<=0 && str[i]=='1')
            {
                count++;
            }
            if(str[i]=='1')
            {
                onePower=k;
            }
            onePower--;
        }
        cout<<count<<endl;
    }
}