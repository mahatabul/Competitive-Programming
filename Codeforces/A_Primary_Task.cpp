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

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        if (s.size() < 3) {
        cout << "NO\n"; 
        continue;
    }

        string s1 = s.substr(0, 2);
        string s2 = s.substr(2, s.size() - 2);

        int a = stoi(s1), b = stoi(s2), c = s[2]-'0';


        if (a == 10 and b >= 2 and c>0)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}