#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int x,y;
        cin>>x>>y;
        if(x*2<y)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;        
    }
}