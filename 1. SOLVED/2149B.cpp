#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
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
        sort(arr,arr +n);
        int difference=0;
        for(int i=0;i<n-1;i+=2)
        {
            int currdiff= arr[i+1]-arr[i];
            difference=max(difference,currdiff);
        }
        cout<<difference<<endl;
    }
}