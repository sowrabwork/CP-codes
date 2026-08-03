#include<iostream>
using namespace std;

int leftsum(int l,int prefixsum[])
{
    return prefixsum[l];
}

int midsum(int r,int l,int prefixsum[])
{
    return prefixsum[r]-prefixsum[l];
}

int rightsum(int r,int n,int prefixsum[])
{
    return prefixsum[n-1]-prefixsum[r];
}

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

        int prefixsum[n];
        prefixsum[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            prefixsum[i]=prefixsum[i-1]+arr[i];
        }

        int l=0,r=n-2;
        bool found=false;
        bool toogle=true;
        while(l<=r)
        {
            int ls=leftsum(l,prefixsum)%3;
            int ms=midsum(r,l,prefixsum)%3;
            int rs=rightsum(r,n,prefixsum)%3;

            if(ls==rs && rs==ms)
            {
                break;
            }
            else if(ls!=rs && rs!=ms && ls!=ms)
            {
                break;
            }
            else
            {
                if(toogle)
                {
                    l++;
                    toogle=false;
                }
                else
                {
                    r--;
                    toogle=true;
                }
            }
        }
        if(l>=r)
        {
            l=0;
            r=0;
        }
        else
        {
            l++;
            r++;
        }
        cout<<l<<" "<<r<<endl;
        
    }
}