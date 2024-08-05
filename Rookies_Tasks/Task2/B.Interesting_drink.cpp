#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q;

    cin >> n;

    vector<int> prices(n);
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }

    sort(prices.begin(), prices.end());

    cin >> q;

    for (int i = 0; i < q; ++i) {
        int mi;
        cin >> mi;

        int count = upper_bound(prices.begin(), prices.end(), mi) - prices.begin();

        cout << count << endl;
    }

    return 0;
}