#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

bool isWholeNumber(double number) {
    return fmod(number, 1.0) == 0.0;
}

int main() {
    fastio;

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int num=0;
        for (int i = 0; i < n; i++)
        {
            int a;cin>>a;
            num+=a;
        }
        
        double ans = sqrt(num);
        (isWholeNumber(ans)? cout << "YES":cout<<"NO");
        cout<<endl;
    }
    

    return 0;
}