#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int cnt0 = 0, cnt1 = 0, cnt2 = 0;
        for (char c : s) {
            if (c == '0') cnt0++;
            else if (c == '1') cnt1++;
            else cnt2++;
        }

        // minimum and maximum removals possible
        int minTop = cnt0;
        int maxTop = cnt0 + cnt2;

        int minBottom = cnt1;
        int maxBottom = cnt1 + cnt2;

        // difference (extra top removals possible)
        int d = maxTop - minTop; // = cnt2

        string ans(n, '+');

        for (int i = 0; i < n; i++) {
            int pos = i + 1;

            // card removed if:
            // removed from top OR from bottom
            bool alwaysRemoved =
                (pos <= minTop) ||
                (pos > n - minBottom);

            bool canSurvive =
                !(pos <= maxTop) &&
                !(pos > n - maxBottom);

            if (alwaysRemoved)
                ans[i] = '-';
            else if (canSurvive)
                ans[i] = '+';
            else
                ans[i] = '?';
        }

        cout << ans << '\n';
    }

    return 0;
}

