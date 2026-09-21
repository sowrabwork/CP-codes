#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        set<int> A,B,C;
        sort(arr,arr+n);
        for(int i=0;i<n;)
        {
            if(i<n)
            {
                A.insert(arr[i]);
                i++;
            }
            else if(i<n)
            {
                B.insert(arr[i]);
                i++;
            }
            if(i<n)
            {
                C.insert(arr[i]);
                i++;
            }
            
        }
        int mexa=0,mexb=0,mexc=0,ck=0;
        for(int x:A)
        {
            if(x==ck && x==*A.end())
            {
                ck++;
                mexa=ck;
            }
            else if(x==ck)
            {
                ck++;
            }
            else
            {
                mexa=ck;
                ck=0;
                break;
            }
        }
        for(int x:B)
        {
            if(x==ck && x==*B.end())
            {
                ck++;
                mexb=ck;
            }
            else if(x==ck)
            {
                ck++;
            }
            else
            {
                mexb=ck;
                ck=0;
                break;
            }
        }
        for(int x:C)
        {
            if(x==ck && x==*C.end())
            {
                ck++;
                mexc=ck;
            }
            else if(x==ck)
            {
                ck++;
            }
            else
            {
                mexc=ck;
                ck=0;
                break;
            }
        }
        cout<<mexa<<" "<<mexb<<" "<<mexc<<endl;
        if(mexa+mexb+mexc>=2*max(max(mexa,mexb),mexc))
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
    }
}