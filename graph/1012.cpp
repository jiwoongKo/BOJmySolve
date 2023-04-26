#include <bits/stdc++.h>
using namespace std;

int n, k, d;
int dy[] = {0, -1, 1, 0};
int dx[] = {-1, 0, 0, 1};
bool board[51][51] = {0,};
bool visited[51][51] = {0,};



void dfs(int x, int y){
    visited[x][y] = true;
    for(int i=0; i<4; i++){
        int ax = x + dx[i];
        int ay = y + dy[i];
        
        if(ax <0 || ay <0 || ax>=n || ay>=k) continue;
        if(!board[ax][ay] || visited[ax][ay]) continue;
        
        dfs(ax, ay);
    }
    
}


int main()
{
    int t; cin >> t;
    
    while(t--){
        cin >> n >> k >> d;
        
        for(int i=0; i<d; i++){
            int x, y;
            cin >> x >> y;
            board[x][y] = true;
        }
        
        int cnt = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<k; j++){
                if(board[i][j] == 1 && !visited[i][j]){
                    cnt++;
                    dfs(i,j);
                }
            }
        }
        cout << cnt << "\n";
        
        memset(board, 0, sizeof(board));
        memset(visited, 0, sizeof(visited));
    }
}
