#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n, a; // a here represents the i-th input
    unordered_map<int, int> present_to;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> a;
        present_to[a] = i; 
    }

    for (int i = 1; i <= n; i++) {
        cout << present_to[i] << ' ';
    }
}
