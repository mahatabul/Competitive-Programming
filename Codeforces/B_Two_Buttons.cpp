#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fastio;

    int n,m;
    cin>>n>>m;
    if (n>=m)
    {
        cout<<n-m<<endl;
    }
    else{
        int count=0;
        while (m>n)
        {
            if (m%2==0)
            {
               m/=2;count++;
            }
            else
            {
                m+=1;count++;
            }
            
        }
        cout<<count+(n-m);
    }
    

    return 0;
}