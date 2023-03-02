#include <bits/stdc++.h>

using namespace std;

vector<int> v[100001];
int visited[100001];
int a[100001];
void bfs(){
	queue<int> q;
	q.push(1);
	visited[1] = 1;
	while(q.size()){
		int x = q.front(); q.pop();
		for(int nx : v[x]){
			if(visited[nx]) continue;
			a[nx] = x;
			visited[nx] = 1;
			q.push(nx);
		}
	}
	return;
}

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n, x, y;
    
    cin >> n;
    
    for(int i=1; i<n; i++){
    	cin >> x >> y;
    	v[x].push_back(y);
    	v[y].push_back(x);
	}

	bfs();
	
	for(int i=2; i<=n; i++) cout << a[i] << "\n";
    
    return 0;
    
}