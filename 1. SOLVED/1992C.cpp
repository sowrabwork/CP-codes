#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        while(n>m)
        {
            cout<<n<<" ";
            n--;
        }
        for(int i=1;i<=n;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}