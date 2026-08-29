#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string numstr;
        cin>>numstr;
        long long num=stoll(numstr);
        vector<long long> ans;
        for(int i=1;i<numstr.size();i++)
        {
            if(num%(1+(long long)pow(10,i))==0)
            {
                ans.push_back(num/(1+(long long)pow(10,i)));
            }
        }
        cout<<ans.size()<<endl;
        for(int x:ans)
        cout<<x<<" ";
        cout<<endl;
    }
}