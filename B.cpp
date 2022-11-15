#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int dis = 0;
        vector<int> cnt(10, 0);

        for (int j = i; j >= max(i - 100, 0); j--)
        {
            if (cnt[s[j] - '0'] == 0)
                dis++;
            cnt[s[j] - '0']++;

            int flag = 1;
            for (int k = 0; k < 10; k++)
            {
                if (cnt[k] > dis)
                {
                    flag = 0;
                    break;
                }
            }

            ans += flag;
        }
    }

    cout << ans << "\n";
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