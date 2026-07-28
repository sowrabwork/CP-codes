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
        int temp;
        vector<int> arr;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            arr.push_back(temp);
        }
        int count=0;
        for(int i=0;i<arr.size();i++)
        {
            for(int j=i+1;j<arr.size();j++)
            {
                if(arr[j]<arr[i])
                {
                    arr.erase(arr.begin()+j);
                    count++;
                    j--;
                }
            }
        }
        cout<<count<<endl;
    }
}