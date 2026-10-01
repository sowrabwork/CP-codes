#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, m;
        cin >> n >> m;
        vector<long long int> arr(n);
        for (long long int i = 0; i < n; i++)
            cin >> arr[i];
        cin.ignore();
        vector<string> operations(m);                                                                                               
        for (long long int i = 0; i < m; i++)
            getline(cin, operations[i]);
        for (long long int i = 0; i < m; i++)
        {
            string left, right;
            long long int j;
            for (j = 2; operations[i][j] != ' '; j++)
            {
                left += operations[i][j];
            }
            j++;
            for (; j != operations[i].size(); j++)
            {
                right += operations[i][j];
            }
            long long int l = stoi(left);
            long long int r = stoi(right);
            if (operations[i][0] == '+')
            {
                for(long long int j=0;j<n;j++)
                {
                    if(arr[j]>=l && arr[j]<=r)
                    arr[j]++;
                }
            }
            else
            {
                for(long long int j=0;j<n;j++)
                {
                    if(arr[j]>=l && arr[j]<=r)
                    arr[j]--;
                }
            }
            cout << *max_element(arr.begin(), arr.end()) << " ";
        }
        cout << endl;
    }
}