// CF Round 795 Div 2 B

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    map<int, int>::iterator it;

    bool flag = 1;
    for (it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second == 1)
        {
            flag = 0;
            break;
        }
    }

    if (!flag)
    {
        cout << -1 << "\n";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << mp[a[i]] + i << " ";

            for (int j = 1; j < mp[a[i]]; j++)
            {
                cout << j + i << " ";
            }

            i += mp[a[i]] - 1;
        }
        cout << "\n";
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
