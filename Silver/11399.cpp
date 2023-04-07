#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int dp[1000];
    for(int i=0; i<n; i++){
        cin >> dp[i];
    }
    sort(dp, dp+n); // 오름차순
    
    int sum = 0;
    for(int i=0; i < n; i++){   // 정렬된 dp 배열의 합 구하기, 배열 첫번째는 n, 두번째는 n-1.. 더함
        for(int j=0; j<=i; j++){
            sum += dp[j];
        }
    }
    cout << sum << "\n";
}
