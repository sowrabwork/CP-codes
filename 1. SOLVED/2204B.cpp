#include<iostream>
#include<algorithm>
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
        long long int count=1;
        int counts[n];
        int max=arr[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i]>max)
            {
                max=arr[i];
                count=1;
            }
            else if(arr[i]>arr[i+1])
            {
                int iter=i+1;
                while(arr[iter]<arr[i] && iter<=n-1)
                {
                    iter++;
                }
                iter--;
                count=counts[iter];
            }
            else if(arr[i]<=arr[i+1])
            {
                count++;
            }
            counts[i]=count;

        }
        cout<<count<<endl;
        
    }
}