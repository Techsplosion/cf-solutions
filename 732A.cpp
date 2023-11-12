#include <bits/stdc++.h>
using namespace std;

typedef long long lo;

int main() {
    lo k, r, n;
    cin >> k >> r;
    int kd = k % 10;
    int ki = kd;

    while (kd != r && kd != 0) {
        kd += ki;
        kd %= 10;
        n++;
    }

    cout << n + 1;
}
