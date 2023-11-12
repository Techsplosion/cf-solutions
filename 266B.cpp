#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, t;
    string s;
    cin >> n >> t >> s;

    vector<int> boy_pos;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'B') {
            boy_pos.push_back(i);
        }
    }

    for (int i = 0; i < t; i++) {
        for (int j = 0; j < boy_pos.size(); j++) {
            if (boy_pos[j] < n - 1 && s[boy_pos[j] + 1] == 'G') {
                swap(s[boy_pos[j]], s[boy_pos[j] + 1]);
                boy_pos[j]++;
            }
        }
    }

    cout << s << endl;
}
