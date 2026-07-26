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
        int number=n/2+1;
        bool flip=true;
        for(int i=0;i<n;i++)
        {
            cout<<number<<" ";
            if(flip)
            {
                number-=i+1;
                flip=false;
            }
            else
            {
                number+=i+1;
                flip=true;
            }
        }
        cout<<endl;
    }
}