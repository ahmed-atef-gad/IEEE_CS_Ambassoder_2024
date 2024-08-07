#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> ratings(n);
    bool isRated = false;
    bool isOrdered = true;

    for (int i = 0; i < n; ++i) {
        cin >> ratings[i].first >> ratings[i].second;
        if (ratings[i].first != ratings[i].second) {
            isRated = true;
        }
        if (i > 0 && ratings[i].first > ratings[i - 1].first) {
            isOrdered = false;
        }
    }

    if (isRated) {
        cout << "rated" << endl;
    } else if (!isOrdered) {
        cout << "unrated" << endl;
    } else {
        cout << "maybe" << endl;
    }

    return 0;
}