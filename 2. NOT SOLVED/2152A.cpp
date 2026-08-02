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
        int size,n;
        cin>>size>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        string main;
        string sub;
        for(int i=0;i<n;i++)
        {
            sub+=to_string(arr[i]);
        }
        for(int i=1;i<=size;i++)
        {
            for(int j=1;j<=i;j++)
            {
                main+=to_string(j);
            }
        }
        int count=0;
        for(int i=0;i<size;i++)
        {
            if(main.substr(i,n)==sub)
            {
                count++;
                i+=n-1;
            }
        }

        cout<<count<<endl;
    }
}