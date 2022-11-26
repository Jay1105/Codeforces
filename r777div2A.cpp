#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin >> n;

    bool flag = 1;
    ll ans1 = 0;

    bool boat = 1;

    string a;

    while (1)
    {
        if (ans1 > n)
        {
            boat = 0;
            break;
        }

        if (flag)
        {
            ans1 += 2;
            a.push_back(2);
            flag = 0;
        }
        else
        {
            ans1++;
            a.push_back(1);
            flag = 1;
        }

        if (ans1 == n)
        {
            break;
        }
    }

    if (boat)
    {
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == 2)
                cout << 2;
            else
                cout << 1;
        }

        cout << "\n";
    }
    else
    {
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == 2)
                cout << 1;
            else
                cout << 2;
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
