#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        int count=0;
        for(int i=0;i<n-k+1;i+=k)
        {
            bool zeroPrnt=false;
            for(int j=i;j<i+k;j++)
            {
                if(str[j]=='0')
                {
                    zeroPrnt=true;
                    break;
                }
            }
            if(!zeroPrnt)
            count++;
        }
        cout<<count<<endl;
    }
}