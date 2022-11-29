// CF Round 775 Div 2 B

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin >> n;

    vector<ll> a(n);
    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        sum += a[i];
    }

    ll mx = *max_element(a.begin(), a.end());

    if (sum == 0)
    {
        cout << 0 << "\n";
    }
    else if (mx * 2 <= sum)
    {
        cout << 1 << "\n";
    }
    else
    {
        cout << (2 * mx) - sum << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
