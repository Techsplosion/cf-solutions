#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string s1, s2;
    
    cin >> s1 >> s2;

    for (int i = 0; i < s1.size(); i++) {
        cout << (char)((int)(s1[i] != s2[i]) + 48);
    }

    cout << endl;
}
