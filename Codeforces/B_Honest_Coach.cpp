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
        int n;
        cin >> n;
        if (n == 2)
        {
            int a, b;
            cin >> a >> b;
            cout << abs(a - b) << endl;
            continue;
        }

        int arr[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int result = INT_MAX;

        for (int i = 1; i < n; i++)
        {
            int re = abs(arr[i]-arr[i-1]);
            result = min(re,result);
        }
        
        cout << result << endl;
    }

    return 0;
}