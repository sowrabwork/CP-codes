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
        int n,k;
        cin>>n>>k;
        string arr;
        cin>>arr;
        int count=0;
        int i;
        for(i=0;i<n-k;i++)
        {
            if(arr[i]=='1')
            {
                int limitor=i+k;
                i++;
                for(;i<=limitor;i++)
                {
                    if(arr[i]=='1')
                    {
                        break;
                    }
                }
                i--;
            }
            else
            {
                count++;
            }
            


        }
        for(;i<n;i++)
        {
            if(arr[i]=='0')
            {
                count++;
            }
            else
            {
                break;
            }
        }
        cout<<count<<endl;
    }
}