#include<iostream>
#include<vector>
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
        sort(arr,arr+n);
        int operCnt=0;
        vector<int> ele;
        vector<int> freq;
        for(int i=0;i<n;i++)
        {
           int num=arr[i];
           while(arr[i]==num)
           {
                
           }
        }

        cout<<operCnt<<endl;
    }
}