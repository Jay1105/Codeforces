#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int> > v(n, vector<int> (m));
    
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        for (int j = 0; j < m; j++)
        {
            v[i][j] = s[j] - '0';
        }
    }

    bool flag = 1;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            int sum = v[i][j] + v[i + 1][j] + v[i][j + 1] + v[i + 1][j + 1];

            if (sum == 3)
            {
                flag = 0;
                break;
            }
        }
        if (!flag) break;
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
