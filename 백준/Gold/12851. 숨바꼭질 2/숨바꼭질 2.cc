#include<bits/stdc++.h>
using namespace std; 

int n, k, x, nx;
long long visited[100001], cnt[100001];
queue<int> q;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	cin >> n >> k;
	
	if(n == k){
		cout << 0 << endl;	cout << 1 << endl;
		return 0;
	}
	
	visited[n] = 1;
	cnt[n] = 1;
	q.push(n);
	while(q.size()){
		x = q.front(); q.pop();
		for(int nx : {x - 1, x + 1, x * 2}){
			if(nx < 0 || nx > 100000) continue;
			if(visited[nx] == 0){
				q.push(nx);
				visited[nx] = visited[x] + 1;
				cnt[nx] += cnt[x]; 
			}
			else if(visited[nx] == visited[x] + 1) cnt[nx] += cnt[x];
		}
	}
	
	cout << visited[k] - 1 << endl;
	cout << cnt[k] << endl;
	
	return 0;

}