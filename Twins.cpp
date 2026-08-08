// intput: 2,   3 3
// Output: 2
// intput: 3,  2, 1, 2
// Output: 2
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    int ans = 0;
    for (auto it : mp)
    {
        ans = max(ans, it.second);
    }
    cout << ans << endl;
}