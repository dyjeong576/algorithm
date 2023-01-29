#include <bits/stdc++.h>
using namespace std;

int n, m, y, x, ret, ans, k;
int maps[101][101], visited[101][101];
int dy[] = {-1,1,0,0};
int dx[] = {0,0,-1,1};

void dfs(int y, int x){
	visited[y][x] = 1;
	ret++;
	for(int i=0; i<4; i++){
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny < 0 || nx < 0 || ny >= n || nx >= m ) continue;
		if(visited[ny][nx] == 0 && maps[ny][nx] == 1) dfs(ny, nx);
	}
	
	return;
	
}

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> n >> m >> k;
    
    while(k--){
    	cin >> x >> y;
    	maps[x-1][y-1] = 1;
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(visited[i][j] == 0 && maps[i][j] == 1) {
				ret = 0;
				dfs(i, j);
				ans = max(ret, ans);
			}
		}
	}
	
	cout << ans << endl;
    
    return 0;
    
}