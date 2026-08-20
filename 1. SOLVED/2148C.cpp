#include<iostream>
#include<vector>
using namespace std;
struct requirement
{
    int time,place;
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        requirement requirements[n];
        for(int i=0;i<n;i++)
        {
            cin>>requirements[i].time>>requirements[i].place;
        }
        int points=0;
        int currSt=0;
        for(int i=0;i<n;i++)
        {
            points+=requirements[i].time-1-currSt;
            currSt=requirements[i].time;
            int nowAt=points%2;
            if(nowAt!=requirements[i].place)
            points++;
        }
        points+=(m-requirements[n-1].time);
        cout<<points<<endl;
        
    }
}