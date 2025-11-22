#include <bits/stdc++.h>
using namespace std;

#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define ff first
#define ss second

int ans = 0;
void getresult(int node, int parent, vector<vector<int>> &adj, int a[], int m, int cons)
{

    if (a[node])
    {
        cons++;
    }
    else
    {
        cons = 0;
    }
    if (cons > m)
    {
        return;
    }
    if (adj[node].size() == 1 && node != 1)
    {
        ans++;
        return;
    }

    for (auto child : adj[node])
    {
        if (child != parent)
        {
            getresult(child, node, adj, a, m, cons);
        }
    }
}

int main()
{
    fast_io;
    int n, m;
    cin >> n >> m;
    int a[n + 1];

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    vector<vector<int>> adj;
    adj.resize(n + 1);

    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    getresult(1, -1, adj, a, m, 0);
    cout << ans << endl;

    return 0;
}