#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<math.h>
#include<cmath>
using namespace std;
bool compairator(pair<long long int,long long int> a,pair<long long int,long long int> b)
{
    return a.first>b.first;
}
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        map<long long int,long long int> freq;
        long long int arr[n];
        for(long long int i=0;i<n;i++)
        cin>>arr[i];
        for(long long int i=0;i<n;i++)
        {
            freq[arr[i]]++;
        }
        vector<pair<long long int,long long int>> freqVector(freq.begin(),freq.end());
        vector<long long int> ans(n,0);
        long long int i=0;
        for(long long int i=0;i<freqVector.size();i++)
        {
            if(__gcd(freqVector[i].first,k)>1)
            {
                ans[i]+=freqVector[i].first*freqVector[i].second;
                for(long long int j=i+1;j<freqVector.size();j++)
                {
                    if(__gcd(freqVector[i].first,freqVector[j].first)>1 && __gcd(freqVector[j].first,__gcd(freqVector[i].first,k))>1)
                    {
                        ans[i]+=freqVector[j].first*freqVector[j].second;
                    }
                }
            }
        }
        cout<<*max_element(ans.begin(),ans.end())<<endl;
    }
}