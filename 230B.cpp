#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
typedef long long lo;

bool isPrime(lo n) {
    if (n == 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (!(n % i)) return false;
    }
    return true;
}

bool isSquare(lo n) {
    return (lo)sqrt(n) * (lo)sqrt(n) == n;
}

bool isTPrime(lo n) {
    if (isSquare(n)) if (isPrime((lo)sqrt((double)n))) return true; return false;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n; lo v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v;
        cout << (isTPrime(v) ? "YES" : "NO") << endl;
    }
}
