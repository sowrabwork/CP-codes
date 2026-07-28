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
                cout<<"arr[i]=='1': "<<i<<endl;
                int limitor=i+k;
                i++;
                for(;i<=limitor;i++)
                {
                    cout<<"inner loop: "<<i<<endl;
                    if(arr[i]=='1')
                    {
                        i--;
                        break;
                    }
                }
            }
            else
            {
                count++;
                cout<<"else block "<<i<<endl;
            }
            


        }
        cout<<endl;
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