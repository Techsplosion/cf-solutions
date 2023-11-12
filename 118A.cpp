#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t; cin >> s;
    for (int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
    }
    for (auto c : s) {
        if (c != 'a' &&
            c != 'e' &&
            c != 'i' &&
            c != 'o' &&
            c != 'u' &&
            c != 'y') { t += '.'; t += c; };
    }
    cout << t;
    return 0;
}