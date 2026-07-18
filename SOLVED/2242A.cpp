#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin >>k;
        int arr[k];
        for(int i=0;i<k;i++)
        cin>>arr[i];

        string ans="NO";
        int count =0;
        for(int i=0;i<k;i++)
        {
            if(arr[i]>=3)
            {
                ans="YES";
                break;
            }
            if(arr[i]==2)
            {
                count++;
                if(count==2)
                {
                    ans="YES";
                    break;
                }
            }
        }

        cout<<ans<<endl;
    }
}