#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,x,y;
        cin>>n>>x>>y;
        long long int arr[n];
        for(long long int i=0 ;i<n;i++)
        {
            cin>>arr[i];
        }
        bool possible=true;
        for(long long int j=0;j<n;j++)
        {
            long long int distance=abs(j-arr[j]+1);
            distance=distance%x;
            distance=distance%y;
            if(x!=y)
            distance=distance%(abs(x-y));
            if(distance!=0)
            {
                possible=false;
                break;
            }
        }

        if(possible)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}