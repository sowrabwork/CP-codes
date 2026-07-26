#include<iostream>
#include<vector>
using namespace std;
bool IsPeresent(int n,vector<int> &sums)
{
    for(int sum:sums)
    {
        if(sum==n)
        return true;
    }
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int numGain=0;
        vector<int> sums;
        sums.push_back(0);
        vector<int> ans;
        for(int i=1;i<=2*n;i++)
        {
            if(!IsPeresent(i,sums))
            {
                if(i>=2)
                {
                    sums.push_back(i+ans.back());
                }
                ans.push_back(i);
                numGain++;
            }

            if(numGain==n)
            {
                break;
            }
        }

        for(int val:ans)
        {
            cout<<val<<" ";
        }
       
    }
}