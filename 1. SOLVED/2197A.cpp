#include<iostream>
using namespace std;
long long int digitsum(long long int n)
{
    long long int ans=0;
    while(n!=0)
    {
        ans+=n%10;
        n/=10;
    }
    return ans;
}


int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        string numstr=to_string(n);
        long long int count=0;
        for(long long int i=0;i<=10*numstr.length();i++)
        {
            long long int checker=n+i;
            if(checker-digitsum(checker)==n)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
}