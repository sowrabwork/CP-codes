#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,a,b;
        cin>>n>>a>>b;
        if(a*3<b)
        {
            cout<<a*n<<endl;
        }
        else
        {
            long long int grpNum=n/3;
            long long int price=grpNum*b;
            long long int p1;
            p1=(n%3)*a;
            price+=min(p1,b);
            cout<<price<<endl;
        }
        
    }
}