#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
bool compairator(pair<int,int> a,pair<int,int> b)
{
    return a.first>b.first;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int> freq;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        for(int i=0;i<n;i++)
        {
            freq[arr[i]]++;
        }
        vector<pair<int,int>> freqVector(freq.begin(),freq.end());
        sort(freqVector.begin(),freqVector.end(),compairator);
        vector<int> ans;
        int nowmaxdex=0;
        int idx=0;
        while(ans.size()!=n)
        {
            int nowmax=freqVector[nowmaxdex].first;
            idx++;
            int nowmaxfreq=freq[nowmax];
            while(freq[nowmax]>0)
            {
                ans.push_back(nowmax);
                freq[nowmax]--;
            }
            for(int i=idx;i<freqVector.size();i++)
            {
                int iteration=min(freq[freqVector[i].first],nowmaxfreq);
                while(iteration>0)
                {
                    ans.push_back(freqVector[i].first);
                    freq[freqVector[i].first]--;
                    iteration--;
                }
            }
            nowmaxdex++;
        }
        for(int x:ans)
        cout<<x<<" ";
        cout<<endl;
    }
}