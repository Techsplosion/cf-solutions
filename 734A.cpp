#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    int n, anton, danik; char c;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> c;
        c == 'A' ? anton++ : danik++;
    }

    cout << (anton > danik ? "Anton" : (danik > anton ? "Danik" : "Friendship")) << endl;
}
