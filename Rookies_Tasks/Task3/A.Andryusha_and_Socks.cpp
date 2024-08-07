#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> socks(2 * n);
    for (int i = 0; i < 2 * n; ++i) {
        cin >> socks[i];
    }

    unordered_set<int> table;
    int max_socks_on_table = 0;

    for (int sock : socks) {
        if (table.count(sock)) {
            table.erase(sock);
        } else {
            table.insert(sock);
            max_socks_on_table = max(max_socks_on_table, (int)table.size());
        }
    }

    cout << max_socks_on_table << endl;

    return 0;
}