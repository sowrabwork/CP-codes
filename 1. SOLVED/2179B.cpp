#include<iostream>
#include<algorithm>
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
        int decrease[n];
        decrease[0]=abs(arr[1]-arr[0]);
        decrease[n-1]=abs(arr[n-1]-arr[n-2]);
        for(int i=1;i<n-1;i++)
        {
            decrease[i]=abs(abs(arr[i]-arr[i-1])+abs(arr[i]-arr[i+1])-abs(arr[i-1]-arr[i+1]));
        }
        int sum=0;
        for(int i=1;i<n;i++)
        {
            sum+=abs(arr[i]-arr[i-1]);
        }
        sum-=*max_element(decrease,decrease+n);
        cout<<sum<<endl;
    }
}