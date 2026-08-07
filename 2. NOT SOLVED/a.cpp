#include<iostream>
#include<algorithm>
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
        sort(arr,arr+n);
        // vector<int> arr;
        // arr.push_back(arr[0]);
        // int freq=1;
        // vector<int> freq_damage;
        // for(int i=1;i<n;i++)
        // {
        //     if(arr[i]!=arr[i-1])
        //     {
        //         arr.push_back(arr[i]);
        //         freq_damage.push_back(freq);
        //     }
        //     else if(arr[i]==arr[i-1])
        //     {
        //         freq++;
        //     }
    
        // }
        
        int right=n-1;
        int left=0;
        int total=0;
        while(left<=right)
        {
            if(left==right)
            {
                total+=arr[left];
            }
            else if(arr[left]==arr[right])
            {
                total+=(arr[left]+arr[right]);
                break;
            }
            else
            {
                total+=(arr[left]+arr[right]);
            }

            left++;
            right--;
        }
        cout<<total<<endl;
    }
}