#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string str;
        cin>>n>>str;
        string strcopy=str;
        sort(strcopy.begin(),strcopy.end());
        int maxfreq=INT_MIN,minfreq=INT_MAX;
        char maxfreqchar,minfreqchar;
        for(int i=0;i<n;i++)
        {
            int freq=0;
            for(int j=i;j<n;j++)
            {
                if(strcopy[i]==strcopy[j] && j==n-1)
                {
                    freq++;
                    if(freq>maxfreq)
                    {
                        maxfreq=freq;
                        maxfreqchar=strcopy[j];
                    }
                    if(freq<=minfreq)
                    {
                        minfreq=freq;
                        minfreqchar=strcopy[j];
                    }
                    i=j;
                    break;
                }
                else if(strcopy[i]==strcopy[j])
                {
                    freq++;
                }
                else
                {
                    i=j-1;
                    if(freq>maxfreq)
                    {
                        maxfreq=freq;
                        maxfreqchar=strcopy[i];
                    }
                    if(freq<=minfreq)
                    {
                        minfreq=freq;
                        minfreqchar=strcopy[i];
                    }
                    break;
                }
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(str[i]==minfreqchar)
            {
                str[i]=maxfreqchar;
                break;
            }
        }
        cout<<str<<endl;
    }
}