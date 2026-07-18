#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c;
        cin>>n>>c;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        cin>>b[i];
        bool sorted=false;
        bool check=false;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>=b[i])
            {
                count+=(a[i]-b[i]);
            }
            else if(!sorted)
            {
                sort(a,a+n);
                sort(b,b+n);
                sorted=true;
                count=c;
                i=-1;
            }
            else
            {
                cout<<-1<<endl;
                check=true;
                break;
            }
        }

        if(!check)
        {
            cout<<count<<endl;
        }
    }
}