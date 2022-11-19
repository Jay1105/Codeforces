// CF Round 800 Div 2 C

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;

    vector<ll> a(n);
    vector<ll> pre(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0)
            pre[i] = a[i];
        else
            pre[i] = a[i] + pre[i - 1];
    }

    if (pre[n - 1] != 0)
    {
        cout << "No\n";
        return;
    }

    bool ok = 1;
    for (int i = 0; i < n; i++)
    {
        if (pre[i] < 0)
        {
            ok = 0;
            break;
        }
    }

    bool vis_zero = 0;
    for (int i = 0; i < n; i++)
    {
        if (pre[i] == 0) vis_zero = 1;
        else if (vis_zero)
        {
            ok = 0;
            break;
        }
    }

    if (ok)
        cout << "Yes\n";
    else
        cout << "No\n";
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
