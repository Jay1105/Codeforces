#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    string t = "BAN";

    for (int i = 0; i < n; i++)
    {
        s = s + t;
    }

    if (n < 3)
    {
        cout << 1 << "\n";

        if (n == 1)
            cout << 2 << " " << 3 << "\n";
        else
            cout << 2 << " " << 6 << "\n";
    }
    else
    {
        int ans = n / 2;

        if (n % 2)
            ans++;
        
        cout << ans << "\n";

        int aptr = 2, nptr = 3 * n;

        while (ans--)
        {
            cout << aptr << " " << nptr << "\n";
            aptr += 3, nptr -= 3;
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