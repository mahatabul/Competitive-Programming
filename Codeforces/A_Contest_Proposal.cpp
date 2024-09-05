#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        cin >> n; // Number of problems

        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i]; // Initial difficulty of problems
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i]; // Expected difficulty of problems
        }

        int count = 0; // Number of new problems proposed

        int left = 0, right = 0; // Two pointers

        while (left < n && right < n) {
            if (a[right] <= b[right]) {
                // If difficulty is already acceptable, move both pointers
                ++left;
                ++right;
            } else {
                // Propose a new problem with difficulty w = b[right] + 1
                int w = b[right] + 1;
                a.push_back(w);
                sort(a.begin(), a.end()); // Sort in non-decreasing order
                ++count;
                // Increment right pointer only
                ++right;
            }
        }

        cout << count << endl;
    }

    return 0;
}
