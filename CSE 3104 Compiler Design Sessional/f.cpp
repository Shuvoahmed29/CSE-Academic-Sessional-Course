#include <bits/stdc++.h>
using namespace std;

void code() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

#define int long long

const int MAXN = 2e5 + 5;
vector<int> BIT(MAXN);

void update(int idx, int val) {
    for (; idx < MAXN; idx += (idx & -idx)) {
        BIT[idx] += val;
    }
}

int query(int idx) {
    int sum = 0;
    for (; idx > 0; idx -= (idx & -idx)) {
        sum += BIT[idx];
    }
    return sum;
}

int32_t main() {
    //code();
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;

        vector<pair<int, int>> intervals(n);
        vector<int> compressed;

        for (int i = 0; i < n; i++) {
            cin >> intervals[i].first >> intervals[i].second;
            compressed.push_back(intervals[i].first);
            compressed.push_back(intervals[i].second);
        }

        sort(compressed.begin(), compressed.end());
        compressed.resize(unique(compressed.begin(), compressed.end()) - compressed.begin());

        for (int i = 0; i < n; i++) {
            intervals[i].first = lower_bound(compressed.begin(), compressed.end(), intervals[i].first) - compressed.begin() + 1;
            intervals[i].second = lower_bound(compressed.begin(), compressed.end(), intervals[i].second) - compressed.begin() + 1;
        }

        sort(intervals.begin(), intervals.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
            return a.second < b.second;
        });

        fill(BIT.begin(), BIT.end(), 0);
        int count = 0;
        for (int i = 0; i < n; i++) {
            count += i - query(intervals[i].first);
            update(intervals[i].first, 1);
        }
        cout << count << endl;
    }
    return 0;
}
