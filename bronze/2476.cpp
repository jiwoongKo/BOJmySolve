#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int n; cin >> n;
    int maxi = -1;
    for(int i=1; i<=n; i++){
        int a, b, c; cin >> a >> b >> c;
        int tmp = 0;
        if(a== b && b== c){
            tmp = 10000 + 1000*a;
        } else if (a==b && b!=c){
            tmp = 1000 + 100*a;
        } else if (b==c && a!=c) {
            tmp = 1000 + 100*b;
        } else if (a==c && b!=c) {
            tmp = 1000 + 100*c;
        } else {
            int max_num = max(a, max(b, c));
            tmp = 100*max_num;
        }
        if(tmp > maxi){
            maxi = tmp;
        }
    }
    cout << maxi << "\n";
    
}
