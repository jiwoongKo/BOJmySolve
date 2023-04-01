#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int n;
int house[1001][3] = {0,}; // 0: red , 1: green, 2:blue
int rgb[1001][3] = {0,}; 

int main(){
    fastio;
    
    cin >> n;
    for(int i=1; i<= n; ++i){
        cin >> house[i][0] >> house[i][1] >> house[i][2];
    }

    for(int i=1; i <=n; ++i){
        rgb[i][0] = min(rgb[i-1][1], rgb[i-1][2]) + house[i][0];
        rgb[i][1] = min(rgb[i-1][0], rgb[i-1][2]) + house[i][1];
        rgb[i][2] = min(rgb[i-1][0], rgb[i-1][1]) + house[i][2];
    }
    cout << min(rgb[n][0], min(rgb[n][1], rgb[n][2]) ) << "\n";
    return 0;
    
    
    

}
