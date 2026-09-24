#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> ans;
        int minterm=1,maxterm=n;
        for(int i=0;i<n;i++)
        {
            if((i+1)%k==0)
            {
                ans.push_back(minterm);
                minterm++;
            }
            else
            {
                ans.push_back(maxterm);
                maxterm--;
            }
        }
        for(int x:ans)
        cout<<x<<" ";
        cout<<endl;
    }
}