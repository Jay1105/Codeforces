// CF Round 775 Div 2 C

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n, m;
    cin >> n >> m;

    map<ll, vector<ll> > x;
    map<ll, vector<ll> > y;

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            ll col;
            cin >> col;

            x[col].push_back(i);
            y[col].push_back(j);
        }
    }

    map<ll, vector<ll> >::iterator it;

    for (it = x.begin(); it != x.end(); it++)
    {
        sort(it->second.begin(), it->second.end());
    }
    for (it = y.begin(); it != y.end(); it++)
    {
        sort(it->second.begin(), it->second.end());
    }

    ll x_ans = 0;

    for (it = x.begin(); it != x.end(); it++)
    {
        ll prefix = accumulate(it->second.begin(), it->second.end(), 0LL);

        for (ll i = 0; i < it->second.size(); i++)
        {
            prefix -= it->second[i];
            x_ans += prefix - ((it->second.size() - i - 1) * it->second[i]);
        }
    }

    ll y_ans = 0;

    for (it = y.begin(); it != y.end(); it++)
    {
        ll prefix = accumulate(it->second.begin(), it->second.end(), 0LL);

        for (ll i = 0; i < it->second.size(); i++)
        {
            prefix -= it->second[i];
            y_ans += prefix - ((it->second.size() - i - 1) * it->second[i]);
        }
    }

    ll ans = x_ans + y_ans;

    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
