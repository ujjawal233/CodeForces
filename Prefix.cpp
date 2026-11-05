#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long mn = a[0];
        long long mx = a[0];
        long long ans = a[0];

        for (int i = 1; i < n; i++)
        {
            long long x = a[i];

            long long newMn = min({mn + x,
                                   mx + x,
                                   mn - x,
                                   mx - x});

            long long newMx = max({mn + x,
                                   mx + x,
                                   mn - x,
                                   mx - x});

            mn = newMn;
            mx = newMx;

            ans = max(ans, mx);
        }

        cout << ans << '\n';
    }

    return 0;
}