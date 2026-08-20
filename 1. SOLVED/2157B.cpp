#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        string str;
        // int quadrent;
        // if(x>=0 && y>=0)
        // quadrent=1;
        // else if(x<0 && y>0)
        // quadrent=2;
        // if(x<0 && y<0)
        // quadrent=3;
        // if(x>0 && y<0)
        // quadrent=4;
        x=abs(x);
        y=abs(y);
        cin>>str;
        int curX=0,curY=0;
        bool ans=false;
        for(int i=0;i<n;i++)
        {
            if(curX==x && curY==y)
            {
                ans=true;
                break;
            }
            if(str[i]=='4')
            {
                if(x-curX>y-curY)
                {
                    curX++;
                }
                else
                {
                    curY++;
                }
                
            }
            else
            {
                if(curX<x)
                {
                    curX++;
                }
                if(curY<y)
                {
                    curY++;
                }
                
            }
            if(curX==x && curY==y)
            {
                ans=true;
                break;
            }
        }
        if(ans)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
    }
}