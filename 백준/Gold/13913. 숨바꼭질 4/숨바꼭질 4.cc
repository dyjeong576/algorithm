#include<bits/stdc++.h>
using namespace std; 

const int mx = 100001;
int n, k, x, nx, ret;
long long visited[mx], cnt[mx];
queue<int> q;
vector<int> tr;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	cin >> n >> k;
	visited[n] = 1;
	q.push(n);
	while(q.size()){
		x = q.front();	q.pop();
		if(x == k) ret = visited[k];
		for(int nx : {x + 1, x - 1, x * 2}){
			if(nx >= mx || nx < 0 || visited[nx]) continue;
			visited[nx] = visited[x] + 1;
			cnt[nx] = x;
			q.push(nx);
		}
	}
	for(int i = k; i != n; i = cnt[i]){
		tr.push_back(i);
	}
	tr.push_back(n);
	cout << --ret << endl;
	reverse(tr.begin(), tr.end());
	for(int n : tr) cout << n << " ";
	
	return 0;

}