// CF Round 775 Div 2 A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    int cnt = 0;
    int idx = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (a[i] == 0)
        {
            cnt++;
            idx = i;
        }
    }

    if (cnt == 0)
    {
        cout << 0 << "\n";
    }
    else
    {
        int ds = 0;
        int cost = 0;

        for (int i = 1; i < n; i++)
        {
            if (a[i] == 1)
                ds = i;
            else
            {
                cost = idx + 1 - ds;
                break;
            }
        }

        cout << cost << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
