#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    set<char> letters;

    for (char c : s) {
        letters.insert(tolower(c));
    }

    if (letters.size() == 26) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}