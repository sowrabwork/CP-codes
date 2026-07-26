#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,h,l;
        cin>>n>>h>>l;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        int mx=max(h,l);
        int mn=min(h,l);
        sort(arr,arr+n);
        int left=0,right=n-1;
        int count=0;
        while(left<right)
        {
            if(arr[left]<=mn && arr[right]<=mx)
            {
                count++;
                left++;
                right--;
            }
            else if(arr[right]>mx)
            {
                right--;
            }
            else if(arr[left]>mn)
            {
                break;
            }
        }
        cout<<count<<endl;
    }
}