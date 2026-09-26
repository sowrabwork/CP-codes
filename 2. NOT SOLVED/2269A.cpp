#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        cout<<2*(k-1)+round(pow(2,n-k+1))<<endl;
    }
}