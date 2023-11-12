#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int> s(4);
        for (int i = 0; i < 4; i++) cin >> s[i];
        vector<int> sorted(s);
        sort(sorted.begin(), sorted.end());
        int w1 = max(s[0], s[1]), w2 = max(s[2], s[3]);
        if ((w1 == sorted[2] && w2 == sorted[3]) || (w1 == sorted[3] && w2 == sorted[2])) cout << "YES" << endl; else cout << "NO" << endl;
    }
}
