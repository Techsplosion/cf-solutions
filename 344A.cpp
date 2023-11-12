#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, groups = 0;
    string prev, curr;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> curr;
        if (i == 0 || curr[0] == prev[1]) groups++;
        prev = curr;
    }

    cout << groups << endl;
}
