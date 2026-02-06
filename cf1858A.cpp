#include <bits/stdc++.h>
using namespace std;

string helper(long long anna, long long katie, long long extra) {
    long long annaMoves = anna + (extra + 1) / 2; // Anna starts
    long long katieMoves = katie + extra / 2;

    if (annaMoves > katieMoves) return "First";
    return "Second";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long anna, katie, extra;
        cin >> anna >> katie >> extra;
        cout << helper(anna, katie, extra) << '\n';
    }

    return 0;
}

