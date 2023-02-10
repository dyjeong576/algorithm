#include <bits/stdc++.h>
using namespace std;

char a[13][7];
int visited[13][7];
int ny, nx, ret;
int dy[] = {-1,1,0,0};
int dx[] = {0,0,-1,1};
int cnt;
bool loop;


void bfs(int y, int x, char t){
	queue<pair<int, int>> q;
	queue<pair<int, int>> s;
	
	memset(visited, 0, sizeof(visited));
	visited[y][x] = 1;
	q.push({y, x}); s.push({y, x});
	
	 
	while(q.size()){
		tie(y, x) = q.front(); q.pop();
		for(int i=0; i<4; i++){
			int ny = y + dy[i];
			int nx = x + dx[i];
			if(ny<0 || nx<0 || ny>11 || nx>5) continue;
			if(visited[ny][nx] == 0 && a[ny][nx] == t){
				visited[ny][nx] = 1;
				q.push({ny, nx}); s.push({ny, nx});
			}
		}
	}
	
	if(s.size() >= 4){
		loop = true; 
		while(s.size()){
			tie(y, x) = s.front(); s.pop();
			a[y][x] = '.';
		}
	}
	
	return;
	
}

void down(int y, int x, char c){
	for(int i = 11; i>y; i--){
		if(a[i][x] == '.') {
			a[i][x] = c;
			a[y][x] = '.';
			break;
		}
	}
	
	return;
}


int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    for(int i=0; i<12; i++){
    	for(int j=0; j<6; j++){
    		cin >> a[i][j];
		}
	}
	
	while(1){
		loop = false;
		
		for(int i=0; i<12; i++){
			for(int j = 0; j<6; j++){
				if(a[i][j] != '.') bfs(i, j, a[i][j]);
			}
		}
		
		for(int j=0; j<6; j++){
			for(int i=11; i>=0; i--){
				if(a[i][j] != '.') down(i, j, a[i][j]);		
				}
		}
	
		if(loop) cnt++; //터질 수 있는 뿌요가 여러 그룹이 있다면 동시에 터져야 하고 여러 그룹이 터지더라도 한번의 연쇄가 추가된다.
		else break;
		
	}
	
	cout << cnt << endl;
    
    return 0;
    
}