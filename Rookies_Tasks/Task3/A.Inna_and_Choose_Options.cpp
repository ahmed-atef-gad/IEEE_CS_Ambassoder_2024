#include <bits/stdc++.h>

using namespace std;

bool isWinningConfiguration(const string &cards, int a, int b) {
    for (int col = 0; col < b; ++col) {
        bool allX = true;
        for (int row = 0; row < a; ++row) {
            if (cards[row * b + col] != 'X') {
                allX = false;
                break;
            }
        }
        if (allX) return true;
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    vector<pair<int, int>> configurations = { {1, 12}, {2, 6}, {3, 4}, {4, 3}, {6, 2}, {12, 1} };

    while (t--) {
        string cards;
        cin >> cards;

        vector<pair<int, int>> validConfigs;
        for (auto &[a, b] : configurations) {
            if (isWinningConfiguration(cards, a, b)) {
                validConfigs.push_back({a, b});
            }
        }

        cout << validConfigs.size();
        for (const auto &[a, b] : validConfigs) {
            cout << " " << a << "x" << b;
        }
        cout << endl;
    }

    return 0;
}