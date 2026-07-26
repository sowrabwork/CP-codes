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
        bool repeat=false;
        int blocks=1;
        for(int i=1;i<n;i++)
        {
            if(str[i]!=str[i-1])
            {
                blocks++;
            }
            else if(!repeat)
            {
                repeat=true;
                blocks++;
            }
        }
        if(str[0]==str[n-1] && repeat)
        {
            blocks--;
        }

        cout<<blocks<<endl;
    }
}