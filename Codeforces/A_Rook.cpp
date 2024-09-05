#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fastio;

    int t;
    cin>>t;
    while (t--)
    {
        char a;
        int b;
        cin>>a>>b;
        for (int i = 1; i <= 8; i++)
        {
            if (i==b)
            {
                continue;
            }
            
            cout<<a<<i<<endl;
        }

        

        for (char i = 'a'; i <= 'h'; i++)
        {
            if (i==a)
            {
                continue;
            }
            cout<<i<<b<<endl;
            
        }
        
        
    }
    

    return 0;
}