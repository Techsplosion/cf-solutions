#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string src, translation;
    cin >> src >> translation;
    reverse(translation.begin(), translation.end());
    cout << (src == translation ? "YES" : "NO") << endl;
}
