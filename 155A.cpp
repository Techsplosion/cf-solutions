#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, amazing = 0, score;
    cin >> n;
    vector<int> scores;

    for (int i = 0; i < n; i++) {
        cin >> score;
        if (scores.size() > 0) {
            amazing += (int)(score > *max_element(scores.begin(), scores.end()) || score < *min_element(scores.begin(), scores.end()));
        }
        scores.push_back(score);
    }

    cout << amazing;
}
