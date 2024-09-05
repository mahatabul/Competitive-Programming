#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);cin.tie(0);
int t;
cin >> t;
while (t--)
{
    int p1, p2, p3;
    cin >> p1 >> p2 >> p3;
    int total = p1 + p2 + p3;

    if (total % 2 == 1)
    {
        cout << -1 << endl;
    }
    else
    {
        int m;
        int a = p1 + p2;
        int b = total / 2;
        m = min(a, b);
        cout << m << endl;
    }
}
}