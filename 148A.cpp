#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int k, l, m, n, d, damaged;
    cin >> k >> l >> m >> n >> d;

    for (int i = 1; i <= d; i++) {
        if (!(i % k && i % l && i % m && i % n)) damaged++;
    }

    cout << damaged << endl;
}
