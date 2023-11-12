#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, h, h_i, w;
    cin >> n >> h;
    
    for (int i = 0; i < n; i++) {
        cin >> h_i;
        w += 1 + (int)(h_i > h);
    }

    cout << w << endl;
}
