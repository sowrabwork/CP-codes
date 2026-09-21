#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long> ans;
        long long divisor=10;
        for(int i=1;i<to_string(n).size();i++)
        {
            if(n%(divisor+1)==0)
            {
                ans.push_back(n/(divisor+1));
            }
            divisor*=10;
        }
        cout<<ans.size()<<endl;
        sort(ans.begin(),ans.end());
        if(ans.size()>0)
        {
            for(auto item:ans)
            cout<<item<<" ";
            cout<<endl;

        }
    }
}