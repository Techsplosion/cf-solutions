#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t; cin >> s >> t;
    for (int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
        t[i] = tolower(t[i]);
    }
    if (s < t) cout << -1;
    if (s == t) cout << 0;
    if (s > t) cout << 1;
    return 0;
}
