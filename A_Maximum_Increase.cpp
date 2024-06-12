#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main()
{
    fastio;

    int n, c = 1;
    cin >> n;
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++)
    {

        if (arr[i] > arr[i - 1])
        {
            c++; 
        }
        else if (arr[i] < arr[i - 1])
        {
            c = 1;
        }
        else if (arr[i] == arr[i - 1])
        {
            continue;
        }
    }
    cout << c << endl;

    return 0;
}