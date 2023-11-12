#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s;
    cin >> s;
    int run = 0;
    bool read_char = false;
    char prev = '\n';

    for (char c : s) {
        if (!read_char) {
            read_char = true;
            run++;
        } else if (c == prev) run++; else run = 1;
        prev = c;
        if (run == 7) {
            cout << "YES" << endl; return 0;
        }
    }
    cout << "NO" << endl;
}
