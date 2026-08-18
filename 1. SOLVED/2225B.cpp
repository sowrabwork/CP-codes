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
        for(int i=1;i<str.size();i++)
        {
            if(str[i]==str[i-1])
            count++;
        }

        if(count>2)
        cout<<"no"<<endl;
        else
        cout<<"yes"<<endl;
    }
}