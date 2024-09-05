#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;

    int j = 0, i = 0;

    string s;
    cin >> s;

    while (i + j <= n - 1)
    {
        cout << s[i];
        j++;
        i += j;
    }

    return 0;
}