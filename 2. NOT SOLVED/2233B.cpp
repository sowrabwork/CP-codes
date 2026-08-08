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

        if(n==3)
        {
            cout<<"3 3 2 1 1 2 1 2 2 3 1 3 "<<endl;
        }
        else
        {

            for(int i=0;i<n;i++)
            {
                if(n-i==1)
                {
                    cout<<n-i<<" ";
                }
                else
                {
    
                    cout<<n-i<<" "<<n-i<<" ";
                }
            }
            
            for(int i=1;i<=n;i++)
            {
                cout<<i<<" ";
            }
            int num1=n/2;
            int num2=n/2+1;
            bool toggle=true;
            for(int i=1;i<=n;i++)
            {
                
                if(i==1)
                {
                    cout<<n<<" ";
                }
                else if(i==n)
                {
                    cout<<1<<" ";
                }
                else
                {
                    cout<<i<<" ";
                }
                
            }
            cout<<1;
            cout<<endl;
        }
    }
}