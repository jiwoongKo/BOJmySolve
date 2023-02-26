#include<bits/stdc++.h>
using namespace std;

int a[1001][1001];
int dx[] = {0, -1, 0, 1};
int dy[] = {-1, 0, 1, 0};
int d[1001][1001]; /* 토마토 익은 날짜 기록 */

int main(){
    int m, n; /* m 가로, n 세로 */
    cin >> m >> n;
    queue<pair<int, int>> q;
    for (int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
            d[i][j] = -1; /* 방문 안한 토마토 */
            if (a[i][j] == 1){
                q.push(make_pair(i,j)); /* 익은 토마토 있으면 큐에 삽입 */
                d[i][j] = 0; /* 원래 익은 토마토 0 처리 */
            }
        }
    }

    while (!q.empty()){
        int x = q.front().first; /* 첫번째 들어간 익은 토마토 x 좌표 */
        int y = q.front().second; /* 첫번째 들어간 익은 토마토 y 좌표 */
        q.pop();
        for(int i=0; i<4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx >=0 && nx < n && ny >=0 && ny <m){
                if (a[nx][ny] == 0 && d[nx][ny] == -1){
                    d[nx][ny] = d[x][y] + 1; /* 날짜 더하기 */
                    q.push(make_pair(nx,ny));
                }
            }
        }
    }
    
    int result =0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            result = max(result, d[i][j]); /* 토마토 익는 최소 날짜 day 하나씩 비교하면서 기록 */
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j] == 0 && d[i][j] == -1) {/* 안익고 방문 안되었으면 -1 */
                result = -1;
            }
        }
    }
    cout << result;
    
}
