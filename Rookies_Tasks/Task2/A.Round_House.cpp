#include <iostream>
using namespace std;

int normalize_by(int base, int num) {
    if (base >= num && num > 0)
        return num;

    if (num <= 0) {
        num += base;
        return normalize_by(base, num);
    } else { 
        num -= base;
        return normalize_by(base, num);
    }
}

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    cout << normalize_by(n, a + b) << endl;

    return 0;
}