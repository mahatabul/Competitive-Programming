#include<iostream>
#include<deque>

using namespace std;

int main() {
    int n;
    cin >> n;
    deque<int> q;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        q.push_back(a);
    }

    int Sereja_score = 0, Dima_score = 0;
    bool Sereja_turn = true;

    while (!q.empty()) {
        if (Sereja_turn) {
            if (q.front() > q.back()) {
                Sereja_score += q.front();
                q.pop_front();
            } else {
                Sereja_score += q.back();
                q.pop_back();
            }
        } else {
            if (q.front() > q.back()) {
                Dima_score += q.front();
                q.pop_front();
            } else {
                Dima_score += q.back();
                q.pop_back();
            }
        }
        Sereja_turn = !Sereja_turn;
    }

    cout << Sereja_score << " " << Dima_score << endl;
}
