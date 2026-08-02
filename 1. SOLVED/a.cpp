#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        bool zeroDlt=false;
        bool oneDlt=false;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='0' && zeroDlt==false)
            {
                str.erase(i,1);
                zeroDlt=true;
                i--;
            }
            else if(str[i]=='1' && oneDlt==false)
            {
                str.erase(i,1);
                oneDlt=true;
                i--;
            }
            if(zeroDlt && oneDlt)
            {
                break;
            }
        }

        cout<<str<<endl;
    }
}