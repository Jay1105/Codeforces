// CF Global Round 23 B

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    int zeros = 0, ones = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
            zeros++;
        else
            ones++;
    }

    int ans = 0;
    int cnt = 0;
    while (zeros--)
    {
        if (a[cnt] == 1)
            ans++;
        cnt++;
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
