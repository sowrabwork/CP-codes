#include<iostream>
#include<algorithm>
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
        int maxidxleft=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i]>=arr[maxidxleft])
            {
                maxidxleft=i;
            }
        }
        if(maxidxleft!=n-1)
        {
            cout<<1<<endl;
        }
        else
        {
            int maxidxright=max_element(arr,arr+n)-arr;
            int secondmaxele=*max_element(arr,arr+maxidxright);
            if(arr[maxidxright]==secondmaxele)
            
        }
    }
}