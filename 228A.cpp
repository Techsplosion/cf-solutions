#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int s_i, count = 0;
    unordered_map<int, int> shoe_count;
    for (int i = 0; i < 4; i++) {
        cin >> s_i;
        count += shoe_count[s_i] > 0;
        shoe_count[s_i] += 1;
    }

    cout << count << endl;
}
