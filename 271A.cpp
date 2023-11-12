#include <bits/stdc++.h>
#define ASCII_DIGIT_SHIFT 0x30
#define B begin()
#define E end()
using namespace std;

bool all_digits_unique(int n) {
    string ns = to_string(n);
    for (int i = 0; i < ns.size(); i++){
        if (count(ns.B, ns.E, ns[i]) > 1) return false;
    } return true;
}


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int y; string out; cin >> y;
    y++;
    
    int i = 0;

    while (!all_digits_unique(y)) {
        y++;
    }

    cout << y << endl;
}
