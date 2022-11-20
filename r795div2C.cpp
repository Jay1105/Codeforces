// CF Round 795 Div 2 C

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int cnt = 0, first_pos = n, last_pos = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            continue;
        cnt++;
        if (first_pos == n)
            first_pos = i;
        last_pos = i;
    }

    int ans = 0;

    if (cnt > 0 && (n - 1 - last_pos) <= k)
    {
        k -= (n - 1 - last_pos);
        cnt--;
        ans++;
    }
    if (cnt > 0 && (first_pos <= k))
    {
        k -= (first_pos);
        cnt--;
        ans += 10;
    }

    ans += (11 * cnt);

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
