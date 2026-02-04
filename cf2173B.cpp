#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        long long low = 0, high = 0;

        for (int i = 0; i < n; i++) {
            long long nl = min(low - a[i], b[i] - high);
            long long nh = max(high - a[i], b[i] - low);
            low = nl;
            high = nh;
        }

        cout << high << '\n';
    }
}

