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
        bool ans=false;
        for(long long int i=0;i<n;i++)
        cin>>arr[i];
        int checker;
        if(n%2==0)
        {
            int brr[n];
            for(int i=0;i<n;i++)
            {
                brr[i]=arr[i];
            }
            sort(brr,brr+n);
            checker=brr[n/2-1]+1;
            for(int i=0;i<n;i+=2)
            {
                ans=true;
                if((arr[i]>checker && arr[i+1]<checker)==false)
                {
                    ans=false;
                    break;
                }
            }
        }
        if(ans)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
        
    }
}