// CF Round 825 Div 2 C1

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin >> n;

    vector<ll> a(n + 1);
    vector<ll> dp(n + 1, 0);

    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        dp[i] = min(dp[i - 1] + 1, a[i]);
        ans += dp[i];
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
