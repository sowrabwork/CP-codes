#include<iostream>
#include<algorithm>
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
        long long int arr[n];
        for(long long int i=0;i<n;i++)
        cin>>arr[i];
        sort(arr,arr+n);
        long long int ans=0;
        long long int iter=n-1;
        while(m>0 && iter>=0)
        {
            ans+=m*arr[iter];
            iter--;
            m--;
        }

        cout<<ans<<endl;

        
    }
}