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
        int nonzeroCnt=0;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]!='0')
            nonzeroCnt++;
        }
        int zeroCnt=0;
        for(int i=str.size()-1;i>=0;i--)
        {
            if(str[i]=='0')
            zeroCnt++;
            else
            break;
        }
        cout<<zeroCnt+nonzeroCnt-1<<endl;
    }
}