/* #include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);cin.tie(0);
int t; cin>>t;
while(t--)
{
    int x;
    cin>>x;
    if(x>2&&x%2==0){cout<<x/2-1<<endl;}
    else if(x>2&&x%2!=0){cout<<x/2<<endl;}
    else{cout<<"0"<<endl;}
}
return 0;
} */


#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main()
{
    fastio;

    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int r = (x - 1) / 2;
        cout << r << endl;
    }

    return 0;
}