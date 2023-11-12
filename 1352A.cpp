#include <bits/stdc++.h>
#define vec_print(v, d) for (auto val : v) { cout << val << d; }
using namespace std;

typedef long long lo;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;

        int d = 0, nm = 0;

        vector<int> v;

        while (n > 0) {
            if (n % 10 > 0) { v.push_back((n % 10) * pow(10, d)); nm++; }
            n /= 10;
            d++;
        }

        cout << nm << '\n'; // i was hungry when i was writing this - Kıvanç Tok 18:01 8.11.2023
        vec_print(v, ' ')
        cout << '\n';
    }
}
