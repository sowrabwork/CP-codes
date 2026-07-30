#include<iostream>
#include<set>
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
        set<int> arr;
        int temp;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            arr.insert(temp);
        }
        
        int checker=0;
        for(int item:arr)
        {
            if(item!=checker)
            {
                cout<<checker<<endl;
                break;
            }
            if(checker==arr.size()-1)
            {
                checker++;
                cout<<checker<<endl;
                
            }
            checker++;
        }
    }
}