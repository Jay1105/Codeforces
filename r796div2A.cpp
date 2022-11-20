// CF Round 796 Div 2 A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    if (__builtin_popcount(n) == 1 && n != 1)
    {
        cout << n + 1 << "\n";
    }
    else
    {
        if (n == 1)
            cout << 3 << "\n";
        else if (n % 2)
            cout << 1 << "\n";
        else
        {
            int x = 2;
            for (int j = 1; j < 32; j++)
            {
                if ((n >> j) & 1)
                {
                    break;
                }
                x *= 2; 
            }

            cout << x << "\n";
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
