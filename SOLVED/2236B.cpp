#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string binary;
        cin >> binary;
        for (int i = 0; i < n - k; i++)
        {
            if (binary[i] == '1')
            {
                binary[i] = '0';
                if (binary[i + k] == '0')
                    binary[i + k] = '1';
                else
                    binary[i + k] = '0';
            }
        }

        string ans = "yes";
        for (int i = 0; i < n; i++)
        {
            if (binary[i] == '1')
            {
                ans = "no";
                break;
            }
        }

        cout << ans << endl;

    }
}