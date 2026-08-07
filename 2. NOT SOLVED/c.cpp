#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,c;
        cin>>r>>c;
        int level_hp[r];
        for(int i=0;i<r;i++)
        cin>>level_hp[i];
        int block_hp[r][c];
        for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
        cin>>block_hp[i][j];
        int ans=1000000000;
        for(int i=0;i<r;i++)
        {
            int sum=0;
            int cnt=0;
            for(int j=0;j<c;j++)
            {
                sum+=block_hp[i][j];
                cnt++;
                if(sum>=level_hp[i])
                {
                    ans=min(ans,cnt);
                    break;
                }
            }
        }
        cout<<ans<<endl;
        
    }
}