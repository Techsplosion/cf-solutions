#include <bits/stdc++.h>
using namespace std;

typedef long long lo;

int main() {
    vector<int> v(4);
    for (int i = 0; i < 4; i++) cin >> v[i];
    int mx = max_element(v.begin(), v.end()) - v.begin();
    for (int i = 0; i < 4; i++) if (i != mx) cout << v[mx] - v[i] << ' ';
}
