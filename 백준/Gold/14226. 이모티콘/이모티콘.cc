#include <bits/stdc++.h>
using namespace std;
int visited[1001][1001];
int a[1001][1001];

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int s, x, y;
    queue<pair<int, int>> q;
    
    cin >> s;
    
    q.push({1,0});
    
    while(q.size()){
    	tie(x, y) = q.front(); q.pop();
    	// 출력 
    	if(x == s) {	
    		cout << visited[x][y]; break;
		}
		//복사 
		if(visited[x][x] == 0){
			q.push({x,x});
			visited[x][x] = visited[x][y] + 1;
		}
		//붙여넣기 
		if(x + y <= s){
			if(visited[x+y][y] == 0){
				q.push({x+y, y});
				visited[x+y][y] = visited[x][y] + 1;
			}
		}
		//삭제 
		if(x > 0){
			if(visited[x-1][y] == 0){
				q.push({x-1, y});
				visited[x-1][y] = visited[x][y] + 1;
			}
		}
	}
    
    return 0;
    
}