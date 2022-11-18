// CF Educational Round 138 C

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> f(n + 1, 0);

    int ones = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        f[a[i]]++;

        if (a[i] == 1)
            ones++;
    }

    vector<int> cf(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cf[i] = cf[i - 1] + f[i];
    }

    int ans = (ones + 1) / 2;

    bool flag = 1;

    while (flag)
    {
        for (int i = ans; i >= 1; i--)
        {
            if (cf[i] < ans - 1 + i)
            {
                flag = 0;
                break;
            }
        }

        if (flag == 0)
        {
            cout << ans - 1 << "\n";
        }
        else
        {
            ans++;
        }
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
