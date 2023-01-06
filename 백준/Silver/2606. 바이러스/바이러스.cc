#include <bits/stdc++.h>
using namespace std;

vector<int> v[101];
int visited[101];
int x, n, a, b, ret;

void dfs(int n){
	visited[n] = 1;

	for(int t : v[n]){
		if(visited[t]) continue;
		dfs(t);
		ret++;
	}
	
	return;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> x >> n;
	
	for(int i=0; i<n; i++){
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	dfs(1);
	
	cout << ret << endl;
		
	return 0;

}