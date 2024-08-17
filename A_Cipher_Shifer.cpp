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
        string s,ans="";
        cin>>s;

        char c= s[0];
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i]==c)
            {
                ans.push_back(s[i]);
                c = s[i+1];
                i++;
            }
            else continue;
            
        }
        cout<<ans<<endl;
        
    }
    

    return 0;
}