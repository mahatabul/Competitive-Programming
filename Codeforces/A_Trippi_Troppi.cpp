#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define ff first
#define ss second

void solve() {
    string s1,s2;
    
    cin>>s1;
    s2.push_back(s1[0]);
    cin>>s1;
    s2.push_back(s1[0]);
    cin>>s1;
    s2.push_back(s1[0]);
    cout<<s2<<endl;

}

int main() {
    fast_io;

    int t = 1;
    cin >> t; 

    while(t--) solve();
    return 0;
}