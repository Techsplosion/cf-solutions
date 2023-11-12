#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int dp[4001];
 
void solve()
{
    int n; cin >> n;
    int a, b, c; cin >> a >> b >> c;
 
    for (int i = 0; i <= n; i++) {
        dp[i] = INT_MIN;
    }
 
    dp[0] = 0;
 
    for (int i = 1; i <= n; i++) {
        if (i - a >= 0) {
            dp[i] = max(dp[i], 1 + dp[i - a]);
        }
        if (i - b >= 0) {
            dp[i] = max(dp[i], 1 + dp[i - b]);
        }
        if (i - c >= 0) {
            dp[i] = max(dp[i], 1 + dp[i - c]);
        }
    }
    cout << dp[n] << endl;
 
}
 
main()
{
    solve();
    return 0;
}