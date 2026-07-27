#include<iostream>
#include<set>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,a,b;
        cin>>l>>a>>b;
        int mx=a;
        bool repeat=false;
        int number=a;
        set<int> checker;
        while(!repeat)
        {
            number+=b;
            number%=l;
            mx=max(mx,number);
            if(checker.find(number)!=checker.end())
            {
                repeat=true;
            }
            checker.insert(number);
            
        }
        cout<<mx<<endl;
    }
}