#include <bits/stdc++.h>
using namespace std;

int m, n;
int arr[10];
bool visited[10];

void dfs(int cnt, int x){
	if(cnt == m){
		for(int i=0; i<m; i++) cout << arr[i] << " ";
		cout << '\n';
		return;
	}
		
	for(int i=1; i<=n; i++){
		if(visited[i] == 0 && i > x){
			visited[i] = 1;
			arr[cnt] = i;
			dfs(cnt+1, i);
			visited[i] = 0;
		}
	}
}

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> n >> m;
    
    dfs(0, 0);
    
    return 0;
    
}