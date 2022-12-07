#include <bits/stdc++.h>

using namespace std;

const int max_n = 104;
int dy[4] = {1, -1, 0 ,0};
int dx[4] = {0, 0, -1, 1};
int maze[max_n][max_n], visited[max_n][max_n];
int h, ret, cnt, ny, nx, num;

void dfs(int y, int x, int h){
	visited[y][x] = 1;
	for(int i=0; i<4; i++){
		ny = y + dy[i];
		nx = x + dx[i];
		if(ny < 0 || nx < 0 || ny >= num || nx >= num) continue;
		if(maze[ny][nx] > h && !visited[ny][nx]) dfs(ny, nx, h);
	}
	
	return;
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
	cin >> num;
	
	for(int i = 0; i<num; i++){
		for(int j = 0; j<num; j++){
			cin >> maze[i][j];
			h = max(h, maze[i][j]);
		}
	}
	

	cnt = 1;
	for(int k = 0; k < h; k++){
		memset(visited, 0, sizeof(visited));
		ret = 0;
		for(int i = 0; i<num; i++){
			for(int j = 0; j<num; j++){
				if(maze[i][j] > k && !visited[i][j]){
					ret++;
					dfs(i, j, k);
				}
			}	
		}
		cnt = max(ret, cnt);
	}
	
	cout << cnt;
	
	return 0;
    
}