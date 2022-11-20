// CF Round 796 Div 2 B

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;

    vector<ll> a(n);
    bool isOdd = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (a[i] % 2)
            isOdd = 1;
    }

    bool flag = 1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag)
    {
        cout << 0 << "\n";
    }
    else if (isOdd)
    {
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
                ans++;
        }

        cout << ans << "\n";
    }
    else
    {
        vector<ll> evennos;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
                evennos.push_back(a[i]);
        }

        ll ans = INT_MAX;
        for (int i = 0; i < evennos.size(); i++)
        {
            ll temp = 0;

            while (!(evennos[i] % 2))
            {
                temp++;
                evennos[i] /= 2;
            }

            ans = min(ans, temp);
        }

        ll even = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
                even++;
        }

        ans += even - 1;

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
