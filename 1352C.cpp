#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int k, n;
        cin >> n >> k;
        cout << k + (k - 1) / (n - 1) << endl;
    }
}
