#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, faces = 0; cin >> n;

    for (int i = 0; i < n; i++) {
        string s; cin >> s; char initial = s[0];

        switch (initial) {
            case 'T':
                faces += 4;
                break;
            case 'C':
                faces += 6;
                break;
            case 'O':
                faces += 8;
                break;
            case 'D':
                faces += 12;
                break;
            case 'I':
                faces += 20;
                break;
        }
    }

    cout << faces << endl;
}
