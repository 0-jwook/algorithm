#include <iostream>
#include <string>
using namespace std;
int board[501][501];
bool visited[501][501];
int n, m;
int anwser = 0;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

void dfs(int x, int y, int depth, int sum){
    if(depth == 4){
        anwser = max(anwser, sum);
        return;
    }
    
    for (int i = 0; i<4; i++) {
        int nx = x+dx[i];
        int ny = y+dy[i];
        
        if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
        if(visited[nx][ny])continue;
        
        visited[nx][ny] = true;
        dfs(nx, ny, depth + 1, sum+board[nx][ny]);
        visited[nx][ny] = false;
    }
}

void check_extra_shape(int x, int y){
    int center = board[x][y];
    for(int i = 0; i<4; i++){
        int temp_sum = center;
        bool flag = true;
        for(int j = 0; j<3; j++){
            int dir = (i+j)%4;
            int nx = x+dx[dir];
            int ny = y+dy[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m){
                flag = false;
                break;
            }
            temp_sum += board[nx][ny];
        }
        if (flag) anwser = max(anwser, temp_sum);
    }
}

int main(){
    cin >> n >> m;
    
    for(int i = 0; i<n;i++)
        for(int j = 0; j<m;j++)
            cin >> board[i][j];
    
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            visited[i][j] = true;
            dfs(i, j, 1, board[i][j]);
            visited[i][j] = false;
            check_extra_shape(i, j);        
        }
    }
    cout << anwser << endl;
}
