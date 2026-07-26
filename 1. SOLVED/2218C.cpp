#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int min=n;
        int madian=n*3-1;
        vector<int> ans;
        while(ans.size()!=3*n)
        {
            ans.push_back(min);
            ans.push_back(madian);
            ans.push_back(madian+1);
            min--;
            madian-=2;
        }

        for(int i=0;i<n*3;i++)
        {
            cout<<ans[i]<<" ";
        }

        cout<<endl;
        
    }
}