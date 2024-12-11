#include<bits/stdc++.h>

using namespace std;

//---------------------//Definition Section//---------------------//

#define pb push_back
#define mp make_pair
#define bend(x) x.begin(),x.end()
#define rend(x) x.rbegin(),x.rend()
#define in(x,i,y) x.insert(x.begin()+i,y)
#define mset(a,b) memset(a, b, sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#define ll long long
#define ul unsigned long long

//-----------------//Global Declaration Section//------------------//

void solve();

//--------------------//Main Function Section//--------------------//

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    //cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}

//---------------------//Sub Program Section//----------------------//

void solve()
{
    int n, k, tst = 0;
    cin >> n >> k;
    int a[n], b[n], ans[n];
   vector<pair<int,int>> ia, ib, ab;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ia.pb(mp(i,a[i]));
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        tst += a[i]/b[i];
        ans[i] = a[i]/b[i];
        ab.pb(mp(a[i],b[i]));
        ib.pb(mp(i,b[i]));
    }
    if(tst < k)
    {
        for (int i = 0; i < n; i++)
        {
            cout << 0 << " ";
        }cout << endl;
        return;        
    }
    else if(tst == k)
    {
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }cout << endl;
        return; 
    }
    else
    {
        int extra = tst - k;

        for(int i = 0; i < n; i++)        
        {
            if(ans[i] - extra > 0)
            {
                ans[i] -= extra;
                extra = 0;
                cout << ans[i] << " ";
            }else if(ans[i] - extra < 0)
            {
                extra -= ans[i];
                ans[i] = 0;
                cout << 0 << " ";
            }else if(ans[i] - extra == 0)
            {
                ans[i] = extra = 0;
                cout << "0 ";
            }
        }
    }
}