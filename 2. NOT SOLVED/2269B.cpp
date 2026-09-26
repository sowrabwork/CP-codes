#include <iostream>
#include<climits>
#include <algorithm>
using namespace std;
int fact(int num)
{
    if (num < 1)
        return 1;
    return num * fact(num - 1);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        int iterneeded[n];
        int turnonecnt = 0;
        for (int i = 0; i < n; i++)
        {
            string num = to_string(arr[i]);
            int trunednum = 0;
            for (int j = 0; j < 25; j++)
            {
                for (int k = 0; k < num.size(); k++)
                {
                    trunednum += (num[k] - '0') * (num[k] - '0');
                }
                num=to_string(trunednum);
                if (trunednum == 4)
                {
                    iterneeded[i] = j + 1;
                    break;
                }
                else if (trunednum == 1)
                {
                    iterneeded[i] = INT_MAX;
                    turnonecnt++;
                    break;
                }
                trunednum=0;
            }
        }
        int ans;
        if(turnonecnt>1)
        ans = fact(turnonecnt - 1);
        else
        ans=0;
        sort(iterneeded, iterneeded + n);
        int combi = 0;
        if (n > 1)
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (iterneeded[i] == iterneeded[i + 1] && iterneeded[i] != INT_MAX)
                    combi++;
                else
                {
                    ans += fact(combi);
                    combi = 0;
                }
            }
            ans += fact(combi);   // flush whatever group was still accumulating
        }
        cout << ans << endl;
    }
}