#include<iostream>
#include<algorithm>
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
        set<int> arr;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            arr.insert(temp);
        }
        int maxsequence=1;
        int sequence=1;
        auto it=arr.begin();
        for(int i=0;i<arr.size()-1;i++)
        {
            if(*it+1==*(++it))
            {
                sequence++;
            }
            else
            {
                maxsequence=max(sequence,maxsequence);
                sequence=1;

            }
        }
        maxsequence=max(sequence,maxsequence);
        cout<<maxsequence<<endl;
    }
}