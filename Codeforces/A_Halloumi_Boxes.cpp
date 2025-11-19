#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define ff first
#define ss second

void solve() {
    int n,k,comp=0,isSorted=1;
    cin>>n>>k;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if (arr[i]>=comp)
        {
           comp=arr[i];
        }
        else
        {
            isSorted=0;
        }
        
        
    }
    if (isSorted)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<(k == 1 ? "NO": "YES") << endl;
    }
    

    
}

int main() {
    fast_io;

    int t ;
    cin >> t; 
    while(t--) solve();
    return 0;
}