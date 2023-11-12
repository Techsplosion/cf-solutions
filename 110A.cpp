#include <iostream>
#include <vector>
#include <algorithm>

typedef long long int int_;
using namespace std;

vector<int> digits(int_ n) {
    vector<int> v;
    if (n == 0) v.push_back(0);
    while (n > 0) {
        v.push_back(n % 10);
        n /= 10;
    }
    reverse(v.begin(), v.end());
    return v;
}

bool isLucky(int_ n) {
    for (int digit : digits(n)) if (!(digit == 4 || digit == 7)) return false;
    return true;
}

int luckyDigitCount(int_ n) {
    int c;
    for (int digit : digits(n)) if (digit == 4 || digit == 7) c++;
    return c;
}

bool isNearlyLucky(int_ n) {
    return isLucky(luckyDigitCount(n));
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int_ n;
    cin >> n;
    cout << (isNearlyLucky(n) ? "YES" : "NO") << endl;
}
