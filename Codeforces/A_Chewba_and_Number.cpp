#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

int main()
{
    fastio;

    string s;
    cin >> s;

    if (s[0] - '0' == 9)
    {
        cout << s[0];
    }
    else
    {
        cout << min(9 - (s[0] - '0'), s[0] - '0');
    }

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] - '0' <= 4)
        {
            cout << s[i] - '0';
        }
        else{
            cout << 9 - (s[i] - '0');}
    }

    return 0;
}