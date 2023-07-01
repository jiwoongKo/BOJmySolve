#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, v;
    cin >> a >> b >> v;
    
    int res = 0;
    int cnt = 0;
    
    res = (v-a)%(a-b);
    if(res == 0){
        cnt = (v-a)/(a-b);
    } else {
        cnt = ((v-a)/(a-b))+1;
    }
    
    cout << cnt+1 << "\n";
}
