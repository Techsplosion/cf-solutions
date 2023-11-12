#include <bits/stdc++.h>
#define testcase int t; cin >> t; while(t--)
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    testcase {
        int a, b;
        cin >> a >> b;

        cout << ((a % b) != 0) * (b - (a % b)) << endl;
    }
}
