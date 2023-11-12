#include <bits/stdc++.h>
// #define notis
using namespace std;

#ifdef notis
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, input, status;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> input;
        status |= input;
    }

    cout << (status ? "HARD" : "EASY") << endl;
}
#else
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, input, status;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> input;
        if (input) {
            cout << "HARD" << endl;
            return 0;
        }
    }

    cout << "EASY" << endl;
}
#endif
