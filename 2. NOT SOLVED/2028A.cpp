#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        string str;
        cin>>str;
        int x=0,y=0;
        int prex=0,prey=0;
        bool ans=false;
        while(true)
        {
            for(int i=0;i<n;i++)
            {
                if(str[i]=='N')
                y++;
                else if(str[i]=='E')
                x++;
                else if(str[i]=='S')
                y--;
                else 
                x--;
                if(x==a && y==b)
                {
                    ans=true;
                    break;
                }
            }
            if(abs(x)>abs(a) || abs(y)>abs(b) || ans || (abs(a-prex)==abs(a-x)) || (abs(b-prey)==abs(b-y)))
            {
                break;
            }

            prex=x,prey=y;
           
        }
        if(ans)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
        
    }
}