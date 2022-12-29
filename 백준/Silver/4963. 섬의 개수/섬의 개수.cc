#include <bits/stdc++.h>
using namespace std;

int m, n, ret;
int maps[51][51];
int visited[51][51];
int dy[] = {0,-1,-1,-1,0,1,1,1};
int dx[] = {-1,-1,0,1,1,1,0,-1};
 

void dfs(int y, int x){
	visited[y][x] = 1;
	for(int i = 0; i<8; i++){
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny < 0 || nx < 0 || ny >= n || ny >=n) continue;
		if(maps[ny][nx] == 0 || visited[ny][nx]) continue;
		dfs(ny, nx);
	}
	
	return;
	
}

int main(){
	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL); 
    
    while(1){
    	ret = 0; 
    	memset(visited,0,sizeof(visited));
    	memset(maps,0,sizeof(maps));
    	cin >> m >> n;
    	if(m == 0 && n == 0)break;
    	for(int i = 0 ; i<n; i++){
    		for(int j = 0; j<m; j++){
    			cin >> maps[i][j];
			}
		}
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if(maps[i][j] == 1 && visited[i][j] == 0){
					dfs(i, j);
					ret++;
				}
			}
		}
		
		cout << ret << endl;
	}
 
	return 0;
    
}