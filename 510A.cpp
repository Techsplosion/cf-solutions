#include <bits/stdc++.h>
using namespace std;

int main() {
    int row, col; bool right_side = true; cin >> row >> col;
    for (int i = 0; i < row; i++) {
        if (!(i % 2)) cout << string(col, '#') << endl;
        else if (right_side) {
            cout << string(col - 1, '.') + "#" << endl; right_side = !right_side;
        } else {
            cout << "#" + string(col - 1, '.') << endl; right_side = !right_side;
        }
    }
}
