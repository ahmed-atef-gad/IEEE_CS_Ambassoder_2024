#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    if (n == 1) {
        if (a[0] == 0) {
            cout << "UP" << endl;
        } else if (a[0] == 15) {
            cout << "DOWN" << endl;
        } else {
            cout << -1 << endl;
        }
    } else {
        int last = a[n - 1];
        int second_last = a[n - 2];

        if (last == 0) {
            cout << "UP" << endl;
        } else if (last == 15) {
            cout << "DOWN" << endl;
        } else {
            if (last > second_last) {
                cout << "UP" << endl;
            } else {
                cout << "DOWN" << endl;
            }
        }
    }

    return 0;
}