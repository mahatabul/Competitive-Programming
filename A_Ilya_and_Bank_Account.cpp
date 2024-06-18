/* 
// Everyone's code:

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    if (n>=0)
    {
        cout<<n;
    }
    else{
        int a,b;
        a = n/10;
        b = (n/100)*10+(n%10);
        cout<<max(a,b);
    }
    return 0;
}

 */

// My code: ^_^


#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    if (n >= 0)
    {
        cout << n;
    }
    else
    {
        string e, f, s = to_string(n);
        e = s;
        f = s;
        e = e.erase(e.length() - 1, 1);
        f = f.erase(f.length() - 2, 1);
        int a, b;
        a = stol(e);
        b = stol(f);
        cout << max(a, b);
    }

    return 0;
}

