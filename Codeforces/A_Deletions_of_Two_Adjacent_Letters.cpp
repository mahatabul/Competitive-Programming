#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fastio;

    int t;cin>>t;
    while (t--)
    {
        bool possible = false;
        string s;
        cin>>s;
        char c;
        cin>>c;

        vector<int> idx;


        for (int i = s.size()-1; i >= 0; i--)
        {
            if (s[i]==c)
            {
                idx.push_back(i+1);
            }
            
        }
        for(auto i:idx){
            if (i%2!=0)
            {
                possible = true;
                break;
            }
            
        }

        if (possible)
        {
            cout<<"YES\n";
        }
        else cout<<"NO\n";
        
        
        
    }
    

    return 0;
}