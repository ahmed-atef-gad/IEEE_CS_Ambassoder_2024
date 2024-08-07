#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    long long totalSum = 0;
    int smallestOdd = 1000000001;

    for (int i = 0; i < n; ++i) {
        totalSum += numbers[i];
        if (numbers[i] % 2 != 0) {
            smallestOdd = min(smallestOdd, numbers[i]);
        }
    }

    if (totalSum % 2 == 0) {
        cout << totalSum << endl;
    } else {
        cout << totalSum - smallestOdd << endl;
    }

    return 0;
}