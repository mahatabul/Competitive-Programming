#include<iostream>

using namespace std;

bool is_disliked(int n) {
    return n % 3 == 0 || n % 10 == 3;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        int count = 0;
        int num = 1;
        while (true) {
            if (!is_disliked(num)) {
                count++;
            }
            if (count == k) {
                cout << num << endl;
                break;
            }
            num++;
        }
    }
    return 0;
}
