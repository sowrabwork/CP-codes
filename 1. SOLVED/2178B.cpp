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
        int count=0;
        if(str[0]=='u')
        count++;
        if(str[str.size()-1]=='u')
        count++;
        str[0]='s';
        str[str.size()-1]='s';
        for(int i=1;i<str.size();i++)
        {
            if(str[i]=='u' && str[i+1]=='u')
            {
                count++;
                i++;
            }
        }
        cout<<count<<endl;
    }
}