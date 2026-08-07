#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string arr;
        cin >> arr;

        int zero_pair = 0;
        int one_pair = 0;
        int zero_cnt = 0;
        int one_cnt = 0;
        string remaining_str;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == arr[i + 1] && i < n - 1)
            {
                if (arr[i] == '0')
                    zero_pair++;
                else
                    one_pair++;
            }
            if (arr[i] == '0')
                zero_cnt++;
            else
                one_cnt++;
        }
        int remaing_zero = zero_cnt - zero_pair;
        int remaing_one = one_cnt - one_pair;
        int remaining_oper = zero_pair - one_pair;
        int opercnt = zero_pair + one_pair;
        if (remaining_oper > 1)
        {
            if (remaing_one >= remaining_oper - 1)
            {
                opercnt += remaining_oper - 1;
            }
            else
            {
                opercnt = -1;
            }
        }
        else if (remaining_oper < -1)
        {
            remaining_oper=abs(remaining_oper);
            if (remaing_zero >= remaining_oper - 1)
            {
                opercnt += remaining_oper - 1;
            }
            else
            {
                opercnt = -1;
            }

        }

        cout << opercnt << endl;
    }
}