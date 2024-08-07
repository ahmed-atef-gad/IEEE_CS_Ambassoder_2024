#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, r;
    cin >> k >> r;

    for (int i = 1; i <= 1000; ++i) {
        int total_price = i * k;
        if (total_price % 10 == 0 || total_price % 10 == r) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}