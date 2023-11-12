#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    set<int> levels;
    int n, p, q, l;
    cin >> n;
    cin >> p;

    for (int i = 0; i < p; i++) {
        cin >> l;
        levels.insert(l);
    }
    
    cin >> q;

    for (int i = 0; i < q; i++) {
        cin >> l;
        levels.insert(l);
    }

    cout << (size(levels) == n ? "I become the guy." : "Oh, my keyboard!") << endl; 
}  
