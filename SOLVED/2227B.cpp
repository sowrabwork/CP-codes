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
        string str;
        cin>>str;
        int lb=0,rb=0;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='(')
            lb++;
            else
            rb++;
        }
        if(lb==rb)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
}