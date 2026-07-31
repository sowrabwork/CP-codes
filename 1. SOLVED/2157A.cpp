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
        int fq=1;
        for(int i=0;i<n-1;i++)
        {
           if(arr[i]==arr[i+1])
           {
            fq++;
           }
           else
           {
               ele.push_back(arr[i]);
               freq.push_back(fq);
               fq=1;
           }
        }
        ele.push_back(arr[n-1]);
        freq.push_back(fq);

        for(int i=0;i<ele.size();i++)
        {
            if(ele[i]>freq[i])
            {
                operCnt+=freq[i];
            }
            else if(ele[i]<freq[i])
            {
                operCnt+=freq[i]-ele[i];
            }
            
        }

        cout<<operCnt<<endl;
    }
}