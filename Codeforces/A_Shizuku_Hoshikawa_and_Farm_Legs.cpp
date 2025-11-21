#include <bits/stdc++.h>
using namespace std;
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
int main()
{
    fast_io;
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n % 2 == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << (n / 4) + 1 << endl;
        }
    }

    return 0;
}