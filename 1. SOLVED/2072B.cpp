#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        string str;
        cin>>str;
        long long int upCnt=0,downCnt=0;
        for(long long int i=0;i<n;i++)
        {
            if(str[i]=='_')
            downCnt++;
            else
            upCnt++;
        }
        cout<<upCnt/2*(upCnt-upCnt/2)*downCnt<<endl;
    }
}