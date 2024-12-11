#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

int solve(int n)
{
    vector<int> wood;
    int ans = 0;
    wood.insert(wood.end(), n, 25);
    wood.insert(wood.end(), n, 21);
    wood.insert(wood.end(), n, 18);

    while (!wood.empty())
    {
        int plank = 60;
        for (auto it = wood.begin(); it != wood.end();)
        {
            if (*it <= plank)
            {
                plank -= *it;
                it = wood.erase(it);
            }
            else
            {
                ++it;
            }
        }
        ans++;
    }

    return ans;
}
int main()
{
    fastio;

    int n;
    cin >> n;

    cout << solve(n);

    return 0;
}