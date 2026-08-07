#include <iostream>
using namespace std;
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
        bool manypair = false;
        int paircount = 0;
        int unicont = 1;
        int pairnumber=-200;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] == arr[i + 1] && arr[i]!=pairnumber)
            {
                pairnumber=arr[i];
                paircount++;
            }
            else
            {
                unicont++;
            }
        }
        bool freenumber = false;
        for (int i = 0; i < n; i++)
        {
            if (i == 0 && arr[i] != arr[i + 1])
            {
                freenumber = true;
                break;
            }
            else if (i == n - 1 && arr[i] != arr[i - 1])
            {
                freenumber = true;
                break;
            }
            else if (arr[i + 1] != arr[i] && arr[i] != arr[i - 1] && arr[i + 1] != arr[i - 1])
            {
                freenumber = true;
                break;
            }
        }

        int ans = unicont;
        if (paircount >= 2)
        {
            ans += 2;
        }
        else if (freenumber)
        {
            ans++;
        }

        cout << ans << endl;
    }
}