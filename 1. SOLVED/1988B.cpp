#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string str;
        cin>>n>>str;
        int zeroCnt=0,oneCnt=0;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='0' && i==0)
            {
                zeroCnt++;
            }
            else if(i!=0 && str[i]=='0' && str[i-1]!='0')
            {
                zeroCnt++;
            }
            else if(str[i]=='1')
            {
                oneCnt++;
            }
        }
        if(oneCnt>zeroCnt)
        cout<<"yes"<<endl;
        else 
        cout<<"no"<<endl;
    }
}