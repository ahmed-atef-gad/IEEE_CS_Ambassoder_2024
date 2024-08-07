#include <bits/stdc++.h>

using namespace std;

int findUnfortunateSum(const vector<int>& banknotes) {
    if (find(banknotes.begin(), banknotes.end(), 1) != banknotes.end()) {
        return -1;
    }

    vector<int> sorted_notes = banknotes;
    sort(sorted_notes.begin(), sorted_notes.end());

    const int max_sum = 1000000;
    vector<bool> can_be_reached(max_sum + 1, false);
    can_be_reached[0] = true;

    for (int i = 0; i < sorted_notes.size(); ++i) {
        for (int j = sorted_notes[i]; j <= max_sum; ++j) {
            if (can_be_reached[j - sorted_notes[i]]) {
                can_be_reached[j] = true;
            }
        }
    }

    for (int i = 1; i <= max_sum; ++i) {
        if (!can_be_reached[i]) {
            return i;
        }
    }

    return -1;
}

int main() {
    int n;
    cin >> n;

    vector<int> banknotes(n);
    for (int i = 0; i < n; ++i) {
        cin >> banknotes[i];
    }

    cout << findUnfortunateSum(banknotes) << endl;

    return 0;
}