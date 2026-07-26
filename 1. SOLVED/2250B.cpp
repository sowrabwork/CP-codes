#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        int ans[n];
        int zcnt=0;
        int ocnt=0;
        for(int i=0;i<=k/2;i++)
        {
            ans[i]=0;
            zcnt++;
        }
        for(int i=k/2+1;i<=k+1;i++)
        {
            ans[i]=1;
            ocnt++;
        }

        bool possible=true;
        if(n<ocnt+zcnt)
        possible=false;
        if(possible)
        {
            for(int i=0;i<=k+1 ;i++)
            {
                cout<<ans[i];
            }
            bool flip=true;
            for(int i=k+2;i<n;i++)
            {
                if(flip)
                {
                    cout<<0;
                    flip=false;
                }
                else
                {
                    cout<<1;
                    flip=true;
                }
                
            }
            cout<<endl;

        }
        else
        {
            cout<<-1<<endl;
        }

        
    }
}