#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int cost1 = n * a;

    int multi_tickets_needed = n / m;
    int remaining_rides = n % m;
    int cost2 = multi_tickets_needed * b + remaining_rides * a;

    int cost3 = (multi_tickets_needed + 1) * b;

    int min_cost = min({cost1, cost2, cost3});

    cout << min_cost << endl;

    return 0;
}
