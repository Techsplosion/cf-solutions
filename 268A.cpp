#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, c = 0; cin >> n;
    vector<int> home(n), guest(n);

    for (int i = 0; i < n; i++) {
        cin >> home[i] >> guest[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (home[i] == guest[j]) c++;
        }
    }

    cout << c << endl;
}
