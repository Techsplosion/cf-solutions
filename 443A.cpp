#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string s;
    set<char> letters;

    getline(cin, s);

    for (auto c : s) {
        switch (c) {
            case '{':
                break;
            case ',':
                break;
            case ' ':
                break;
            case '}':
                break;
            default:
                letters.insert(c);
                break;
        }
    }

    cout << letters.size() << endl;
}
