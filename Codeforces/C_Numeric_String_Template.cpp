#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> temp(n);
        for (int i = 0; i < n; i++) {
            cin >> temp[i];
        }
        int m;
        cin >> m;

        while (m--) {
            string s;
            cin >> s;

            if (s.size() != n) {
                cout << "NO\n";
                continue;
            }

            unordered_map<char, int> char_to_value;
            unordered_map<int, char> value_to_char;
            bool valid = true;

            for (int i = 0; i < n; i++) {
                char c = s[i];
                int val = temp[i];

                if (char_to_value.find(c) == char_to_value.end()) {
                    char_to_value[c] = val;
                } else if (char_to_value[c] != val) {
                    valid = false;
                    break;
                }

                if (value_to_char.find(val) == value_to_char.end()) {
                    value_to_char[val] = c;
                } else if (value_to_char[val] != c) {
                    valid = false;
                    break;
                }
            }

            cout << (valid ? "YES\n" : "NO\n");
        }
    }

    return 0;
}
