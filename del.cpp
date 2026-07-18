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



        double arr[n]={0};
        for(int i=1;i<n;i++)
        {
            if(str[i]==str[i-1])
            {
                arr[i]=arr[i-1]+1;
                
            }
            else
            {
                arr[i]=arr[i-1];
            }
        }

        


        int l,r,k;
        for(int i=1;i<=q;i++)
        {

            cin>>l>>r>>k;
            int left=l-1;
            int right=r-1;
            double opnum;
            
            opnum=arr[right]-arr[left];
            
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