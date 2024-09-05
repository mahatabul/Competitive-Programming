#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef long long int ln;
ln dp[100005]={0};
ln dp2[100005];
int main()
{
    

    int n;
    cin >> n;
    

    for (auto i = 0; i < n; i++)
    {
        ln number;
        cin >> number;
        dp[number]++;
    }

    dp2[0] = 0;
    dp2[1] = dp[1];

    for (auto i = 2; i <= 100000; i++)
    {
        dp2[i] = max(dp2[i - 1], dp2[i - 2] + i * dp[i]);
    }
    cout << dp2[100000];
    return 0;
}
