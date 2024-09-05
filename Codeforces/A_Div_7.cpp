
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);


int countDigitChanges(int a, int b) {
    int changes = 0;
    while (a > 0 || b > 0) {
        if (a % 10 != b % 10) {
            changes++;
        }
        a /= 10;
        b /= 10;
    }
    return changes;
}

int main()
{
    fastio;

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 7 != 0)
        {
            int ans1 = (n / 7) * 7;
            int ans2 = ans1 + 7;

            if (ans1 > 10 and ans2 > 10)
            {
                int change1 = countDigitChanges(ans1,n);
                int change2 = countDigitChanges(ans2,n);

                change1==1? cout<<ans1:cout<<ans2;
                cout<<endl;
            }
            else if (ans1<10)
            {
                cout<<ans2<<endl;
            }
            else if (ans2<10)
            {
                 cout<<ans1<<endl;
            }
            
            
        }

        else
        {
            cout<<n<<endl;
        }
        
    }

    return 0;
}
