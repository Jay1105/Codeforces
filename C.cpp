#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool flag = 1;
    int mn = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] < mn)
        {
            flag = 0;
            break;
        }
    }

    if (flag)
        cout << "Bob\n";
    else
        cout << "Alice\n";
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