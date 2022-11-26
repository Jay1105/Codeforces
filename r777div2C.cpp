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

    if (v[0][0] == 1)
    {
        cout << -1 << "\n";
        return;
    }

    int op = 0;
    vector<vector<int> > ans(n * m);

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            if (v[i][j] == 1)
            {
                if (i > 0)
                {
                    ans[op].push_back(i - 1 + 1);
                    ans[op].push_back(j + 1);
                    ans[op].push_back(i + 1);
                    ans[op].push_back(j + 1);
                }
                else
                {
                    ans[op].push_back(i + 1);
                    ans[op].push_back(j - 1 + 1);
                    ans[op].push_back(i + 1);
                    ans[op].push_back(j + 1);
                }

                op++;
            }
        }
    }

    cout << op << "\n";

    for (int i = 0; i < op; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << ans[i][j] << " ";
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
