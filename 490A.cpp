#include <bits/stdc++.h>
using namespace std;

typedef long long lo;

int main() {
    int n, p = 0, m = 0, s = 0; cin >> n; // p: prog, m: math, s: sport
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        switch (v[i]) {
            case 1:
                p++;
                break;
            
            case 2:
                m++;
                break;
            
            case 3:
                s++;
                break;
            
            default:
                break;
        }
    }

    int n_teams = min(min(p, m), s);
    cout << n_teams << '\n';
    for (int i = 0; i < n_teams; i++) {
        int prog = find(v.begin(), v.end(), 1) - v.begin();
        int math = find(v.begin(), v.end(), 2) - v.begin();
        int sport = find(v.begin(), v.end(), 3) - v.begin();

        cout << prog + 1 << ' ' << math + 1 << ' ' << sport + 1 << '\n';

        v[prog] = 0; v[math] = 0; v[sport] = 0;
    }
}
