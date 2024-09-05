#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

int main()
{
    fastio;
    
    int n;
    cin >> n;
    vector<int> shops(n);
    for (int i = 0; i < n; i++)
    {
        cin >> shops[i];
    }
    sort(shops.begin(), shops.end());
    
    int t;
    cin >> t;
    while (t--)
    {
        int coin;
        cin >> coin;
        
        
        int c = upper_bound(shops.begin(), shops.end(), coin) - shops.begin();
        
        cout << c << endl;
    }

    return 0;
}


/* #include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

int main()
{
    fastio;
    
    int n;
    cin >> n;
    vector<int> shops(n);
    for (int i = 0; i < n; i++)
    {
        cin >> shops[i];
    }
    sort(shops.begin(), shops.end());
    
    int maxCoin = shops.back(); // The maximum coin value we might need to consider
    
    // Create a DP array to store the number of shops that can be visited with a certain amount of coins
    vector<int> dp(maxCoin + 1, 0);
    for (int i = 1, j = 0; i <= maxCoin; i++) {
        while (j < n && shops[j] <= i) {
            j++;
        }
        dp[i] = j;
    }
    
    int t;
    cin >> t;
    while (t--)
    {
        int coin;
        cin >> coin;
        
        if (coin > maxCoin) {
            cout << n << endl; // All shops can be visited if coin value is greater than the largest shop price
        } else {
            cout << dp[coin] << endl;
        }
    }

    return 0;
} */
