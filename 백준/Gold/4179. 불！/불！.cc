#include<bits/stdc++.h>
using namespace std; 

int m, n, x, y, ny, nx;
int dy[] = {-1,1,0,0};
int dx[] = {0,0,-1,1};
char maze[1001][1001];
int jVisited[1001][1001], fVisited[1001][1001];
queue<pair<int, int>> fq, jq;
string s;

void f_bfs(){
	while(fq.size()){
		tie(y, x) = fq.front(); fq.pop();
		for(int i=0; i<4; i++){
			ny = y + dy[i];
			nx = x + dx[i];
			if(ny < 0 || nx < 0 || ny >= m || nx >= n) continue;
			if(maze[ny][nx] == '#' || fVisited[ny][nx]) continue;
			fq.push({ny, nx});
			fVisited[ny][nx] = fVisited[y][x] + 1;
		}
	}
}

int j_bfs(){
	
	while(jq.size()){
		tie(y, x) = jq.front(); jq.pop();
		for(int i=0; i<4; i++){
			ny = y + dy[i];
			nx = x + dx[i];
			if(ny < 0 || nx < 0 || ny >=m || nx >=n) return jVisited[y][x];
			if(maze[ny][nx] == '#' || jVisited[ny][nx]) continue;
			if(fVisited[ny][nx] && jVisited[y][x] + 1 >= fVisited[ny][nx]) continue; 
			jq.push({ny, nx});
			jVisited[ny][nx] = jVisited[y][x] + 1;
		}
	}
	
	return -1;
	
}

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0); 
	
	cin >> m >> n;
	
	for(int i=0; i<m; i++){
		cin >> s;
		for(int j=0; j<n; j++){
			maze[i][j] = s[j];
			if(maze[i][j] == 'F') {
				fq.push({i, j}); fVisited[i][j] = 1;
			}
			if(maze[i][j] == 'J'){
				jq.push({i, j}); jVisited[i][j] = 1;
			}
		}
	}
	
	f_bfs();
	int answer = j_bfs();
	if(answer == -1) cout << "IMPOSSIBLE" << endl;
	else cout << answer << endl;
	
	return 0;
	
}