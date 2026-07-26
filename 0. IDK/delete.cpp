#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,q;
        cin>>n>>q;
        string str;
        cin>>str;
        int l,r,k;
        for(int i=1;i<=q;i++)
        {

            cin>>l>>r>>k;
            int left=l-1;
            int right=r-1;
            double opnum=0;
            while(left<right)
            {
                if(str[left]==str[left+1])
                {
                    opnum++;
                }
                left++;
            }
            opnum/=2.0;
            opnum=ceil(opnum);
            if(opnum<=k)
            cout<<"YES"<<endl;
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}