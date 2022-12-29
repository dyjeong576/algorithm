#include <bits/stdc++.h>
using namespace std;

int a, p, cnt;
int visited[1000000];
vector<int> v;

int dfs(int n){
	if(visited[n]) return n;
	int tmp = n;
	int ret = 0;
	visited[n] = 1; 
	v.push_back(n);
	while(tmp){
		ret += pow(tmp%10,p);
		tmp /=10;
	}
	return dfs(ret);
}

int main(){
	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL); 
    
    cin >> a >> p;
    int limit = dfs(a);
    
    for(int i=0; i<v.size(); i++){
    	if(v[i] != limit) cnt++;
    	else break;
	}
	
	cout << cnt << endl;
    
	return 0;
    
}