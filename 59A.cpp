#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, f;
    int lower = 0, upper = 0;
    cin >> s;
    for (char c : s) {
        if ('a' <= c && c < 'z' + 1) {
            lower++;
        }

        if ('A' <= c && c < 'Z' + 1) {
            upper++;
        }
    }
    if (upper > lower) for (auto c : s) f += toupper(c);
    else for (auto c : s) f += tolower(c);
    cout << f << endl;
}
