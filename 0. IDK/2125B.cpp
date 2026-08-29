#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(long long int num)
{
    if(num < 2)
        return false;
    for(long long int i=2;i*i<=num;i++)
    {
        if(num%i==0)
        return false;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,y,z;
        cin>>x>>y>>z;
        long long ans;
        if(x<=z && y<=z)
        ans=1;
        else if(isPrime(x) || isPrime(y))
        ans=2;
        else
        {
            ans=2;
            long long limit=min(x,y);
            limit=min(limit,z);
            for(long long int i=2;i<=limit;i++)
            {
                if(x%i==0 && y%i==0)
                {
                    ans=1;
                    break;
                }
            }
        }
        
        cout<<ans<<endl;
    }
}