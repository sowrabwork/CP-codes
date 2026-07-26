#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double n,m,d;
        cin>>n>>m>>d;
        int maxTopBox=d/m;
        cout<<ceil(n/(maxTopBox+1))<<endl;
    }
}