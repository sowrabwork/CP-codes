#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        int count1=0;
        int count2=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<k)
            count1++;
            else if(arr[i]>k)
            count2++;
        }
        if(count1>count2)
        cout<<k-1<<endl;
        else
        cout<<k+1<<endl;
    }
}