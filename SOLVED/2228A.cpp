#include<iostream>
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
        int num0=0,num1=0,num2=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==0)
            num0++;
            else if(arr[i]==1)
            num1++;
            else
            num2++;
        }
        int ans=num0;
        if(num2>=num1)
        {
            ans+=num1+(num2-num1)/3;
        }
        else
        {
            ans+=num2+(num1-num2)/3;
        }

        cout<<ans<<endl;
    }
}