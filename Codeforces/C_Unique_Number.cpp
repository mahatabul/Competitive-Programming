#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
bool binarysearch(vector<int> &a, int s, int e, int k) {
    if (s > e) return false;
    int mid = s + (e - s) / 2;
    if (a[mid] == k) {
        return true;
    }
    if (a[mid] > k) {
        return binarysearch(a, s, mid - 1, k);
    }
    else {
        return binarysearch(a, mid + 1, e, k);
    }
}

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n <= 9) {
            cout << n << endl;
        } else if (n > 45) {
            cout << -1 << endl;
        } else {
            vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9};
            deque<int> result;

            int sum = 0;
            for (int i = 9; i >= 1; --i) {
                if (sum + i <= n) {
                    result.push_front(i);
                    sum += i;
                }
            }

            for (auto i : result) {
                cout << i;
            }
            cout << endl;
        }
    }

    return 0;
}
