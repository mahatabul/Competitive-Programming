#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

bool isConsonant(char c)
{
    bool f = false;
    if (c == 'b' || c == 'c' || c == 'd')
    {
        f = true;
    }
    return f;
}

bool isVowel(char c)
{
    bool f = false;
    if (c == 'a' || c == 'e')
    {
        f = true;
    }
    return f;
}
int main()
{
    fastio;

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (s.size() == 2)
        {
            cout << s << endl;
            continue;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (isConsonant(s[i]) and isVowel(s[i - 1]) and isVowel(s[i + 1]))
            {
                cout << '.';
                cout << s[i];
            }
            else if (isConsonant(s[i]) and isVowel(s[i - 1]) and isConsonant(s[i + 1]))
            {
                cout << s[i];
                cout << '.';
            }
            else
            {
                cout << s[i];
            }
        }
        cout << endl;
    }

    return 0;
}