#include <bits/stdc++.h>

using namespace std;

bool hasDistinctDigits(int year) {
    string yearStr = to_string(year);
    set<char> digits;
    for (char digit : yearStr) {
        if (digits.count(digit)) {
            return false;
        }
        digits.insert(digit);
    }
    return true;
}

int main() {
    int y;
    cin >> y;

    while (true) {
        y++;
        if (hasDistinctDigits(y)) {
            cout << y << endl;
            break;
        }
    }

    return 0;
}
