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
        if(x<y)
        cout<<2<<endl;
        else if(x>y && y+1<x && y!=1)
        cout<<3<<endl;
        else
        cout<<-1<<endl;
    }
        
}