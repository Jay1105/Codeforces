// CF Educatinal Round 138 B

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin >> n;

    vector<ll> hp(n);
    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> hp[i];
        ans += hp[i];
    }

    vector<ll> spell(n);
    for (int i = 0; i < n; i++)
    {
        cin >> spell[i];
    }

    ll l = 0, r = n - 1;

    while (l < r)
    {
        if (spell[l] < spell[r])
            ans += spell[l++];
        else
            ans += spell[r--];
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
