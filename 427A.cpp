#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, recruits = 0, untreated = 0, input;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> input;
        if (input < 0) {
            if (recruits > 0) recruits--;
            else untreated++;
        } else recruits += input;
    }
    cout << untreated << endl;
}
