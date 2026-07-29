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
        string str;
        cin>>str;
        int freq=0;
        for(int i=0;i<n;i++)
        {
            if(str[i]==str[n-1])
            freq++;
        }
        cout<<n-freq<<endl;
    }
}