#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    long long fin = 0, mul = 1;
    string x;
    cin >> x;
    reverse(x.begin(), x.end());
    int i = 0;
    for (char c : x) {
        if (i == x.size() - 1 && c - 48 == 9) fin += 9 * mul;
        else if (c - 48 > 4) fin += mul * (9 - c + 48);
        else fin += mul * (c - 48);
        mul *= 10; i++;
    }
    cout << fin << endl;
}
