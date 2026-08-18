#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int capacity[k],currLevel[n];
        for(int i=0;i<k;i++)
        cin>>capacity[i];
        for(int i=0;i<n;i++)
        cin>>currLevel[i];
        vector<vector<int>> levelAndEle(k+2);
        for(int i=0;i<n;i++)
        {
            levelAndEle[currLevel[i]].push_back(i+1);
        }
        vector<int> ans;
        int count=1;
        for(int i=k;i>=0;i--)
        {
            
            for(int j=(int)levelAndEle[i].size()-1;j>=0;j--)
            {
                for(int x=0;x<count;x++)
                {
                    ans.push_back(levelAndEle[i][j]);
                }

            }
            count++;
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";

        }
        cout<<endl;
    }
}