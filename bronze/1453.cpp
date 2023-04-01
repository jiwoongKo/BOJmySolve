#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int arr[101] = {0,};
    
    int cnt = 0;
    for(int i=1; i<=n; i++){
        int a; cin >> a;
        if(arr[a] == 0){
            arr[a] = 1;
        } else {
            cnt += 1;
        }
    }
    cout << cnt << "\n";
    

    return 0;
}
