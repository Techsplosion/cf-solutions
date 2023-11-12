#include <iostream>
#include <vector>
#define pb push_back
using std::cout, std::cin, std::vector, std::ios_base, std::endl;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> input(n), odd, even;
    for (int i = 0; i < n; i++) {
        cin >> input[i];
        if (input[i] % 2) odd.pb(i + 1);
        else even.pb(i + 1);
    }
    if (odd.size() == 1) cout << odd[0] << endl;
    else cout << even[0] << endl;
}
