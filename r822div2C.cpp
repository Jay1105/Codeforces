// CF Round 822 Div 2 C

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    bool a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        a[i] = (s[i - 1] == '1');
    }

    int cost[n + 1];

    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j <= n; j += i)
        {
            if (a[j]) break;
            cost[j] = i;
        }
    }

    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!a[i])
            ans += cost[i];
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
