#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,m;
        cin>>n>>m;
        string word[n];
        for(long long int i=0;i<n;i++)
        cin>>word[i];
        string ptr[m];
        for(long long int i=0;i<m;i++)
        cin>>ptr[i];
        vector<char> firstLetter;
        for(long long int i=0;i<n;i++)
        {
            firstLetter.push_back(toupper(word[i][0]));
        }
        bool ans=true;
        for(long long int i=0;i<m;i++) //for pattern
        {
            bool found=false;
            for(long long int k=0;k<ptr[i].length();k++) //firdtletters
            {
                
                
                found=false;
                for(long long int j=0;j<firstLetter.size();j++)
                {
                    if(ptr[i][k]==firstLetter[j])
                    {
                        found=true;
                        if(k!=0)
                        {
                            firstLetter.erase(firstLetter.begin()+j);
                        }
                        break;
                    }
                    if(j>=firstLetter.size())
                    {
                        break;
                    }
                }
                // if(ptr[i][0]==firstLetter[j])
                // {

                //     found=true;
                //     break;
                // }
            }
            if(!found)
            {
                ans=false;
                break;
            }
        }
        if(ans)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
    }
}