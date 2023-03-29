#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

#define ll long long



int main(){
    fastio; 

    string s, res; cin >> s;
	
    stack<char> S;
	
    
    for (int i = 0; i < s.size(); i++) {
		if ('A' <= s[i] && s[i] <= 'Z') {
			res += s[i];
		}
		else {
			switch (s[i]) {
			case '(':
				S.push(s[i]);
				break;
			case '*':
			case '/':
				while (!S.empty() && (S.top() == '*' || S.top() == '/')) {
					res += S.top();
					S.pop();
				}
				S.push(s[i]);
				break;
			case '+':
			case '-':
				while (!S.empty() && S.top() != '(') {
					res += S.top();
					S.pop();
				}
				S.push(s[i]);
				break;
			case ')':
				while (!S.empty() && S.top() != '(') {
					res += S.top();
					S.pop();
				}
				S.pop();
				break;
			}
		}
	}
    
	while (!S.empty()) {
		res += S.top();
		S.pop();
	}
	cout << res << '\n';

    return 0;





}
