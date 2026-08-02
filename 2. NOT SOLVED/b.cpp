#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        vector<int> arr;
        vector<int> brr;
        for(int i=0;i<m;i++)
        {
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            brr.push_back(temp);
        }
        
        sort(arr.begin(),arr.end());
        sort(brr.begin(),brr.end());
        int iter=0;
        int L=0,R=0;
        bool ans=true;
        bool marked[m];
        while(L>=0 && R<m && iter!=m)
        {
            if(arr[L]==brr[iter] && !marked[L])
            {
                iter++;
                marked[L]=true;
                
            }
            else if(arr[L]<brr[iter] && arr[R]>brr[iter] && !marked[L] && !marked[R])
            {
                iter++;
                marked[L]=true;
                marked[R]=true;
            }
            else
            {
                if(arr[L]>brr[iter] || marked[L])
                {
                    L--;
                }
                if(arr[R]<brr[iter] || marked[R])
                {
                    R++;
                }
            }
            
        }

        if(iter>=n)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
    }
}

