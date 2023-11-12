#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    string s; cin >> s;
    if (n < 26) { cout << "NO" << endl; return 0; }
    set<char> c;
    for (int i = 0; i < n; i++) c.insert(tolower(s[i]));
    cout << (c.size() == 26 ? "YES" : "NO") << endl;
}
