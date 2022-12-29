#include <bits/stdc++.h>
using namespace std;

int d, s, x, y, ret;
vector<int> v[1001];
int visited[1001];
 

void dfs(int x){
	visited[x] = 1;
	for(auto nx : v[x]){
		if(visited[nx]) continue;
		dfs(nx);
	}
	
	return;
	
}

int main(){
	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL); 

    
    cin >> d >> s;
    
    while(s--){
    	cin >> x >> y;
    	v[x].push_back(y);
    	v[y].push_back(x);

	}
	
	for(int i=1; i<=d; i++){
		if(visited[i] == 0){
			ret++;
			dfs(i);
		} 
	}	
	
	cout << ret << endl;
  
	return 0;
    
}