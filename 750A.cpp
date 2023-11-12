#include <bits/stdc++.h>
using namespace std;

inline int sum(int start, int end, int delta) {
    int terms = ceil((end - start + 1) / (double)delta);
    return delta * ((terms * (terms + 1)) / 2 - terms) + terms * start;
}

int main() {
    int n, h, p;
    cin >> n >> h;
    for (int i = n; i >= 0; i--) {
        if (sum(5, 5 * i, 5) + h <= 240) { p = i; break; }
    }
    cout << p;
}
