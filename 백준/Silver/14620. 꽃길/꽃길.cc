#include<bits/stdc++.h>
using namespace std; 

int n, ret = 987654321, maps[11][11], visited[11][11], ny, nx;
int dy[] = {-1,1,0,0};
int dx[] = {0,0,-1,1};

int sets(int y, int x){
	visited[y][x] = 1;
	int s = maps[y][x];
	for(int i=0; i<4; i++){
		int ny = y + dy[i];
		int nx = x + dx[i];
		visited[ny][nx] = 1;
		s += maps[ny][nx];
	}
	
	return s;
	
}

void erased(int y, int x){
	visited[y][x] = 0;
	for(int i=0; i<4; i++){
		int ny = y + dy[i];
		int nx = x + dx[i];
		visited[ny][nx] = 0;
	}
	
	return;
	
}


bool check(int y, int x){
	if(visited[y][x]) return 0;
	for(int i=0; i<4; i++){
		ny = y + dy[i];
		nx = x + dx[i];
		if(ny < 0 || nx < 0 || ny >= n || nx >= n | visited[ny][nx]) return 0;
	}
	
	return 1;
	
}

void flower(int cnt, int sum){
	if(cnt == 3){
		ret = min(ret, sum); return;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(check(i, j)){
				flower(cnt+1, sum + sets(i, j));
				erased(i, j);
			}
		}
	} 
	
	return;
	
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	cin >> n;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> maps[i][j];
		}
	}
	flower(0,0);
	cout << ret;
    
    return 0;

}