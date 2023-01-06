#include <bits/stdc++.h>
using namespace std;

int n, k;
int visited[100001];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n >> k;
	
	queue<int> q;
	visited[n] = 1;
	q.push(n);
	while(q.size()){
		if(visited[k]) break;
		int x = q.front(); q.pop();
		for(int nx : {x+1, x-1, x*2}){
			if(nx<0 || nx>100000) continue;
			if(visited[nx]) continue;
			visited[nx] = visited[x] + 1;
			q.push(nx);
		}
	}
	
	cout << --visited[k] << endl;
		
	return 0;

}