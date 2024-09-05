#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fastio;

    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;

        if (n==1)
        {
            cout<<9;
        }
        else
        {
            cout<<9;
            int x = 8;
            for (int i = 2; i <= n; i++)
            {
                cout<<x;
                x++;
                if (x>=10)
                {
                    x=0;
                }
                
            }
            
        }
        cout<<endl;
        
        
    }
    

    return 0;
}