#include <iostream>
using namespace std;

int power_of_5_mod_n(long long n) {
    int result = 1;
    int base = 5;
    int mod = 100;  // To keep only the last two digits
    
    while (n > 0) {
        if (n % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        n /= 2;
    }
    
    return result;
}

int main() {
    long long n;
    cin >> n;
    
    int last_two_digits = power_of_5_mod_n(n); 
    
    // Printing the result without spaces between the digits
    if (last_two_digits < 10) {
        cout << "0";
    }
    cout << last_two_digits << endl;
    
    return 0;
}
