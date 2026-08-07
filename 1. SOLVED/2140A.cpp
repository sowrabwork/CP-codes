#include<iostream>
#include<vector>
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
        int onecnt=0;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='1')
            onecnt++;
        }
        int presentone=onecnt;
        for(int i=n-1;i>=n-onecnt;i--)
        {
            if(str[i]=='1')
            presentone--;
        }
        cout<<presentone<<endl;
    }
}