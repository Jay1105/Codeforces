// CF Global Round 23 C

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> loc(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i]--;
        loc[a[i]] = i;
    }

    for (int i = 0; i < n; i++)
    {
        if (loc[i] == n - 1)
            cout << n << " ";
        else
            cout << loc[i] + 2 << " ";
    }
    cout << "\n";
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
