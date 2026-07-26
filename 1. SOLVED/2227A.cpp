#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(!(x%2 && y%2))
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
    }
}