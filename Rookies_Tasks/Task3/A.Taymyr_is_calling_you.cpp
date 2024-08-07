#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

int main() {
    int n, m, z;
    cin >> n >> m >> z;
    
    int lcm_nm = lcm(n, m);
    int result = z / lcm_nm;
    
    cout << result << endl;
    
    return 0;
}
