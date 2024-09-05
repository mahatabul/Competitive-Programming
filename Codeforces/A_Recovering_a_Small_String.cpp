#include <bits/stdc++.h>
 #include <map>
using namespace std;
using ll = long long;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main()
{
    fastio;

    int t;
    cin >> t;

    map<int, char> letter = {
        {1, 'a'}, {2, 'b'}, {3, 'c'}, {4, 'd'}, {5, 'e'}, {6, 'f'}, {7, 'g'}, {8, 'h'}, {9, 'i'}, {10, 'j'}, {11, 'k'}, {12, 'l'}, {13, 'm'}, {14, 'n'}, {15, 'o'}, {16, 'p'}, {17, 'q'}, {18, 'r'}, {19, 's'}, {20, 't'}, {21, 'u'}, {22, 'v'}, {23, 'w'}, {24, 'x'}, {25, 'y'}, {26, 'z'}

    };

    while (t--)
    {
        int a, b, c;

        int n;
        cin >> n;

        if (n > 26 * 2)
        {

            b = 26;
            c = 26;
            a = n - (26 * 2);
        }


        
        else if (n - 26 >= 2)
        {
            c = 26;
            a = 1;
            n -= 27;

            b = n;
        }
        else if (n == 26)
        {
            c = 26 - 2;
            b = 1;
            a = 1;
        }

        else
        {
            c = n - 2;
            n -= c;
            a = 1;
            n -= 1;
            b = n;
        }

        cout << letter[a] << letter[b] << letter[c] << endl;
    }

    return 0;
}