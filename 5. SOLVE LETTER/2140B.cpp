//optimigetion needed

#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        string n;
        cin>>n;
        bool found=false;
        long long int iter=1;
        long long int ans=0;
        while(!found)
        {
            if(stoll(n+to_string(iter))%(stoll(n)+iter)==0)
            {
                found=true;
                ans=iter;
                break;
            }
            iter++;
        }
        cout<<ans<<endl;
    }
}