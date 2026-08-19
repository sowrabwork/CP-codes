#include<iostream>
#include<vector>
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
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            int count1=0,count2=0;
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]<arr[j])
                count1++;
                else if(arr[i]>arr[j])
                count2++;
            }
            ans.push_back(max(count1,count2));
        }

        for(int x:ans)
        cout<<x<<" ";
        cout<<endl;
    }
}