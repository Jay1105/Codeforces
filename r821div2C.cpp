// CF Round 821 Div 2 C

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (n == 1)
    {
        cout << 0 << "\n";
        return;
    }

    cout << n - 1 << "\n";
    cout << 1 << " " << n << "\n";

    ll x = (a[0] + a[n - 1]) % 2 ? a[0] : a[n - 1];

    for (int i = 1; i < n - 1; i++)
    {
        if ((x + a[i]) % 2)
            cout << 1 << " " << i + 1 << "\n";
        else
            cout << i + 1 << " " << n << "\n";
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
