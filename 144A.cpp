#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, input, max_h = 0, min_h = 100, max_h_index, min_h_index; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> input;
        if (input > max_h) {
            max_h = input;
            max_h_index = i;
        }
        if (input <= min_h) {
            min_h = input;
            min_h_index = i;
        }
    }
    int t = (n - 1) - min_h_index + max_h_index - (int)(min_h_index < max_h_index);
    cout << t; 
}
