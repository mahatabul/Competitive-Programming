#include <iostream>
using namespace std;

int main() {
    int s, n;
    cin >> s >> n;
    int arr[1000][2];

    for (int i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i][0] > arr[j][0]) {
                swap(arr[i][0], arr[j][0]);
                swap(arr[i][1], arr[j][1]);
            }
        }
    }

    bool flag = true;
    for (int i = 0; i < n; i++) {
        if (s > arr[i][0]) {
            s += arr[i][1];
        } else {
            flag = false;
            break;
        }
    }

    if (flag) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}