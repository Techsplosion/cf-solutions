#include <bits/stdc++.h>
using namespace std;

typedef long long lo;

int main() {
    int r, b; cin >> r >> b;
    int mx = max(r, b);
    int mn = min(r, b);
    cout << mn << ' ' << (mx - mn) / 2 << endl;
}
