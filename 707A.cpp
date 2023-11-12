#include <bits/stdc++.h>
using namespace std;

typedef long long lo;

int main() {
    int w, h, s = 0; char in; cin >> w >> h;
    
    for (int i = 0; i < w * h; i++) {
        cin >> in;
        s |= in == 'C' || in == 'M' || in == 'Y';
    }

    cout << (s ? "#Color" : "#Black&White");
}