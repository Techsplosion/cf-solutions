#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, p_i, q_i, c;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> p_i >> q_i;
        c += q_i - p_i > 1;
    }
    
    cout << c;
}
