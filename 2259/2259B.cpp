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
        sort(arr,arr+n);
        int mainOddCnt=0,OddCnt2=0,evenCnt2=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2)
            {
                mainOddCnt++;
            }
            else
            {
                arr[i]/=2;
                if(arr[i]%2)
                {
                    OddCnt2++;
                }
                else
                {
                    evenCnt2++;
                }
            }
        }
        int ans=max(max(mainOddCnt,evenCnt2),OddCnt2);
        cout<<ans<<endl;
    }
}