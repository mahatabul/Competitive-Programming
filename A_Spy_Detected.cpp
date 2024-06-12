#include<iostream>
#include<vector>
using namespace std;

int main(){
    long int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> spyarray(n);

        for (int i = 0; i < n; i++)
            cin >> spyarray[i];

        int blockcount[101] = {0}; // Initialize blockcount array with size 101
        
        for (int i = 0; i < n; i++)
            blockcount[spyarray[i]]++;

        for (int i = 1; i <= 100; i++) {
            if (blockcount[i] == 1) {
                for (int j = 0; j < n; j++) {
                    if (spyarray[j] == i) {
                        cout << j + 1 << endl;
                        break;
                    }
                }
                break;
            }
        }
    }
    return 0;
}
