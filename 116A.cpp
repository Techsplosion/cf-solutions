#include <bits/stdc++.h>
#define create_input(vn, vt) vt vn; cin >> vn
#define lf(n, s) for (int i = s; i < n + s; i++)
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    create_input(n, int);
    vector<int> pre_sum(n);

    lf(n, 0) {
        create_input(a, int); create_input(b, int);
        if (i == 0) pre_sum[0] = b - a;
        else pre_sum[i] = pre_sum[i - 1] + b - a;
    }

    cout << *max_element(pre_sum.begin(), pre_sum.end()) << endl;
}
