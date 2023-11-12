#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, a, b, c, n;
    cin >> t;

    while (t--) {
        cin >> a >> b >> c >> n;
        int max_m = max(max(a, b), c);
        int need_m = 3 * max_m - a - b - c;
        cout << ((n - need_m) % 3 == 0 && n >= need_m ? "YES" : "NO") << endl;
    }
    
    return 0;
}
