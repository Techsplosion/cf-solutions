#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    int h = n / 100, tw = (n % 100) / 20, te = ((n % 100) % 20) / 10, f = (((n % 100) % 20) % 10) / 5, o = (((n % 100) % 20) % 10) % 5;

    cout << h + tw + te + f + o << endl; 
}
