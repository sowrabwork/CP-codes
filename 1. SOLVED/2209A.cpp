#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,c,k;
        cin>>n>>c>>k;
        long long int arr[n];
        for(long long int i=0;i<n;i++)
        cin>>arr[i];
        sort(arr,arr+n);
        for(long long  int i=0;i<n;i++)
        {
            if(arr[i]<=c && k>=c-arr[i])
            {
                k-=c-arr[i];
                c+=c;
            }
            else if(arr[i]<=c && k<c-arr[i])
            {
                c+=k+arr[i];
                k=0;
            }

        }

        cout<<c<<endl;
    }
}