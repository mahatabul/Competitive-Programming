#include <bits/stdc++.h>
using namespace std;

#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long

int mp[100005] = {0}, ans[100005] = {0};

int main()
{
    fast_io;

    int n, m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (mp[arr[i]] == 0)
        {
            sum++;
        }
        mp[arr[i]]++;
        ans[i] = sum;
    }
    int buff;
    while (m--)
    {
        cin >> buff;
        cout << ans[buff - 1] << endl;
    }
}