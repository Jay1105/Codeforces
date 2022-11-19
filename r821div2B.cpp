// CF Round 821 Div 2 B

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;

    if ((x == y) || ((x > 0) && (y > 0)))
    {
        cout << -1 << "\n";
        return;
    }

    int temp = (x != 0) ? x : y;
    int k = temp;

    if ((n - 1) % temp)
    {
        cout << -1 << "\n";
        return;
    }

    int player = 1;
    for (int i = 1; i <= n - 1; i++)
    {
        if (k == 0)
        {
            k = temp;
            player = i + 1;
        }

        cout << player << " ";
        k--;
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
