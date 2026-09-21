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
        bool ans=false;
        for(int i=0;i<str.size()-1;i++)
        {
            if(str.substr(i,2)==")(")
            {
                ans=true;
                break;
            }
        }
        if(ans)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
    }
}