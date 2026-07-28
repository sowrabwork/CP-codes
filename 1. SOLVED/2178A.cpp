#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int Ycount=0,Ncount=0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='Y')
            Ycount++;
        }
        if(Ycount<=1)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
    }
}