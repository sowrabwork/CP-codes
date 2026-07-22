#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int X,Y;
        if(y>0)
        {
            X=y*2;
        }
        else{
            X=y*(-4);
        }
        if((x-X)%3==0 && (x-X)>=0)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
    }
}