#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, k;
        cin >> n >> k;

        vector<int> ingredients(n);
        for (int i = 0; i < n; ++i) {
            cin >> ingredients[i];
        }

        unordered_set<int> outside;
        int fridgeOpens = 0;

        for (int i = 0; i < n; ++i) {
            if (outside.find(ingredients[i]) == outside.end()) {
                if (outside.size() == k) {
                    outside.erase(outside.begin());
                }
                outside.insert(ingredients[i]);
                fridgeOpens++;
            }
        }

        cout << fridgeOpens << endl;
    }

    return 0;
}