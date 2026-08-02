#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
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
        int minuscnt=0;
        int zerocnt=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                zerocnt++;
            }
            else if(arr[i]==-1)
            {
                minuscnt++;
            }
        }
        int oper=zerocnt;
        if(minuscnt%2)
        {
            oper+=2;
        }
        cout<<oper<<endl;
        
    }
}