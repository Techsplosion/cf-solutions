#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, a, b;
    cin >> t;
    
    while (t--) {
        cin >> a >> b;
        cout << max(4 * min(a, b) * min(a, b), max(a, b) * max(a, b)) << endl;
    }
}
