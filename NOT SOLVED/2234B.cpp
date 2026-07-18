#include<iostream>
using namespace std;
bool pelindrome(long long int n)
{
    string num=to_string(n);
    int st=0;
    int end=num.length()-1;
    while(st<end)
    {
        if(num[st]!=num[end])
        return false;
        st++;
        end--;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        bool check=false;
        long long int b=0;
        while(b<=n)
        {
            long long int a=n-b;
            if(pelindrome(a))
            {
                cout<<a<<" "<<b<<endl;
                check=true;
                break;
            }
            else
            {
                b+=12;
            }
        }

        if(!check)
        cout<<-1<<endl;
    }
}