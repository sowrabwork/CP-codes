#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int temp;
        vector<int> arr;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            arr.push_back(temp);
        }
        int finalAns=0;
        int numOfTwo=0;
        for(int item:arr)
        {
            if(item!=1)
            {
                finalAns+=item;
            }
        }

        if(arr.back()==1)
        {
            finalAns+=1;
        }

        cout<<finalAns<<endl;
    }

       
    
}