// CF Educational Round 138 A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<pair<int, int> > rooks(m);
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        rooks[i].first = x, rooks[i].second = y;
    }

    if (m < n)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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
