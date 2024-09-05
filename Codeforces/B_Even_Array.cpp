#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main()
{
    fastio;

    int t; // testcases
    cin >> t;
    while (t--)
    {
        int n, not_good = 0, even=0, odd=0; // not_good will record the number of times i%2 and a[i]%2 wasn't equal
        cin >> n;
        
       

        vector<int> a(n); // for array input
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        // main process
        for (int i = 0; i < n; i++)
        {
            if (i % 2 != a[i] % 2)
            {
                not_good++;
                if (i%2==0)
                {
                    even++;
                }
                else odd++;
                
            }
        }


        if (not_good & 1) // if it happened even number of times we can swap the elements.
        {
            cout << -1 << endl; //  If not then it won't be possible to swap thus -1
            continue;
        }
        else
        {
            if (even==odd)
            {
                cout<<even;
            }
            else cout<<-1;
            
        }
        
            

        cout << endl;
    }

    return 0;
}