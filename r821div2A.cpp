// CF Round 821 A

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    map<ll, ll> mp;

    for (int i = 0; i < n; i++)
    {
        if (mp.find(i % k) != mp.end())
            mp[i % k] = max(mp[i % k], a[i]);
        else
            mp[i % k] = a[i];
    }

    map<ll, ll>:: iterator it;

    ll ans = 0;
    for (it = mp.begin(); it != mp.end(); it++)
    {
        ans += it->second;
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
