#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool is_prime(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    vector<long long> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    for (int i = 0; i < n; ++i) {
        long long num = nums[i];
        long long sqrt_num = sqrt(num);
        if (sqrt_num * sqrt_num == num && is_prime(sqrt_num)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}