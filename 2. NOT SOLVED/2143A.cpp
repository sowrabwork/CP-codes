#include<iostream>
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
        int maxPosition=max_element(arr,arr+n)-arr;
        int L=maxPosition-1;
        int R=maxPosition+1;
        bool ans=true;
        int count=1;
        while(true)
        {
            
            bool check1=false;
            if(L>=1)
            {

                if(arr[L]==arr[L-1]-1)
                {
                    L--;
                    count++;
                    check1=true;
                }
            }
            else if(R<n-1)
            {
                if(arr[R]==arr[R+1])
                {
                    R++;
                    count++;
                    check1=true;
                }
                
            }
            if(!check1)
            {
                ans=false;
                break;
            }
            if(count==n)
            {
                ans=false;
                break;
            }

            cout<<L<<" "<<R<<endl;
        }
        if(ans)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
    }
}