#include <bits/stdc++.h>

using namespace std;
int main()
{
   
    int n, s;
    cin >> n >> s;
    if (s == 0 && n==1)
    {
        cout << "0 0" << '\n';
        return 0;
    }
    if (s == 0 || s > n * 9)
    {
        cout << "-1 -1" << '\n';
        return 0;
    }
    string maxi,mini;
    for (auto i = 0; i < n; i++)
    {
        int tem=min(9,s);
        maxi.push_back('0'+tem);
        s-=tem;
    }
    mini=maxi;
    reverse(mini.begin(),mini.end());
    int j=0;
    while (mini[j]=='0')
    {
        j++;
    }
    mini[0]++;
    mini[j]--;
    cout << mini << ' ' << maxi << '\n';
    return 0;
}