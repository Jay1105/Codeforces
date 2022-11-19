// CF Round 800 Div 2 A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int zeros, ones;
    cin >> zeros >> ones;

    while (zeros > 0 && ones > 0)
    {
        cout << 0 << 1;
        zeros--, ones--;
    }
    if (zeros == 0)
    {
        while (ones--)
        {
            cout << 1;
        }
    }
    if (ones == 0)
    {
        while (zeros--)
        {
            cout << 0;
        }
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
