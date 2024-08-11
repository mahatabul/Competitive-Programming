#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main()
{
    fastio;

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int zeros = 0, ones = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                zeros++;
            }
            else if (s[i] == '1')
            {
                ones++;
            }
        }

        int pairs = min(zeros, ones);

        if (pairs == 0 or pairs % 2 == 0)
        {
            cout << "NET\n";
        }
        else if (pairs % 2 != 0)
        {
            cout << "DA\n";
        }
    }

    return 0;
}
