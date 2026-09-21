#include<iostream>
#include<vector>
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
        string comStr;
        for(int i=0;i<k;i++)
        comStr+='1';
        cin>>str;
        bool possible=true;
        for(int i=0;i<n-k+1;i++)
        {
            if(str.substr(i,k)==comStr)
            {
                possible=false;
                break;
            }
        }
        int counter=1;
        vector<int> ansarr(n,0);
        if(possible)
        {
            for(int i=0;i<n;i++)
            {
                if(str[i]=='1')
                {
                    ansarr[i]=counter;
                    counter++;
                }
            }
            for(int i=0;i<n;i++)
            {
                if(ansarr[i]==0)
                {
                    ansarr[i]=counter;
                    counter++;
                }
            }
        }

        if(!possible)
        cout<<"no"<<endl;
        else
        {
            cout<<"yes"<<endl;
            for(int i=0;i<n;i++)
            cout<<ansarr[i]<<" ";
            cout<<endl;
        }
    }
}