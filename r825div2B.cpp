#include <bits/stdc++.h>
using namespace std;

int GCD(int x, int y)
{
    if (y == 0)
        return x;

    return GCD(y, x % y);
}

int LCM(int x, int y)
{
    return (x * y) / GCD(x, y);
}

void solve()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int b[n + 1];
    b[0] = a[0], b[n] = a[n - 1];

    for (int i = 1; i < n; i++)
    {
        b[i] = LCM(a[i - 1], a[i]);
    }

    bool flag = 1;

    for (int i = 1; i < n + 1; i++)
    {
        if (b[i - 1] > b[i])
        {
            if (GCD(b[i - 1], b[i]) != a[i - 1])
            {
                flag = 0;
                break;
            }
        }
        else
        {
            if (GCD(b[i], b[i - 1]) != a[i - 1])
            {
                flag = 0;
                break;
            }
        }
    }

    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
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
