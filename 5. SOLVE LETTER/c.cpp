#include<iostream>
using namespace std;
long long int changebitCnt=0;
string str;
long long int func()
{
    long long int oneCnt=0,zeroCnt=0;
    bool changebit=false;
        bool start=false;
        bool zeropresent=false;
        for(long long int i=0;i<str.size();i++)
        {
            if(start)
            {
                if(str[i]=='1')
                oneCnt++;
                else
                zeroCnt++;
            }
            else if(str[i]=='0')
            {
                zeropresent=true;
            }
            
            else if(str[i]=='1' && zeropresent)
            {
                start=true;
                str[i]='0';
                changebit=true;
                changebitCnt++;
            }
            else if(str[i]=='1')
            {
                start=true;
            }
        }
        if(changebit)
        return min(zeroCnt,func()+1);
        else
        return zeroCnt;
}
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        cin>>str;
        cout<<func()<<endl;
    }
}