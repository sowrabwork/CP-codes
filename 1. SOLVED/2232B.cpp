#include<iostream>
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
        cin>>arr[i];
        long long int ans[n];
        ans[0]=arr[0];
        long long int extra=0;
        for(long long int i=1;i<n;i++)
        {
            if(arr[i]>=ans[i-1])
            {
                ans[i]=ans[i-1];
                extra+=arr[i]-ans[i];
            }
            else
            {
                long long int temp=arr[i]+extra;
                extra=0;
                if(temp<ans[i-1])
                {
                    ans[i]=(ans[i-1]*i+temp)/(i+1);
                    extra=(ans[i-1]*i+temp)%(i+1);
                }
                else
                {
                    ans[i]=ans[i-1];
                    extra=temp-ans[i];
                }

            }
        }
        for(long long int i=0;i<n;i++)
        cout<<ans[i]<<" ";
        cout<<endl;
    }
}