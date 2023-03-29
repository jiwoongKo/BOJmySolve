#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

#define MAX 1500001

int n;
int t[MAX], p[MAX];
int dp[MAX];

int main(){
    fastio;

    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> t[i] >> p[i];
    }
    for(int i=n; i>=1; i--){
        if(i + t[i] >n+1){
            dp[i] = dp[i+1];
        } else{
            dp[i] = max(dp[i+1], p[i]+dp[i+t[i]]);
        }
    }
    cout << dp[1] << "\n";

    return 0;
}
