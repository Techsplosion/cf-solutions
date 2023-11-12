#include <bits/stdc++.h>
#define construct_map_vec(lbl, it, f, t) vector<t> lbl; for (auto e : it) { lbl.push_back(f(e)); }
using namespace std;

typedef long long lo;

char reverse_case_char(char c) {
    const auto uc = static_cast<unsigned char>(c);
    return isupper(uc)? tolower(uc): toupper(uc);
}

void reverse_case(std::string& str) {
    std::transform(str.begin(), str.end(), str.begin(), reverse_case_char);
}

int letter_case(char c) {
    if ('A' <= c && c <= 'Z') return 1;
    if ('a' <= c && c <= 'z') return 0;
    return -1;
}

int main() {
    string s; cin >> s;
    construct_map_vec(cases, s, letter_case, int)
    if (accumulate(cases.begin(), cases.end(), 0) == s.size() || (cases[0] == 0 && accumulate(cases.begin(), cases.end(), 0) == s.size() - 1)) {
        reverse_case(s);
    }
    cout << s;
}
