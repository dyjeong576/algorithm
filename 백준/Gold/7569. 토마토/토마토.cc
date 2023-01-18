#include <bits/stdc++.h>
using namespace std;

int a[104][104][104];
int visited[104][104][104];
int dy[] = {-1,1,0,0,0,0};
int dx[] = {0,0,-1,1,0,0};
int dz[] = {0,0,0,0,-1,1};
int m, n, h, x, y, z, result;

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> m >> n >> h;
    
    queue<vector<int>> q;
    for(int k=0; k<h; k++){
    	for(int i=0; i<n; i++){
    		for(int j=0; j<m; j++){
    			cin >> a[k][i][j];
    			if(a[k][i][j] == 1){
    				q.push({k, i, j});
    				visited[k][i][j] = 1;
				}
				else if(a[k][i][j] == -1) visited[k][i][j] = 1;
			}
		}
	}
	
	while(q.size()){
		vector<int> tmp;
		tmp = q.front(); q.pop();
		z = tmp[0]; y = tmp[1]; x = tmp[2];
		for(int i=0; i<6; i++){
			int nz = z + dz[i];
			int ny = y + dy[i];
			int nx = x + dx[i];
			if(ny <0 || nx <0 || nz< 0 || nz >= h || ny >= n || nx >=m) continue;
			if(a[nz][ny][nx] == 0 && visited[nz][ny][nx] == 0){
				visited[nz][ny][nx] = visited[z][y][x] + 1;
				q.push({nz, ny, nx});
			}
		}
	}
	
	for(int k =0; k<h; k++){
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				result = max(result, visited[k][i][j]);
				if(visited[k][i][j] == 0){
					cout << -1 << endl;
					return 0;
				}
			}
		}	
	}
		
	cout << --result << endl;
    
    return 0;
}