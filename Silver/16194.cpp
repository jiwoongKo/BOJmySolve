#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    
    vector<int> value(n+1);
    vector<int> dp(n+1, 10001);
    
    for(int i=1; i<=n; i++){
        cin >> value[i];
    }
    dp[0] = 0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            dp[i] = min(dp[i], dp[i-j] + value[j]);
        }
    }
    cout << dp[n] << "\n";
}
