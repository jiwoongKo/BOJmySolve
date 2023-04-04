#include <bits/stdc++.h>
using namespace std;

bool compare1(pair<int, string> a, pair<int, string> b) {
	return a.first > b.first;
}

int main()
{
    int n; cin >> n;
    while ( n--){
        int a; cin >> a;
        vector <pair<int, string>> v(a);
        int res =0 ;
        int i =0;
        int cmp = 0;
        while (a--){
            cin >> v[i].first >> v[i].second;
            if (v[i].first > cmp){
                cmp = v[i].first;
                res = i;
            }
            i += 1;
        }
        cout << v[res].second << "\n";
    }
    return 0;
}
