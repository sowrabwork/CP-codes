#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<math.h>
#include<vector>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,m;
        cin>>n>>m;
        vector<long long int> arr;
        for(long long int i=0;i<n;i++)
        {
            long long int temp;
            cin>>temp;
            arr.push_back(temp);
            // if(temp%2==0)
            // {
            //     arr.push_back(temp/2);
            // }
        }

        sort(arr.begin(),arr.end(),greater<long long int>());
        unordered_map<int,int> freqs;
        unordered_map<int,int> realfreqs;

        for(long long int i=0;i<arr.size();i++)
        {
            if(freqs[arr[i]]==0)
            freqs[arr[i]]=i+1;
            else
            freqs[arr[i]]++;
            if(arr[i]%2==0 && freqs[arr[i]/2]==0)
            {
                freqs[arr[i]/2]=2+i;
                int tempdex=i+1;
                while(arr[tempdex]>(arr[i]/2) && tempdex<arr.size())
                {
                    freqs[arr[i]/2]++;
                    if(arr[tempdex]==arr[i])
                    freqs[arr[i]/2]++;
                    tempdex++;
                }
            }
            realfreqs[arr[i]]++;
            // cout<<arr[i]<<" "<<freqs[arr[i]]<<endl;
        }

        auto maxIt = std::max_element(freqs.begin(), freqs.end(),
        [](const auto& a, const auto& b) { return a.second < b.second; });
       
        cout<<maxIt->second<<endl;
    }
}