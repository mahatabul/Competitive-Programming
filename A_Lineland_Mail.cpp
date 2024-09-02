#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fastio;

    int n, t;
    cin >> n;

    int lineland[n];
    for (auto i = 0; i < n; i++)
    {
        cin >> lineland[i];
    }
    cout << (lineland[1]) - (lineland[0]) << " " << (lineland[n - 1]) - (lineland[0]);
    cout << "\n";

    for (auto i = 1; i <= n - 2; i++)
    {
        int a = min(lineland[i] - lineland[i - 1], lineland[i + 1] - lineland[i]);
        int b = max(lineland[n - 1] - lineland[i], lineland[i] - lineland[0]);
        cout << a << " " << b << "\n";
    }

    cout << (lineland[n - 1]) - (lineland[n - 2]) << " " << (lineland[n - 1]) - (lineland[0]);

    return 0;
}