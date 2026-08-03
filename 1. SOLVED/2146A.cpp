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
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        vector<int> freq;
        int digitFreq=1;
        for(int i=1;i<n;i++)
        {
            if(arr[i]!=arr[i-1])
            {
                freq.push_back(digitFreq);
                digitFreq=1;
            }
            else
            {
                digitFreq++;
            }
        }
        freq.push_back(digitFreq);

        int maxans=0,ans=0;
        int maxfreq=*max_element(freq.begin(),freq.end());
        while(maxfreq>0)
        {
            ans=0;
            for(int x:freq)
            {
                if(x>=maxfreq)
                {
                    ans+=maxfreq;
                }
            }
            maxans=max(maxans,ans);
            maxfreq--;
        }

        cout<<maxans<<endl;
    }
}