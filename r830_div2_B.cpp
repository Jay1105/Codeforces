#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int ones = 0, zeros = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            ones++;
        else
            zeros++;
    }

    if (ones == 0 || zeros == 0)
    {
        cout << 0 << "\n";
    }
    else
    {
        int idx = n;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '1')
                idx = i;
        }

        bool flag = 1;
        int ans = 0;
        
        for (int i = idx + 1; i < n; i++)
        {
            if (flag)
            {
                if (s[i] == '1')
                    continue;
                else
                {
                    ans++;
                    flag = 0;
                }
            }
            else
            {
                if (s[i] == '0')
                    continue;
                else
                {
                    ans++;
                    flag = 1;
                }
            }
        }

        cout << ans << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
