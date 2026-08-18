#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int arr[n];
        for(long long int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        bool positive=true;
        int signChange=1;
        vector<long long int> ans;
        for(long long int i=n-1;i>=0;i--)
        {
            if(arr[i]*signChange>0)
            {
                ans.push_back(i+1);
                signChange*=-1;
            }
        }

        cout<<ans.size()<<endl;
        for(long long int x:ans)
        cout<<x<<" ";
        cout<<endl;

        // // extra 
        // long long int sum=0;
        // for(long long int i=0;i<n;i++)
        // sum+=arr[i];
        // cout<<sum<<endl;
    }
}