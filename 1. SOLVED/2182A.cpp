#include<iostream>
#include<string>
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
        int count=0;
        for(int i=0;i<n-3;i++)
        {
            string subStr=str.substr(i,4);
            if(subStr=="2026")
            {
                count=0;
                break;
            }
            else if(subStr=="2025")
            {
                count=1;
            }
        }
        cout<<count<<endl;
    }
}