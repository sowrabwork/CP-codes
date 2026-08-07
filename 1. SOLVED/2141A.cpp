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
        int compairtor=arr[0];
        for(int i=1;i<n;i++)
        {
            if(arr[i]>compairtor)
            {
                ans.push_back(i+1);
            }
            else
            {
                compairtor=arr[i];
            }
        }

        cout<<ans.size()<<endl;
        for(int x:ans)
        cout<<x<<" ";
        cout<<endl;
    }
}