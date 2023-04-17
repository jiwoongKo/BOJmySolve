#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int A[100001];

void binarySearch(int n, int key){
    int start = 0;
    int end = n-1;
    int mid = 0;

    while(end - start >=0){
        mid = (start + end) / 2;
        
        if(A[mid] == key){ /* 해당 값이 배열 중앙값과 일치시 */
            cout << "1" << "\n";
            return;
        } else if(A[mid] > key){ /* key 값이 배열의 중앙 값보다 작을 경우 (왼쪽 탐색) */
            end = mid - 1;
        } else { /* key 값이 배열의 중앙 값보다 크면 (오른쪽 탐색) */
            start = mid + 1; 
        }
    }
    cout << "0" << "\n"; /* 탐색 결과 값이 없었으면 0 */
    return;
}

int main()
{
    fastio;
    int n;
    cin >> n;

    for(int i =0; i<n; i++){
        cin >> A[i];
    }
    sort(A, A +n);    
    
    int m;
    int tmp;
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> tmp;
        binarySearch(n, tmp);
    }
    
    return 0;
}
