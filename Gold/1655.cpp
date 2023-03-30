#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

priority_queue<int, vector<int>, less<int>> max_q; /* 최대 힙 */
priority_queue<int, vector<int>, greater<int>> min_q; /* 최소 힙 */

int main(){
    fastio;
    int n; cin >> n;
    
    while(n--){
        int x; cin >> x;
        if(max_q.size() == min_q.size()){
            max_q.push(x);
        } else {
            min_q.push(x);
        }
        if (max_q.size() !=0 && min_q.size() != 0 && (max_q.top() > min_q.top()) ){
            int max = max_q.top();
            int min = min_q.top();
            max_q.pop();
            min_q.pop();
            max_q.push(min);
            min_q.push(max);
        }
        cout << max_q.top() << "\n";
    }
    return 0;
}
