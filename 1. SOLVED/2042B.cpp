#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int color[n];
        for(int i=0;i<n;i++)
        cin>>color[i];
        map<int,int> box;
        for(int i=0;i<n;i++)
        {
            box[color[i]]+=1;
        }
        int uniquefreq=0;
        int ans=0;
        for(auto item:box)
        {
            if(item.second==1)
            {
                uniquefreq++;
            }
            else
            {
                ans++;
            }
        }
        ans+=(uniquefreq-uniquefreq/2)*2;
        cout<<ans<<endl;
        
    }
}