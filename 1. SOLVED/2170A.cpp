#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n>=3)
        {
            int sum1=3*n*n-3+n*n-n-1;
            int sum2=n*n-1+n*n-n+n*n-n-1+n*n-n-2+n*n-2*n-1;
            cout<<max(sum1,sum2)<<endl;
        }
        else if(n==1)
        {
            cout<<1<<endl;
        }
        else 
        {
            cout<<9<<endl;
        }
    }
}