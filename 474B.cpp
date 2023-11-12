#include <bits/stdc++.h>
#define pb push_back
#define fi first
#define se second
#define in_range(x, r) r.fi <= x && x <= r.se
using namespace std;

typedef pair<int, int> rng; // range
typedef vector<rng> vr;
typedef vector<int> vi;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, m;
    vr ranges;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a_i;
        cin >> a_i;
        if (!i) ranges.pb(make_pair(1, a_i));
        else ranges.pb(make_pair(ranges[i - 1].se + 1, ranges[i - 1].se + a_i));
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        int q_i, range_found;
        cin >> q_i;
        for (int j = 0; j < n; j++) {
            if (in_range(q_i, ranges[j])) range_found = j + 1;
        }
        cout << range_found << endl;
    }
}
