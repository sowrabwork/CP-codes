#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

int leftelenum(int arr[],int size,int num)
{
    int ans=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<num)
        {
            ans++;
        }
        else
        {
            return ans;
        }
    }
}



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
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        vector<int> freq;
        vector<int> uniqueEle;
        uniqueEle.push_back(arr[0]);
        freq.push_back(1);
        for(int i=1;i<n;i++)
        {
            if(arr[i]==arr[i-1])
            freq.back()++;
            else
            {

                freq.push_back(1);
                uniqueEle.push_back(arr[i]);
            }
        }

        int maxfreq=*max_element(freq.begin(),freq.end());
        vector<int> maxfreqeles;
        for(int i=0;i<freq.size();i++)
        {
            if(freq[i]==maxfreq)
            maxfreqeles.push_back(uniqueEle[i]);
        }
        vector<int> Lelenums;
        vector<int> Relenums;
        for(int num:maxfreqeles)
        {
            Lelenums.push_back(leftelenum(arr,n,num));
            Relenums.push_back(n-maxfreq-Lelenums.back());
        }
        int numof2call=0;
        for(int i=0;i<Lelenums.size()-1;i++)
        {
            numof2call=max(max(min(Lelenums[i],Relenums[i]),min(Lelenums[i+1],Relenums[i+1])),numof2call);
        }

        cout<<n-numof2call-maxfreq<<endl;

    }
}