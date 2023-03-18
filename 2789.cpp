#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    cin >> a;
    b = "CAMBRIDGE";
    for(int i=0; i<a.length(); i++){
        for(int j=0; j<b.length(); j++){
            if (a[i] == b[j]) a[i] = 0;
        }
    }
    for(int i=0; i<a.length(); i++){
        if (a[i] != 0) cout << a[i];
    }
}
