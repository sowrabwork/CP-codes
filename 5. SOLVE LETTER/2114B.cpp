#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        int zeroCnt=0,oneCnt=0;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='1')
            oneCnt++;
            else
            zeroCnt++;
        }
        bool ans=false;
        // int maxpossible=zeroCnt/2+oneCnt/2;
        // if(maxpossible>=k)
        // ans=true;
        if(abs(zeroCnt/2-oneCnt/2)==k || zeroCnt/2+oneCnt/2==k || (zeroCnt==oneCnt && (zeroCnt+oneCnt)/2<=k) && zeroCnt>1)
        ans=true;
        if(ans)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;

        // int i=0,j=str.size()-1;
        // int cnt=0;
        // while(i<j)
        // {
        //     if(str[i]==str[j])
        //     cnt++;
        //     i++;
        //     j--;
        // }
        // if(cnt==k)
        // cout<<"yes"<<endl;
        // else
        // cout<<"no"<<endl;
    }
}