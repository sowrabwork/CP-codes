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
        string str;
        cin>>str;
        bool ans=false;
        for(int iter=0;iter<=n/2;iter++)
        {
            for(int i=1;i<str.size();i++)
            {
                if(str[i]==str[i-1])
                {
                    str.erase(str.begin()+i);
                    str.erase(str.begin()+i-1);
                }
            }
            if(str.empty())
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