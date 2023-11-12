#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, p_i, sum;

    cin >> n;

    int n_ = n;

    while (n_--) {
        cin >> p_i;
        sum += p_i;
    }

    cout << (double)sum / n << endl;
}
