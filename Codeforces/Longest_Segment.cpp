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
    double ans = INT_MIN, pre;
    cin >> n;

    int x[n], y[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> x[i] >> y[i];
    }
    for (auto i = 0; i < n; i++)
    {
        for (auto j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            else
            {
                pre = sqrt(pow((x[i] - x[j]), 2) + pow((y[i] - y[j]), 2));
                ans = max(ans, pre);
            }
        }
    }

    cout << fixed << setprecision(10) << ans << endl;

    return 0;
}
/* 
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

    int n, min_x_index, min_y_index, max_x_index, max_y_index, min_y = INT_MAX, min_x = INT_MAX, max_x = INT_MIN, max_y = INT_MIN;
    double ans = INT_MIN;
    double ans1, ans2;
    cin >> n;

    int x[n], y[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> x[i] >> y[i];
        if (min_x > x[i])
        {
            min_x = x[i];
            min_x_index = i;
        }
        if (min_y > y[i])
        {
            min_y = y[i];
            min_y_index = i;
        }
        if (max_x < x[i])
        {
            max_x = x[i];
            max_x_index = i;
        }
        if (max_y < y[i])
        {
            max_y = y[i];
            max_y_index = i;
        }
    }
    
    ans1 = sqrt(pow((x[max_x_index] - x[min_x_index]), 2) + pow((y[max_x_index] - y[min_x_index]), 2));
    ans2 = sqrt(pow((x[max_y_index] - x[min_y_index]), 2) + pow((y[max_y_index] - y[min_y_index]), 2));
    
    ans = max(ans,max(ans1,ans2));
    cout << fixed << setprecision(10) << ans << endl;

    return 0;
} */