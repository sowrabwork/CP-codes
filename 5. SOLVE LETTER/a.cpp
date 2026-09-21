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
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        cout<<n-min(n1,min(n2,n3))<<endl;
    }
}