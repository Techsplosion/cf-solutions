#include <bits/stdc++.h>
using namespace std;

typedef long long lo;

int main() {
    lo n;
    cin >> n;
    cout << (n / 2) * (n / 2 + 1) - ((n + 1) / 2) * ((n + 1) / 2);
}