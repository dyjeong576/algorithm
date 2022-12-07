#include <bits/stdc++.h>

using namespace std;

const int max_n = 54;
int dy[4] = {1, -1, 0 ,0};
int dx[4] = {0, 0, -1, 1};
int maze[max_n][max_n], visited[max_n][max_n];
int num, n, m, cnum, a, b, ret, ny, nx;

void dfs(int y, int x){
	visited[y][x] = 1;
	for(int i = 0; i<4; i++){
		ny = y + dy[i];
		nx = x + dx[i];
		if(ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
		if(maze[ny][nx] == 1 && !visited[ny][nx]) {
			dfs(ny, nx);
		}
	}
	
	return;
	
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	
	cin >> num;
	
	while(num--){
		cin >> n >> m >> cnum;
		
		memset(maze, 0, sizeof(maze));
		memset(visited, 0, sizeof(visited));
		ret = 0;
		
		while(cnum--){
			cin >> a >> b;
			maze[a][b] = 1;
		}
		
		for(int i = 0; i<n; i++){
			for(int j = 0; j<m; j++){
				if(maze[i][j] == 1 && !visited[i][j]){
					ret++;
					dfs(i, j);
				}
			}
		}

		cout << ret << '\n';
		
	}
	
	return 0;
    
}