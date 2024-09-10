#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int nn = sqrt(n);
        if (nn * nn != n)
        {
            cout << "No" << endl;
            continue;
        }

        int ones = 0;
        while (ones < n and s[ones] == '1')
        {
            ones++;
        }
        if (ones == n)
        {
            (n == 4) ? cout << "Yes" : cout << "No";
        }

        else
        {
            ((ones - 1) * (ones - 1) == n) ? cout << "Yes" : cout << "No";
        }

        cout << endl;
    }
    return 0;
}