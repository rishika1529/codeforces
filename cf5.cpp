#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        long long sumA = 0, sumB = 0;
        long long maxA = 0, maxB = 0;

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            sumA += x;
            maxA = max(maxA, x);
        }

        for (int i = 0; i < m; i++) {
            long long x;
            cin >> x;
            sumB += x;
            maxB = max(maxB, x);
        }

        if (maxA >= maxB) {
            cout << "Alice\n";
        } else if (sumA > sumB) {
            cout << "Alice\n";
        } else {
            cout << "Bob\n";
        }
    }
    return 0;
}

