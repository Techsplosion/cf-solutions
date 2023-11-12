#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int sx, sy, sz, x, y, z;
    for (int i = 0; i < n; i++) {
        cin >> x >> y >> z;
        sx += x;
        sy += y;
        sz += z;
    }

    cout << (sx == 0 && sy == 0 && sz == 0 ? "YES" : "NO") << endl;
}
