#include<bits/stdc++.h>
using namespace std;

int main()
{ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    if (n > 26)
    {
        cout << -1 << endl;
    }
    else
    {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        int c = 0, l = 0, r = n - 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                c++;
            }
        }
        cout << c << endl;
    }

    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//     int n;
//     cin>>n;
//     string s;
//     cin>>s;
//     sort(s.begin(),s.end());
//     int c=0,l=0,r=n-1;
//     for (int i = 0; i < n-1; i++)
//     {
//         if (s[i]==s[i+1])
//         {
//             c++;
//         }
//     } 
//     if(n<=26)cout<<c<<endl;
//     else cout<<-1<<endl;
//     return 0;
//     }