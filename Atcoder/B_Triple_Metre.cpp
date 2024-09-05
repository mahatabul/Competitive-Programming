#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fastio;

    string s;
    cin >> s;

    
    string t;
    for (int i = 0; i < 100000; ++i) {
        t += "oxx";
    }

    auto it = t.find(s);
    if (it!=string::npos)
    {
        cout<<"Yes\n";
    }
    else cout<<"No";    

    return 0;
}
