#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int a[101] = {0,};
    while (m--){
        int i, j, k;
        cin >> i >> j >> k;
        
        for(int b =i; b<=j; b++){
            a[b] = k;
        }
    }
    for(int b=1; b<=n; b++){
        cout << a[b] << " ";
    }
    
}
